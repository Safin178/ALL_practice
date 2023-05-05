#include<stdio.h>
#include<conio.h>
#include<windows.h>
int i;
char password[100];
    //Ignore THIS PART....
    void gotoxy(int x, int y)
    {
        COORD coord;
        coord.X = x;
        coord.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    }
    //  this part is copied from Google..
void pass()
{
    int  i = 15;
    gotoxy(0,0);
    while(--i)
    {
        printf("                              \n");
    }
    gotoxy(0,0);
    printf("Please Enter a Password(lowercase) \n");


    printf(">");
    scanf("%s", password);






}

void box()
{


    for(i=40; i<75; i+=5)
    {
        gotoxy(i,5);
        printf("#######");
        //Sleep(100);
    }
    for(i=5; i<25; i+=1)
    {
        gotoxy(40,i);
        printf("##");
        //Sleep(50);
    }
    // for(i=40; i<75; i+=5)
    // {
    //     gotoxy(i,25);
    //     printf("########");
    //     //Sleep(100);
    // }
    for(i=5; i<25; i+=1)
    {
        gotoxy(76,i);
        printf("##");
        //Sleep(50);
    }
    for(i=5; i<25; i+=1)
    {
        gotoxy(53,i);
        printf("#");
       // Sleep(50);
        gotoxy(65,i);
        printf("#");
        //Sleep(50);
    }
    for(i=40; i<75; i+=5)
    {
        gotoxy(i,11);
        printf("#######");
        //Sleep(100);
        gotoxy(i,17);
        printf("#######");
       // Sleep(100);
    }


















}
  int  main()
   {
       //  int choice;
       // printf("1 . Login\n\n");
       // printf("2 . Sign up\n\n");
       // printf("3 . Admin \n\n");
       // printf("4 . Exit\n\n");


        


       //  printf("Please Enter a Command ");
        
       //  printf(">");

       //  scanf("%d", &choice);

       //      if(choice == 2)
       //      {
       //          pass();
       //      }



       //  gotoxy(20, 20);


        box();








return 0;
}
