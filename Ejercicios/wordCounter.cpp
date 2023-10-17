//Juan Carlos Perez Ramirez

#include <iostream>
#include <algorithm>

using namespace std;

int countWords(string s) {
    
    int counter = 0;
    int len = s.length();
    
    for (int i=0; i<=len; i++) {
        if (isspace(s[i])) {
            counter++;
        };
    }
    
    if (s.empty()) {
        return 0;
    } else {
        return counter+1;
    }
}

int main()
{
    cout << "I'll count the number of words in any phrase you write\n" << endl;
    
    cout << "Introduce the phrase: ";
    string s;
    getline(cin, s);
    
    int len = s.length();
    char word[len];
    for (int i=0; i<len; i++) {
        word[i] = s[i];
    }
    
    cout << "Your phrase has  " << countWords(s) << " words.";

    return 0;
}


