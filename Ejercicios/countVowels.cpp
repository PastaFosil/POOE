/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <algorithm>

using namespace std;

int checkVowel(char c) {
    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    
    int match = 0;
    for (int i=0; i<10; i++) {
        if (c==vowels[i]) {
            match = 1;
        }
    }
    
    return match;
}

void countVowels(char *arr, int len) {
    int count = 0;
    for (int i=0; i<len; i++) {
        if (checkVowel(arr[i])==1) {
            count++;
        };
    };
    
    cout << "The word contains " << count << " vowels" << endl;
}
int main()
{
    cout << "I'll count the number of vowels that the word you write contains\n" << endl;
    
    cout << "Introduce the word: ";
    string s;
    cin >> s;
    
    int len = s.length();
    char word[len];
    for (int i=0; i<len; i++) {
        word[i] = s[i];
    }
    
    countVowels(word, len);

    return 0;
}
