#include <iostream>

using namespace std;

int readInt(string prompt){
  int number {};

  cout << endl 
       << prompt << endl;
  cin >> number;

  return number;
}