#include<stdio.h>
#include<string.h>
#include<stdbool.h>



union Flag{
    struct Check {
            char Value [10];
    }C; 
};
struct  Register
{
    char FirstName [20];
    char LastName [20];
    char Email [30];
    char Password [20];
};

struct Login
{
    char Email [30];
    char Password [20];
};

int main (){

    union Flag F;
    struct Register R;
    struct Login L;

    printf("\n_*_*_*_*_*_*_*_*_*_ Register _*_*_*_*_*_*_*_*_*_\n");
    printf("\n");

    printf("Enter your first name : ");
    gets(R.FirstName);

    printf("Enter your last name :");
    gets(R.LastName);

    printf("Enter your Email :");
    gets(R.Email);

    printf("Enter your password :");
    scanf("%d",R.Password);
    printf("\n");

    printf("Enter user status :");
    scanf("%s",F.C.Value);
 
    printf("\n--------------------------------------\n");
    printf("\n");
    printf("_*_*_*_*_*_*_*_*_*_*_ Login _*_*_*_*_*_*_*_*_*_*_\n");
    printf("\n");

    printf("Enter your Email :");
     scanf("%s",L.Email);
    

    printf("Enter your password :");
     scanf("%d",L.Password);

            
    if(strcmp(R.Email,L.Email)==0 && strcmp(R.Password,L.Password)==0)
    {
        if (strcmp(F.C.Value,"1")==0||strcmp(F.C.Value,"true")==0)
            {
                printf("\nyou are active \n Successful Login\n");
            }
        else if(strcmp(F.C.Value,"0")==0||strcmp(F.C.Value,"false")==0)
            {
                printf("\nyou are not active \n Failed Login\n"); 
            }
    }
    else 
    {
        printf("\nIncorrect Login Details\nPlease enter the correct Information\n");
    }

        
    return 0;
}