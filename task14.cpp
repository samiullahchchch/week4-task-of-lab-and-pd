#include <iostream>
#include <windows.h>
using namespace std;

void menu();
void aggregate(float matricm1,float interm1,float ecatm1);
void aggregate2(float matricm2,float interm2,float ecatm2);
void compare(float  ecatm1,float ecatm2,string nam1,string nam2);

main()


{
while(true)
{  
    int input;
   string nam1;
  string nam2;
  float matricm1;
  float matricm2;
  float interm1;
  float interm2;
  float ecatm1;
  float ecatm2;
  float mper2;
  float iper2;
  float  eper2;  
  float mper1;
  float iper1;
  float eper1;
  menu();
  cout<<"choose"<<endl;
    
  cin>>input;
    
if (input == 1)
{
 cout<<"  Enter your name:           "<<endl;
 cin>>nam1;
 cout<<" Enter your matric marks:             "<<endl;
 cin>>matricm1;
 cout<<" Enter your intermediate marks marks:            "<<endl;
 cin>>interm1;
 cout<<"Enter your ecat marks"<<endl;
 cin>>ecatm1;
 

} 
if (input == 2)
{

 cout<<"  Enter your name:           "<<endl;
 cin>>nam2;
 cout<<" Enter your matric marks(out of 1100):             "<<endl;
 cin>>matricm2;
 cout<<" Enter your intermediate marks marks(out of 550):            "<<endl;
 cin>>interm2;
 cout<<"Enter your ecat marks(out of 400)"<<endl;
 cin>>ecatm2;

}


if (input == 3)
{
 aggregate( matricm1, interm1, ecatm1);
}

if (input == 4)
{
 aggregate2(matricm2,interm2,ecatm2);
}

if (input == 5)
{
 compare(ecatm1,ecatm2,nam1,nam2);
}

}
}


















void menu()
{
 cout<<"******************************************* "<<endl;
 cout<<"*                                         *  "<<endl;
 cout<<"*      UNIVERSITY ADDMISSION              *  "<<endl;
 cout<<"*      MANAGEMENT SYSTEM                  *  "<<endl;
 cout<<"*                                         *  "<<endl;
 cout<<"*                                         *  "<<endl;
 cout<<"*                                         *  "<<endl;
 cout<<"*                                         *  "<<endl;
 cout<<"*                                         *  "<<endl;
 cout<<"*                                         *  "<<endl;
 cout<<"*                                         *  "<<endl; 
 cout<<"*                                         *  "<<endl;
 cout<<"******************************************* "<<endl;
 cout<<" WLLCOME TO UET LAHORE               "<<endl;
 cout<<" PRESS 1 FOR DETAIL OF FIRST STUDENT:                   "<<endl;
cout<<"  PRESS 2 FOR DETAIL OF FIRST STUDENT:                   "<<endl;
cout<<"  PRESS 3 TO SHOW AGGREGATE  OF FIRST STUDENT:                  "<<endl;
cout<<"  PRESS 4 TO SHOW AGGREGATE  OF FIRST STUDENT:                  "<<endl;
cout<<"  PRESS 5 TO COMPARE STUDENTS:                  "<<endl;

}




void aggregate(float matricm1,float interm1,float ecatm1)
{

  float result;
  result= (matricm1/1100)* 30 + (interm1 /1100)*30 + (ecatm1/1100)*40;
 
 cout<<"Your  aggregate is:  "<<result<<endl;
 system("pause"); 

}

void aggregate2(float matricm2,float interm2,float ecatm2)

{
 
 float result1;
 result1 = ((matricm2/1100)* 30) + ((interm2 /1100)*30) + ((ecatm2/1100)*40);
 cout<<"Your  aggregate is:  "<<result1<<endl;
  system("pause");
  
}




void compare(float ecatm1,float ecatm2,string nam1,string nam2)
{
 
 
if (ecatm1 > ecatm2)
{
 cout<<" your roll no. is 1"<<nam1<<endl;
}


if (ecatm1 < ecatm2)
{
 cout<<" your roll no. is 2"<<nam2<<endl;
}

}

