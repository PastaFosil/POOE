//Juan Carlos Perez Ramirez

#include <iostream>

using namespace std;

int main()
{
    cout << "I'll count how many times does a substring is contained in a given string\n" << endl;
    
    cout << "Introduce the substring to look for: ";
    string subStr;
    getline(cin, subStr);
    
    cout << "\n\nIntroduce the whole string:" << endl;
    string wholeStr;
    getline(cin, wholeStr);
    
    int len = s.length();
    char word[len];
    for (int i=0; i<len; i++) {
        word[i] = s[i];
    }
    
    cout << "Your phrase has  " << countWords(s) << " words.";

    return 0;
}
