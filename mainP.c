#include<stdio.h>

int main(){

char name[20];
int marks;

printf("Enter your name :");
scanf("%s",&name);

printf("Enter your marks :");
scanf("%d",&marks);


printf("your name is : %s\n",name );

if(marks >=75){
    printf("you got an A pass");
      printf("good job man.keep it up");
}

else if(marks >=65){
    printf("you got a B pass");
      printf("good job try for  A pass");
}

else if(marks >=55){
    printf("you got a C pass");
      printf("good job try for B pas");
}

else if(marks >=35){
    printf("you got a S pass\n");
    printf("you can do more than this");
}

else{
    printf("you are fail\n");
    printf("please try again");
}







    return 0;
}