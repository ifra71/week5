#include<iostream>
#include<cmath>
using namespace std;
float pyramidvol(int lenght , int width , int height, float volume , string outputunit);
main()
{
   int lenght;
   int width;
   int height;
   float volume;
   string outputunit;
   float result;
   result=pyramidvol(lenght,width,height,volume,outputunit);
   cout<< " pyramid volume is "<< result; ;

}

float pyramidvol(int lenght , int width , int height, float volume , string outputunit)
{
   int l;
   int w;
   int h;
   string outunit;
   int cm,m,km;
   float result;
   float volumeofpyramid;
   float output;
   cout<< " enter lenght of pyramid";
   cin>>l;
   cout<< " enter width of pyramid ";
   cin>> w;
   cout << " enter height of pyramid ";
   cin>> h;
   cout<< " enter output unit (cm,m,km) " ;
   cin>> outunit;
   volumeofpyramid=(l*w*h)/3;

   result=volumeofpyramid;
   return result;
   
   
}