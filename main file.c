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
    do {
        ch = home();
        switch (ch) {
            case 1:
                cr_account();
                break;
            case 2:
                urlogin();
                break;
            case 3:
                printf("\nReturning to main menu...\n");
                break;
            case 4:
                printf("\nExiting the program. Thank you!\n");
                exit(0);
            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    } while (ch != 4);

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

void cr_account() {
    char fname[30], lname[30], pass[60];
    printf("\nEnter your first name: ");
    scanf("%s", fname);
    printf("Enter your last name: ");
    scanf("%s", lname);
    printf("Set a password: ");
    scanf("%s", pass);

    printf("\nAccount successfully created for %s %s!\n", fname, lname);
}