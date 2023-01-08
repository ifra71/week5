#include<iostream>
#include<cmath>
using namespace std;
float positiveqd(float a , float b , float c);
float negativeqd(float a , float b , float c );
main()
{
  float a=5;
  float b=6;
  float c=1;
  float result;

  result=positiveqd(a,b,c);
  cout<< " the result is : " << result << endl;
  result=negativeqd(a,b,c);
  cout<< " the result is : " << result << endl;

}

float positiveqd(float a , float b , float c)
{
  float result;
  float fac,power,minus,twoa,square,minusb,quadpos;
  fac=4*a*c;
  power=pow(b,2);
  minus=power-fac;
  twoa=2*a;
  sqauree=sqrt(minus);
  minusb= -b+sqaure;
  result=minusb/twoa;
  cout << " x = "<< result << endl;
  return result;
  
}


float negativeqd(float a , float b , float c)
{
  float result;
  float fac,power,minus,twoa,square,minusb,quadneg;
  fac=4*a*c;
  power=pow(b,2);
  minus=power-fac;
  twoa=2*a;
  sqaure=sqrt(minus);
  minusb= -b-sqaure;
  result=minusb/twoa;
  cout<< " x= " << result << endl;
  return result;

}


  
  
   