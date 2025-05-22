#include <iostream>
#include <cstring>

void computeLPSArray(const char* pattern, int m, int* lps) {
    int len = 0; // Length of the previous longest prefix suffix

    lps[0] = 0; // lps[0] is always 0

    int i = 1;
    while (i < m) {
        if (pattern[i] == pattern[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
}

void KMPSearch(const char* text, const char* pattern) {
    int n = strlen(text);
    int m = strlen(pattern);

    int lps[m]; // Longest Prefix Suffix array

    computeLPSArray(pattern, m, lps);

    int i = 0; // Index for text[]
    int j = 0; // Index for pattern[]

    while (i < n) {
        if (pattern[j] == text[i]) {
            i++;
            j++;
        }

        if (j == m) {
            std::cout << "Pattern found at index " << i - j << std::endl;
            j = lps[j - 1];
        } else if (i < n && pattern[j] != text[i]) {
            if (j != 0)
                j = lps[j - 1];
            else
                i++;
        }
    }
}

int main() {
    char text[] = "ABABDABACDABABCABAB";
    char pattern[] = "ABABCABAB";

    KMPSearch(text, pattern);

    return 0;
}

