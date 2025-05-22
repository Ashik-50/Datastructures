#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
    string originalString = "This is a sample string. This string contains sample text.";
    string substringToRemove = "sample";    
    
    regex pattern(substringToRemove);
    
    string modifiedString = regex_replace(originalString, pattern, "");
    
    cout << modifiedString << endl;
    
    return 0;
}

