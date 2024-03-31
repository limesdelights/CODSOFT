#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

  srand((unsigned int)(NULL));
  
  int no = (rand() % 100) + 1;
  int num = 0;
  do{
    cout<< "Enter your number (1-100):";
    cin>> no;

    if (num > no)
    cout<< "The number is lower. Try again." <<endl;

    else if(num < no)
    cout<< "The number is higher. Try again." <<endl;

    else
    cout<< "You guessed right! Nice.." <<endl;
  }
  while(num != no);
  
  return 0;
  }