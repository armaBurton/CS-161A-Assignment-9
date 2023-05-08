#include <iostream>
#include <string>
#include "welcomeText/welcomeText.cpp"
#include "readInt/readInt.cpp"
#include "readScore/readScore.cpp"

using namespace std;


int main () {
  int numberOfAssignments {};
  double assignmentGrade {},
         sumOfAssignmentGrade {};
  string templateLiteral {},
         queryConstructor {};

  //Welcome prompt
  welcomeText();

  //query user for number of assignments that will be graded
  numberOfAssignments = readInt("Enter the number of assignments (0 to 10): ");
  cout << endl;
  //if 10 > numberOfAssignments > 0, query again, repeat until correct value is entered.
  while(numberOfAssignments < 0 || numberOfAssignments > 10){
    cout << "User input is greater or lesser than allowed value.\n";    
    numberOfAssignments = readInt("Please enter a value between 0 - 10: ");
  }

  //loop through numberOfAssignment for collection of assignment grades.
  for (int i = 0; i < numberOfAssignments; i++){
    queryConstructor = "Enter score ";
    queryConstructor += to_string(i + 1);
    queryConstructor += ": ";
    readScore(queryConstructor, sumOfAssignmentGrade);
  }
  


  return 0;
}

