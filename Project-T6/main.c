#include<stdio.h>
#include<conio.h>
#include<windows.h>

    //Ignore THIS PART....
    void gotoxy(int x, int y)
    {
        COORD coord;
        coord.X = x;
        coord.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    }
    //  this part is copied from Google..

  int  main()// gotoxy  cara kori

   {
        int choice;
       printf("1 . Login\n");
       printf("2 . Sign up\n");
       printf("3 . Admin \n");
       printf("4 . Exit\n");












return 0;
}
