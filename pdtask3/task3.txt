#include<iostream>
using namespace std;
float taxcalculator(char type,float price);


main()
{
  int priceofveh;
  char vehtypecode;
  int taxrate;
  int type;
  int price;
  float finalprice;
  cout<< " enter price of the vehicle " ;
  cin>> priceofveh;
  cout<< " enter vehicle type (M,E,S,V,T)";
  cin>>vehtypecode;
  finalprice=taxcalculator(type,price);
  cout<< " the final price on a vehicle of type "<< vehtypecode << " after adding tax is "<< finalprice << endl;

}

  float taxcalculator(char type,float price)
  {
    float taxamount;
    float finalprice;
    int priceofveh;
    int taxrate;
    char typee;
    if(type=='M')
    {
      taxrate=priceofveh*(6/100);
      finalprice=priceofveh+taxamount;
      
    }
    if(typee=='E')
    {
      taxrate=priceofveh*(8/100);
      finalprice=priceofveh+taxamount;
    }
    if(typee=='S')
    {
      taxrate=priceofveh*(10/100);
      finalprice=priceofveh+taxamount;

       
    }
    if(typee=='V')
    {
      taxrate=priceofveh*(12/100);
      finalprice=priceofveh+taxamount;

    }
    if(typee=='T')
    {
      taxrate=priceofveh*(15/100);
      finalprice=priceofveh+taxamount;
    }
    return finalprice;
  }