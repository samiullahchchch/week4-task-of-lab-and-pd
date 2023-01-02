#include <iostream>
#include <windows.h>
using namespace std;

void menu();
void aggregate();
void aggregate2();
void compare();

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
 aggregate();
}

if (input == 4)
{
 aggregate2();
}

if (input == 5)
{
 compare();
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




void aggregate()
{

 float aggregate1;
 float matricm1,interm1,ecatm1; 
  aggregate1 = (matricm1/1100)* 0.3 + (interm1 /1100)*0.3 + (ecatm1/1100)*0.4;
 
 cout<<"Your  aggregate is:  "<<aggregate1<<endl;
 system("pause"); 

}

void aggregate2()

{
 
 float aggregate2;
  
 float matricm2,interm2,ecatm2;
 aggregate2 = ((matricm2/1100)* 0.3) + ((interm2 /1100)*0.3) + ((ecatm2/1100)*0.4);
 cout<<"Your  aggregate is:  "<<aggregate2<<endl;
  system("pause");
  
}




void compare()
{
 int ecatm1,ecatm2;
 string nam1,nam2;
 
if (ecatm1 > ecatm2)
{
 cout<<" your roll no. is 1"<<nam1<<endl;
}


if (ecatm1 < ecatm2)
{
 cout<<" your roll no. is 2"<<nam2<<endl;
}

}

