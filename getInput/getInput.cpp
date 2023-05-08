#include <iostream>
#include <string>

using namespace std;

void getInput (double &midTermScore, double &finalExamScore){
  cout << "getInput" << endl;
  double midterm {}, final {};
  readScore("Enter your midterm score: ", midTermScore);
  readScore("Enter your final score: ", finalExamScore);
}