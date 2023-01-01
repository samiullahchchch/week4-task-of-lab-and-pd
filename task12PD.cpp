#include <iostream>
using namespace std;
 
void flower();

main() 
{
flower();
}

void flower()
{
 int red1,tulpis,white;
 float result;
 cout<<"Enter the nu. of Red roses :"<<endl;
 cin>>red1;
 cout<<"Enter the nu. of white roses :"<<endl;
 cin>>white; 
 cout<<"Enter the nu. of tulpis roses :"<<endl;
 cin>>tulpis;
 result = (red1*2.00) + (white*4.10) + (tulpis*2.50);
 cout<<"Origional price:"<<result<<endl;
if(result >= 200)
{
 float discount,pad;
 discount = result*0.2;
 pad = result - discount;
 cout<<"price after discount"<<pad<<endl;
}

}














