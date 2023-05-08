#include <iostream>
#include <string>
#include "welcomeText/welcomeText.cpp"
#include "readInt/readInt.cpp"
#include "assignAverage/assignAverage.cpp"
#include "getInput/getInput.cpp"

using namespace std;


int main () {
  int numberOfAssignments {};
  double assignmentGrade {},
         sumOfAssignmentGrade {},
         average {},
         midterm {},
         final {};
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

  //get average of submitted assignments
  average = assignAverage(numberOfAssignments);

  getInput(midterm, final);

  return 0;
}

