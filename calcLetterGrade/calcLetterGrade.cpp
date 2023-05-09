using namespace std;

void calcLetterGrade(double finalScore, char &letter){
  if (4 >= finalScore && finalScore >= 3.3){
    letter = 'A';
  } else if ( 3.3 > finalScore && finalScore >= 2.8){
    letter = 'B';
  } else if ( 2.8 > finalScore && finalScore >= 2){
    letter = 'C';
  } else if ( 2 > finalScore  && finalScore >= 1.2){
    letter = 'D';
  } else if ( 1.2 > finalScore && finalScore >= 0){
    letter = 'F';
  }
}