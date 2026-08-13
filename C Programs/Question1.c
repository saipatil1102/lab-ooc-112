#include<stdio.h>
int main()
{
    char name[20];
    int class,rollno;
    char divi;
    printf("Enter your name : ");
    fgets(name, sizeof(name), stdin);
    printf("Enter your class : ");
    scanf("%d",&class);
    printf("Enter your roll number :  ");
    scanf("%d",&rollno);
    printf("Enter your division : ");
    scanf(" %c",&divi);
    
    printf("\nName: %s\n", name);
    printf("Class: %d\n", class);
    printf("Roll Number: %d\n", rollno);
    printf("Division: %c\n", divi);
    
    return 0;
}