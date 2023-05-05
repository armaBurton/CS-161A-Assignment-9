#include <iostream>
#include <string>
#include <sstream>
#include "welcomeText/welcomeText.cpp"
#include "readInt/readInt.cpp"

using namespace std;


int main () {
  int numberOfAssignments {};
  double assignmentGrade {},
         sumOfAssignmentGrade {};
  ostringstream oss;

  welcomeText();
  numberOfAssignments = readInt("Enter the number of assignments (0 to 10): ");
  for(int i = 0; i < numberOfAssignments;i++){
    oss << "Enter score " << i + 1 << ": ";
    cin >> assignmentGrade;
    sumOfAssignmentGrade += assignmentGrade;
  }
  cout << sumOfAssignmentGrade << endl;

  return 0;
}

