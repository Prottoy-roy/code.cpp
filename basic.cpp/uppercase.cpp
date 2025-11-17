#include <iostream>
using namespace std;
int main() {
  /*char ch;
  cout << "Enter ch:" << endl;
  cin >> ch;
  if(ch >= 'a' && ch <= 'z') {
    cout << "lower case\n";
  }else if(ch >= 'A' && ch <= 'Z'){
    cout << "upper case\n";
  }else {
    cout << "not a char" << endl;
  }*/

  char ch;
  cout << "Enter ch:" << endl;
  cin >> ch;
  if(ch >= 97 && ch <= 123) {
    cout << "lower case\n";
  }else if(ch >= 65 && ch <= 91){
    cout << "upper case\n";
  }else {
    cout << "not a char" << endl;
  }
  return 0;
}