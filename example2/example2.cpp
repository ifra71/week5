#include<iostream>
using namespace std;
int isgreater(int number1,int number2);
int isminimum(int number1,int number2);

main()
{
  int number1;
  int number2;
  int result;

  cout <<" enter first number " ;
  cin>> number1;

  cout << " enter second number " ;
  cin>> number2;

  result=isgreater(number1,number2);
  cout<< " the greater no. is  " << result <<endl;
  result=isminimum(number1,number2);
  cout << " the smaller no.  is " << result << endl;
}
int isgreater(int number1,int number2)
{
  if(number1>number2)
   {
     return number1;
   }
  if(number2>number1)
   {
     return number2;
    }
   return 0;
}

int isminimum(int number1 , int number2)
{
  if(number1<number2)
   {
     return number1;
   }
  if(number2<number1)
   {
     return number2;
   }
   return 0;

}