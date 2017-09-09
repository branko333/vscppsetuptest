#include <iostream>
using namespace std;

int test();
int test2();

int main()
{
  int i = 5;  
  cout << "Hello World!" << endl;   cout << "Welcome to C++ Programming" << endl; 
  i = test();
  int j = 0;
  // char* c = "";
  cin >> j;

  if(j > 5) {
    cin >> j;
  }

  return 0;
}

int test() {
  int j = test2();
  return 56;
}

int test2() {
  return 123;
}
