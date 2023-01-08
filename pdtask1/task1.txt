#include<iostream>
using namespace std;
int value1=10;
int value2=20;
int add()
{
   value2=40;
   return value1+value2;

}
main()
{
    int x=value1;
    value1=100;
    x=20;
    value2=add();
    cout<<value1<< " " << value2;

}