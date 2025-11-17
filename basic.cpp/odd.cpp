#include<iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter n: " <<endl;
  cin >> n;
  
  if(n%2 != 0) {
    cout << "odd" <<endl;
  }else {
    cout << "even" <<endl;
  }
  return 0;
}