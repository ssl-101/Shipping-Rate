//This program will calculate interest earned. 
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
//variables for calculations.
  double principal, interestRate, timesCompounded;

//gather user input.
  cout << " Enter principal amount. (initial investment)."<<endl;
  cin >> principal;
  cout << " Enter the interest rate in %."<<endl;
  cin >> interestRate;
  cout << "Enter times compounded per year."<<endl;
  cin >> timesCompounded;

//Calculations. Starting off with converting % into decimal.
  double decimalRate = interestRate/100;
  
//Calculations for final balance.
  double finalBalance = principal * pow(1 +(decimalRate / timesCompounded), timesCompounded);

//Calculations for interest earned.
  double interestEarned = finalBalance - principal;
  

//Conclusion: output display
  cout << fixed << setprecision(2); 
  cout << " View Results Below."<<endl;
  cout << " Interest Rate :"<< interestRate<<endl;
  cout << " Times Compounded:"<< timesCompounded <<endl;
  cout << " Principal:"<< principal <<endl;
  cout << " Interest Earned:" << interestEarned <<endl;
  cout << " Final Balance:" << finalBalance <<endl;
   
  return 0;
}