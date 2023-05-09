#include <iostream>
#include <string>

using namespace std;

void getInput (double &midTermScore, double &finalExamScore){
  readScore("Enter your midterm score: ", midTermScore);
  readScore("Enter your final score: ", finalExamScore);
}