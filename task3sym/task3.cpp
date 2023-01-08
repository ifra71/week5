#include<iostream>
#include<cmath>
using namespace std; 
string symmetric(int dig1, int dig2, int dig3);

 main()
  {
   int usernumber;
   int rem;
   int dig1 ;
   int dig2 ;
   int dig3 ; 
   string result;   
   cout<< "Enter a 3 digit number: ";
   cin>>usernumber;
   cout<<endl;
   rem=usernumber % 100;
   dig1=usernumber/100;
   dig3= rem % 10;
   dig2=rem / 10;
   result=symmetric(dig1, dig2, dig3);
   cout<<result;
  }
 string symmetric(int dig1, int dig2, int dig3)
  { 
   string t = "True";
   string f = "False";
   
   if(dig1 == dig3)
    {
	 return t;
	}
   if(dig1!=dig3)
	{
	  return f;
	}
	return 0;
   }