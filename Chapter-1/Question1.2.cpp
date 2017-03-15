#include <iostream>
#include <string.h>
#include <assert.h>
using namespace std;

//Returns if a string is a permutation of another
bool isPermuation(string s1, string s2) {
  if (s1.length() != s2.length()) return false;

  sort(s1.begin(), s1.end());
  sort(s2.begin(), s2.end());
  if (s1 == s2) {
    return true;
  }
  return false;
}

void testIsPermutation() {
  bool s1ContainsS2 = isPermuation("Hello World", "WHoerllldo ");
  assert(s1ContainsS2 && "'WHoerllldo ' is a permutation of 'Hello World'");

  bool s2ContainsS1 = isPermuation("Cold:Maroon 5", "Maroon5: Cold");
  assert(s2ContainsS1 && "'Cold:Maroon5' is a permutation of 'Maroon5: Cold'");

  bool separateStrings = isPermuation("Unique Dude", "Completely Separate string");
  assert(separateStrings == false && "Strings do not have anything in common.");
}

int main() {
  testIsPermutation();
  return 0;
}
