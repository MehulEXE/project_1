#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

void urlogin ();
void cr_account();
void curser(int x, int y);//adding cursor
int home();

/*void curser(int x, int y){
    COORD c;
    c.X=x;
    c.Y=y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
*/
int home(){
    int choise;
    printf("WELCOME TO BANKING SOLUTION");
    //curser(18,5);
    printf("__________________________________________");
    //curser(1,5);
    printf("1.  create account.\n");
    printf("2.  already a user ? login. \n");
    printf("3.  main menue \n");
    printf("4.  exit. \n");
    return choise;
}
int main(){
    int ch;
    ch =home();
    scanf("%d,",& ch);
    
    switch (ch)
    {
    case 1:cr_account();
        break;
    case 2:urlogin();
        break;
    case 3:home();
    default:
        break;
    }
    return 0;
}
void urlogin(){
    char a[30],b[30], pass[60];
     printf("enter your first name");
     scanf ("%s",a);
     printf("enter your second name");
     scanf("%s",b);
     printf("enter your password");
     scanf("%s",pass);
}