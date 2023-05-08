#include <iostream>

using namespace std;

void readScore(string prompt, double &num){
  double scoreInput = -1;

  cout << prompt;
  cin >> scoreInput;
  // while (1){
  //   if (cin.fail()){
  //     cin.clear();
  //     cin.ignore(numeric_limits<streamsize>::max(), '\n');
  //     cout << "Please enter a numerical value. ";
  //     cout << prompt;
  //     cin >> scoreInput;
  //   } else if (!cin.fail()){
  //     break;
  //   }
  }
  while(scoreInput < 0 || scoreInput > 4){
    cout << "Score must be a value of 0 - 4.\n";
    cout << prompt;
    cin >> scoreInput;
  }
  num += scoreInput;
}