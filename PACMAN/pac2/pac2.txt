#include<iostream>
#include<windows.h>
using namespace std;
void printmaze();
void gotoxy(int x , int y);
void printpacman(int x , int y);
void erase(int x , int y);
char getCharAtxy(short int x , short int y);
void ghost1(int x,int y);
void ghost2(int x , int y);


main()
{
    int pacmanX = 4 ;
    int pacmanY=4;
    bool gamerunning = true;
    system("cls");
    printmaze(); 
    printpacman(pacmanX,pacmanY);
    int x=5;
    int y=5;
    while(true)
    {
      ghost1(x,y);
      if(x < 90)
      {
        gotoxy(x-1,y);
        cout<< " ";
         x=x+1;
      }
      if(x==90)
     {  
        gotoxy(x-1,y);
        cout<< " ";
        x=20;
      }
      if(x>93)
      {
        gotoxy(x-1,y);
        cout << " ";
       x=x-1;
    
     }
       
      }
    while (gamerunning)
    {
      if (GetAsyncKeyState(VK_LEFT))
       {
          char nextLocation = getCharAtxy(pacmanX - 1, pacmanY);
          if(nextLocation==' ')
          {
            erase(pacmanX,pacmanY);
            pacmanX=pacmanX-1;
            printpacman(pacmanX , pacmanY);
          }
       }
        if (GetAsyncKeyState(VK_RIGHT))
       {
          char nextLocation = getCharAtxy(pacmanX + 1, pacmanY);
          if(nextLocation==' ')
          {
            erase(pacmanX,pacmanY);
            pacmanX=pacmanX+1;
            printpacman(pacmanX , pacmanY);
          }
       }
        if (GetAsyncKeyState(VK_DOWN))
       {
          char nextLocation = getCharAtxy(pacmanX , pacmanY+1);
          if(nextLocation==' ')
          {
            erase(pacmanX,pacmanY);
            pacmanY=pacmanY+1;
            printpacman(pacmanX , pacmanY);
          }
       }
        if (GetAsyncKeyState(VK_UP))
       {
          char nextLocation = getCharAtxy(pacmanX , pacmanY-1);
          if(nextLocation==' ')
          {
            erase(pacmanX,pacmanY);
            pacmanY=pacmanY-1;
            printpacman(pacmanX , pacmanY);
          }
       }
             if (GetAsyncKeyState(VK_ESCAPE))
             {
                gamerunning = false ;
             }
            Sleep(200);
    }

}
void printmaze()
{
    cout<< " ###################################################################################################" << endl;
    cout<< " #                                                                                                  #" << endl;
    cout<< " #                                                                                                  #" << endl;
    cout<< " #                                                                                                  #" << endl;
    cout<< " #                                                                                                  #" << endl;
    cout<< " #                                                                                                  #" << endl;
    cout<< " #                                                                                                  #" << endl;
    cout<< " #                                                                                                  #" << endl;
    cout<< " #                                                                                                  #" << endl;
    cout<< " #                                                                                                  #" << endl;
    cout<< " #                                                                                                  #" << endl;
    cout<< " #                                                                                                  #" << endl;
    cout<< " #                                                                                                  #" << endl;
    cout<< " #                                                                                                  #" << endl;
    cout<< " #                                                                                                  #" << endl;
    cout<< " #                                                                                                  #" << endl;
     cout<< " ###################################################################################################" << endl;


}
void gotoxy(int x , int y)
{
   COORD coordinates;
   coordinates.X=x;
   coordinates.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);


}
char getCharAtxy(short int x , short int y)
{
  CHAR_INFO ci;
  COORD xy = {0,0};
  SMALL_RECT rect = {x,y,x,y};
  COORD coordBufSize;
  coordBufSize.X=1;
  coordBufSize.Y=1;
  return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci , coordBufSize,xy,&rect) ? ci.Char.AsciiChar : ' ' ;

}
void erase(int x , int y)
{
  gotoxy(x,y);
  cout<< " " ;

}
void printpacman(int x , int y)
{
  
  gotoxy(x,y);
  cout<< "p" ;
}
void ghost1(int x, int y)
  {
    gotoxy(x-1,y);
    cout<<" " ;
    gotoxy(x,y);
    cout<< "G";
    Sleep(200);
  }
