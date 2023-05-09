#include <iostream>
#include <string>
#include "welcomeText/welcomeText.cpp"
#include "readInt/readInt.cpp"
#include "assignAverage/assignAverage.cpp"
#include "getInput/getInput.cpp"
#include "calcFinalScore/calcFinalScore.cpp"
#include "calcLetterGrade/calcLetterGrade.cpp"

using namespace std;


int main () {
  int numberOfAssignments {};
  double sumOfAssignmentGrade {},
         average {},
         midterm {},
         final {},
         calculatedFinalScore {};
  string queryConstructor {};
  char letterGrade {};

  //Welcome prompt
  welcomeText();

  //query user for number of assignments that will be graded
  numberOfAssignments = readInt("Enter the number of assignments (0 to 10): ");
  //if 10 > numberOfAssignments > 0, query again, repeat until correct value is entered.
  while(numberOfAssignments < 0 || numberOfAssignments > 10){
    cout << "User input is greater or lesser than allowed value.\n";    
    numberOfAssignments = readInt("Please enter a value between 0 - 10: ");
  }

  //get average of submitted assignments
  average = assignAverage(numberOfAssignments);

  //collect scores for midterm and final
  getInput(midterm, final);

  calculatedFinalScore = calcFinalScore(average, midterm, final);
  calcLetterGrade(calculatedFinalScore, letterGrade);
  
  cout << endl
       << "Your Final Numeric score is: " << calculatedFinalScore << endl
       << "Your Final Grade is " << letterGrade << endl;

  return 0;
}

