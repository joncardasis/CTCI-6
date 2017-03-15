#include <iostream>
#include <string>
using namespace std;

void urlify(char str[], int length) {
  //Count spaces
  int spacesCount=0;
  for (int i=0; i<length; i++){
    if (str[i] == ' ') {
      spacesCount++;
    }
  }

  //Write the string backwords
  int newEndIndex = length + spacesCount * 2; //new end index with each ' ' counting as a %20
  str[newEndIndex] = '\0'; //Add null terminator to end of string
  
  for(int i=length-1; i>=0; i--) {
    if(str[i]==' '){
      str[newEndIndex-1] = '0';
      str[newEndIndex-2] = '2';
      str[newEndIndex-3] = '%';
      newEndIndex -= 3;
    }
    else{
      str[newEndIndex-1] = str[i];
      newEndIndex--; //move to next spot
    }
  }
}

int main() {
  char stuff[100];
  int length;
  cout << "Enter a word: ";
  fgets(stuff, 100, stdin);

  cout << "Enter its true length: ";
  cin >> length;

  urlify(stuff, length);
  cout << "URLified: " << stuff << endl;;

  return 0;
}
