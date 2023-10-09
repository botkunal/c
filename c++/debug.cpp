#include <iostream>
using namespace std; 

//This function takes two double values 
//and figures the change amount from a sell. 
double giveChange(double total, double payment){
  double sum; 
  int str=stoi(payment);
  sum = str - total; 
  return sum; 
}

int main() {
  double myTotal,myPayment,change;
  bool loopCheck = false; 

  cout << "Store Opening!" <<endl; 

  while(loopCheck){
    cout << "Enter total of the purchase:" <<endl; 
    cout << "Enter 0 if you want to end program." <<endl; 
    cin >> myTotal;

    if(myTotal == 0){
      loopCheck = false; 
    }
    else{
      cout << "Enter the customers payment:" <<endl; 
      cin >> myPayment;//This amount is always greater than 'myTotal'  

      change = changeFunction(double myTotal,double myPayment);
      cout << "Change Due: " << change <<endl; 
    }
  }

  cout << "Closing Time!" <<endl; 
