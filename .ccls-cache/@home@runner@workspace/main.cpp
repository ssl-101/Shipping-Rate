//This Program calculates the ocean levels rise with given years.
#include <iostream>
using namespace std;

int main()
{
  //Variables for rise rate, 5 years, 7 years and 10 years.
  const double riseRate = 1.5; // mm per year
  double rFive = 5;
  double rSeven = 7;
  double rTen = 10;
  //Calculations for ocean level for each year.
 double fiveYear = riseRate * rFive;
 double sevenYear = riseRate * rSeven;
 double tenYear = riseRate * rTen;

  cout <<"The ocean's rise rate for 5 years is " << fiveYear <<"mm per year."<<endl;
  cout <<"The ocean's rise rate for 7 years is " << sevenYear <<"mm per year."<<endl;
  cout <<"The ocean's rise rate for 10 years is " << tenYear <<"mm per year."<<endl;

  return 0;
    }
