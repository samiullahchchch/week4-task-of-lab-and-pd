#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y); 
void name();




main ()
{
 system ("cls");
 gotoxy(15,15); 
 name();



}





void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}







 void name()
{
  cout<<"                      ##########      ##       ##         ##  ####                  "<<endl;
  cout<<"                      ##      ##     ## ##     ####      ###   ##                "<<endl;
  cout<<"                       ##           ##   ##    ## ##   ## ##   ##                "<<endl; 
  cout<<"                         ##        ##     ##   ##  ## ##  ##   ##               "<<endl;
  cout<<"                           ##     ###########  ##    #    ##   ##             "<<endl;
  cout<<"                             ##   ##       ##  ##         ##   ##           "<<endl;
  cout<<"                      #      ##   ##       ##  ##         ##   ##          "<<endl; 
  cout<<"                      #########   ##       ##  ##         ##  ####                     "<<endl;
}
