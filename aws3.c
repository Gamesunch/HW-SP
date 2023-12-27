#include <stdio.h>

int main()
{
    int hour,min;

    scanf("%d:%d",&hour,&min);

    if (hour == 7){
        if(min >= 10){
            printf("Y");
        }else printf("N");
    }else if(hour == 8){
        printf("Y");
    }else if(hour == 9){
        if(min <= 30){
            printf("Y");
        }else printf("N");
    }else printf("N");

    return 0;
}
