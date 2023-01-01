#include <iostream>
using namespace std;

void collect();


main ()
{
while(true)
{
collect();

system("cls");

}



}



void collect()
{
 string name;
 int price;
 cout<<"Enter country name  "<<endl; 
 cin>>name;
 cout<<" Enter the price of ticket in dollars"<<endl;
 cin>>price;
   



if (name == "pakistan")
{
 float result,result2;
 result = price * 0.05;
  result2 = price - result;
cout<<" your price is "<<result2<<endl; 
 
}

if (name == "ireland")
{
 float result,result2;
 result = price * 0.1;
  result2 = price - result;
cout<<" your price is "<<result2<<endl; 
 
}


if (name == "india")
{
 float result,result2;
 result = price * 0.2;
  result2 = price - result;
cout<<" your price is "<<result2<<endl; 
 
}



if (name == "england")
{
 float result,result2;
 result = price * 0.3;
  result2 = price - result;
cout<<" your price is "<<result2<<endl; 
 
}

if (name == "canda")
{
 float result,result2;
 result = price * 0.45;
  result2 = price - result;
cout<<" your price is "<<result2<<endl; 
 
}









}