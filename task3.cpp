#include <iostream>
using namespace std;
#include <windows.h>

void gotoxy(int x,int y);
void maze();
void playerMove(int x, int y);

main () {

while(true)
{


  system("cls");
  maze(); 
   gotoxy(15,15);
  int x = 21;
  int y = 5;
  playerMove (x,y);
}
}

void maze()
{
 cout<<"  ############################                     "<<endl;
 cout<<"  #                          #                   "<<endl;
 cout<<"  #                          #                   "<<endl;
 cout<<"  #                          #                   "<<endl;
 cout<<"  #                          #                   "<<endl;
 cout<<"  #                          #                   "<<endl;
 cout<<"  #                          #                   "<<endl;
 cout<<"  #                          #                   "<<endl;
 cout<<"  #                          #                   "<<endl;
 cout<<"  ############################                                             "<<endl;
}

void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void playerMove(int x, int y)
{
 

 gotoxy(x-1,y);
 cout<< " ";
 gotoxy(x,y);
 cout << "p";
 

}