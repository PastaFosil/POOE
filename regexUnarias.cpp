/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <regex>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <cctype>
#include <string>

using namespace std;


/*int main() {
    string s = "sin(4.1+5.2*2)+((3*4*(2-1))*2)!*cos((1.1*(2+1))*3)/3!";
    regex rgx("[a-z]{3}\\(.*?\\){1,}|\\(.*?(\\)\\!)");
    smatch match;

    while (regex_search(s, match, rgx)) {
        cout << "Match: " << match[0] << endl;
        s = match.suffix().str();
    }
    
    return 0;
}*/

/*string performOperation(string expression) {
    if (isalpha(expression[0])) {
        string func = expression.substr(0,3);
        string argument_str = expression.substr(3);
        int par = 0;
        
        for (char c : argument_str) { // check if every "(" has a paired ")"
            if (c == '(')
                par += 1;
            else if (c == ')')
                par -= 1;
        }
        if (par > 0) { // add missing ")"
            while (par > 0) {
                argument_str += ')';
                par -= 1;
            }
        }
        
        argument_str = infijaAPosfija(argument_str);
        double argument_result = evaluarPosfija(argument_str)
        
        switch (func) {
            case "sin":
                return 
        }
    }
    else {
        string argument_str = infijaAPosfija(expression.substr(0, expression.length()-1));
        double argument_result = evaluarPosfija(argument_str);
        return factorial(argument_result);
    }
}*/

int main() {
  string input = "sin(4.1+5.2*2)+((3*4*(2-1))*2)!*cos(1.1*(2+1))+3!/2";
  regex pattern("[a-z]{3}\\(.*?\\)|\\(.*?(\\)\\!)|[0-9]{1,}\\!");
  vector<string> matches;
  vector<string> substrings;
  unordered_map<string, string> replacements;
  
  for (sregex_iterator i = sregex_iterator(input.begin(), input.end(), pattern); i != sregex_iterator(); ++i) {
    smatch match = *i;
    
    matches.push_back(match.str());
    substrings.push_back(match.prefix().str());
  }
  
  cout << "Matches:" << endl;
  for (const auto& match : matches) {
    cout << match << endl;
  }
  
  int matches_length = matches.size();
  for (int i=0; i<matches_length; i++) {
      replacements.insert({matches[i], performOperation(matches[i]));
  }
  
  return 0;
}


