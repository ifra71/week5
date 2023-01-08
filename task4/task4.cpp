#include<iostream>
#include<cmath>
using namespace std;
int evenish(int n);
int oddish(int n);
main()
{
    int num;
    int result;
    int n;

    cout<< "enter a number ";
    cin>> num;
    result=evenish(n);
    if(result%2==0)
    {
        result=evenish(n);
        cout<< " evenish " << endl;

    }
        if(result%2!=0)
        {
             result=oddish(n);
            cout<< " oddish " << endl;
        }
    
    
}

int evenish(int n)
{
    int num;
    int sum;
    int result;
    sum=0;
    num=num%1000;
    sum=sum+num;

    num=num/1000;
    num=num%1000;
    sum=sum+num;

    num=num/1000;
    num=num%1000;
    sum=sum+num;

    num=num/1000;
    num=num%1000;
    sum=sum+num;

    num=num/1000;
    num=num%1000;
    sum=sum+num;

    result=sum;

       return result;
}
    

int oddish(int n)
{
    int num;
    int sum;
    int result;
    sum=0;
    num=num%1000;
    sum=sum+num;

    num=num/1000;
    num=num%1000;
    sum=sum+num;

    num=num/1000;
    num=num%1000;
    sum=sum+num;

    num=num/1000;
    num=num%1000;
    sum=sum+num;

    num=num/1000;
    num=num%1000;
    sum=sum+num;

    result=sum;

       return result;
}
    

