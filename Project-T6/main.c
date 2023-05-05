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
        int n;
        gotoxy(10,10);  
        printf("Welcome to the Library Management System\n");
        gotoxy(10,12);
        printf("Please select an option\n");
        gotoxy(10,14);

       printf("1 . Login\n");
       printf("2 . Sign up\n");

       printf("3 . Admin \n");
       printf("4 . Exit\n");
       scanf("%d",&n);
       if(n == 1)
       {
              printf("Login\n");
         }
         else if(n == 2)
         {
              printf("Sign up\n");
         }
         else if(n == 3)
         {
              printf("Admin\n");
         }
         else if(n == 4)
         {
              printf("Exit\n");
       }  
    

       












return 0;
}
