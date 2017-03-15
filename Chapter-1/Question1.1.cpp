#include <iostream>
#include <string.h>
using namespace std;

//Supports ASCII + Extended ASCII characters
bool hasUniqueCharacters(string s) {
  if (s.length() > 256) {
    //Repeats characters. 256 characters in extended ASCII
    return false;
  }

  bool boolHashMap[256] = {false};
  for(int i; i<s.length(); i++){
    int characterIndex = (int)s.at(i);

    if(boolHashMap[characterIndex]) { //value already set
      return false;
    }
    boolHashMap[characterIndex] = true;
  }
  return true;
}

int main() {
  string s;
  cout << "Enter a string: ";
  cin >> s;

  bool unique = hasUniqueCharacters(s);
  string wordDesc = unique ? "Yes" : "No";
  cout << "All unique characters? " << wordDesc << endl;
  return 0;
}
