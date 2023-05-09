using namespace std;

double calcFinalScore(double assignAvg, double midterm, double final){
  const double assignWeight = 0.6,
               testWeight = 0.2;


  return ((assignAvg * assignWeight) + (midterm * testWeight) + (final * testWeight));
}