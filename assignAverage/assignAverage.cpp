#include <iostream>
#include <string>
#include <math.h>
#include "../readScore/readScore.cpp"

using namespace std;

double assignAverage(int numAssigns){
  string queryConstructor {};
  double sumOfAssignmentGrade;

  //loop through numberOfAssignment for collection of assignment grades. move this to the function assignAverage()
  for (int i = 0; i < numAssigns; i++){
    queryConstructor = "Enter score ";
    queryConstructor += to_string(i + 1);
    queryConstructor += ": ";
    readScore(queryConstructor, sumOfAssignmentGrade);
  }
  cout << endl;

  //return average
  return sumOfAssignmentGrade / numAssigns;
}