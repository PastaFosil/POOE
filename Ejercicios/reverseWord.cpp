//Juan Carlos Perez Ramirez

#include <iostream>
#include <algorithm>

using namespace std;

string reverseWord(string s) {
    string rev = s;
    int len = s.length();
    
    for (int i=0; i<=len; i++) {
        rev[i] = s[len-1-i];
    }
    
    return rev;
}

int main()
{
    cout << "I'll reverse any word you write\n" << endl;
    
    cout << "Introduce the word: ";
    string s;
    cin >> s;
    
    int len = s.length();
    char word[len];
    for (int i=0; i<len; i++) {
        word[i] = s[i];
    }
    
    cout << s << " backwards is " << reverseWord(s);

    return 0;
}

