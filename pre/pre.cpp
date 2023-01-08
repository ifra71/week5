#include<iostream>
#include<cmath>
using namespace std;

main()
{
  float num1;
  float num2;
  float result;
  cout<< " enter number " ;
  cin>> num1;
  cout<< " enter number ";
  cin>> num2;
  
  result=max(num1,num2);
  cout<< " maximum :" << result << endl;
  result=min(num1,num2);
  cout << " minimum " << result <<endl;
  result=sqrt(num1);
  cout<< " sqaure root " << result <<endl;
  result = pow(num1,num2);
  cout<< " power : " << result<< endl;
  result=ceil(num1);
  cout<< " ceil : " << result << endl;
  result=floor(num2);
  cout<< " floor is : " << result << endl;                                                                                                                                                                                        
  result=cbrt(num1);
  cout<< " cube root is  " << result << endl;
  
  
    
}
  
