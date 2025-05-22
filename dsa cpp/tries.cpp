#include <iostream>
#include <cstring>
using namespace std;

class TrieNode {
public:
    bool isEndOfWord;
    TrieNode* children[26];

    TrieNode() {
        isEndOfWord = false;
        for (int i = 0; i < 26; i++)
            children[i] = nullptr;
    }
};
   
void insert(TrieNode* root, const string& key) {
    TrieNode* curr = root;
    for (int i = 0; i < key.length(); i++) {
        int index = key[i] - 'a';
        if (curr->children[index] == nullptr)
            curr->children[index] = new TrieNode();
        curr = curr->children[index];
    }
    curr->isEndOfWord = true;
}

bool search(TrieNode* root, const string& key) {
    TrieNode* curr = root;
    for (int i = 0; i < key.length(); i++) {
        int index = key[i] - 'a';
        if (curr->children[index] == nullptr)
            return false;
        curr = curr->children[index];
    }
    return (curr != nullptr && curr->isEndOfWord);
}

int main() {
    int n;
    cin >> n;

    TrieNode* root = new TrieNode();

    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        insert(root, word);
    }

    string searchWord;
    cin >> searchWord;
    
    if (search(root, searchWord))
        cout << "Present in trie" << endl;
    else
        cout << "Not present in trie" << endl;

    return 0;
}

/*
#include <iostream>
using namespace std;

class TrieNode {
public:
    bool isEndOfNumber;
    TrieNode* children[10];

    TrieNode() {
        isEndOfNumber = false;
        for (int i = 0; i < 10; i++)
            children[i] = nullptr;
    }
};
   
void insert(TrieNode* root, int num) {
    TrieNode* curr = root;
    int numCopy = num;
    while (numCopy > 0) {
        int digit = numCopy % 10;
        if (curr->children[digit] == nullptr)
            curr->children[digit] = new TrieNode();
        curr = curr->children[digit];
        numCopy /= 10;
    }
    curr->isEndOfNumber = true;
}

bool search(TrieNode* root, int num) {
    TrieNode* curr = root;
    int numCopy = num;
    while (numCopy > 0) {
        int digit = numCopy % 10;
        if (curr->children[digit] == nullptr)
            return false;
        curr = curr->children[digit];
        numCopy /= 10;
    }
    return (curr != nullptr && curr->isEndOfNumber);
}

int main() {
    int n;
    cin >> n;

    TrieNode* root = new TrieNode();

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        insert(root, num);
    }

    int searchNum;
    cin >> searchNum;
    
    if (search(root, searchNum))
        cout << "Present in trie" << endl;
    else
        cout << "Not present in trie" << endl;

    return 0;
}
*/
