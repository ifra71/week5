#include<iostream>
using namespace std;
int add(int number1 , int number2);
float divide(float number1 , float number2);
main()
{
  int number1,number2;
  int sum;
  float division;
  cout << "enter first number : " ;
  cin>>number1;
  cout << " enter second number : " ;
  cin>>number2;
  
  add(number1 ,number2);
  cout<< "sum is  " << sum << endl; 
  divide(number1 , number2);
  cout << "division is"<< division << endl;

  }
int add ( int number1 , int number2)
{
  
  int sum=number1+number2;
  return sum;
}
float divide(float number1 , float number2)
{
  float division=number1/number2;
  return division;
}