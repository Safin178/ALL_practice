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

int  main()
{
    int choice;

    printf("1 . Login\n\n");
    printf("2 . Sign up\n\n");
    printf("3 . Admin \n\n");
    printf("4 . Exit\n\n");
    printf("Please Enter a Command >");
    scanf("%d", &choice);
    while(choice)
    {
        switch (choice)
        {
        case 1:
            login();
            break;
        case 2:
            sign();
            break;
        case 3:
            admin();
            break;
        }














    }










    return 0;
}
