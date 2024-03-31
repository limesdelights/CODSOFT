#include <iostream>
#include <cmath>


using namespace std;

int main(){

  string operation;
  double n1, n2;

  cout<< "Enter first no:";
  cin>> n1;

  cout<< "Operation (+,-,*,/):";
  cin>> operation;

  cout<< "Enter second no:";
  cin>> n2;

  if (operation == "+"){
    cout << n1 + n2;
  }
  
  else if(operation == "-"){
    cout << n1 - n2;
  }

  else if(operation == "*"){
    cout << n1 * n2;
  }

  else if(operation == "/"){
    cout << n1 / n2;
  }

  else{
    cout << "Error.";
  }
  return 0;
}