#include<iostream>
using namespace std;
int main() {
  int a,b;
  //additon
  cout << "Enter a: " <<endl;
  cin >>a;
  cout << "Enter b: " <<endl;
  cin >>b;
  int sum=(a+b);
  cout << "sum of two num = "<< sum <<endl;
  //multiply
  cout << "Enter a: " <<endl;
  cin >>a;
  cout << "Enter b: " <<endl;
  cin >>b;
  int prod=(a*b);
  cout << "product is = " << prod <<endl;
  //division
  cout << "Enter a: " <<endl;
  cin >>a;
  cout << "Enter b: " <<endl;
  cin >>b;
  int division=(a/b);
  cout << "division is = " << division <<endl;
  //substruction
  cout << "Enter a: " <<endl;
  cin >>a;
  cout << "Enter b: " <<endl;
  cin >>b;
  int sub=(a-b);
  cout << "substraction is = " << sub <<endl;
  //modulo
  cout << "Enter a: " <<endl;
  cin >>a;
  cout << "Enter b: " <<endl;
  cin >>b;
  int mod=(a%b);
  cout << "modulus is = " << mod <<endl;
  return 0;
}