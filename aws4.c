#include <stdio.h>

int main()
{
    int year;
    float grade;
    char help;

    scanf("%d %f %c",&year,&grade,&help);

    if (year > 1 && grade >= 2.5 && help == 'Y'){
        printf("approved\n");
    }else if(grade >= 3){
        printf("approved\n");
    }else {
        printf("not approved\n");
        if (grade <= 2.5){
            printf("grade < 2.50\n");
        }
        if (year < 2){
            printf("year < 2\n");
        }
        if (help == 'N'){
            printf("no help\n");
        }
    }
    return 0;
}
