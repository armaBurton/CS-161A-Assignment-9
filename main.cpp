#include <iostream>
#include <string>
#include "welcomeText/welcomeText.cpp"
#include "readInt/readInt.cpp"

using namespace std;


int main () {
  int numberOfAssignments {};
  double assignmentGrade {},
         sumOfAssignmentGrade {};
  string templateLiteral {},
         queryConstructor {};

  welcomeText();
  numberOfAssignments = readInt("Enter the number of assignments (0 to 10).");
  cout << endl;
  while(numberOfAssignments < 0 || numberOfAssignments > 10){
    numberOfAssignments = readInt("Please enter a value between 0 - 10.");
  }

  // for(int i = 0; i < numberOfAssignments;i++){
  //   queryConstructor = "Enter score ";
  //   queryConstructor += to_string(i + 1);
  //   queryConstructor += " (0 to ";
  //   assignmentGrade = readInt(queryConstructor, 4);
  //   sumOfAssignmentGrade += assignmentGrade;
  // }
  // sumOfAssignmentGrade /= numberOfAssignments;
  // cout << sumOfAssignmentGrade << endl;

  return 0;
}

