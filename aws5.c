#include <stdio.h>

int main()
{
    int num,num_hun,num_ten,num_one;

    scanf("%d",&num);

    num_one = num % 10; // 345 % 10 = 5
    num = num / 10; // 345 / 10 = 34
    num_ten = num % 10; // 34 % 10 = 4
    num_hun = num / 10; // 34 / 10 = 3

    switch(num_hun)
    {
        case 0: printf("Zero");break;
        case 1: printf("One");break;
        case 2: printf("Two");break;
        case 3: printf("Three");break;
        case 4: printf("Four");break;
        case 5: printf("Five");break;
        case 6: printf("Six");break;
        case 7: printf("Seven");break;
        case 8: printf("Eight");break;
        case 9: printf("Nine");break;
    }
    printf(" ");
    switch(num_ten)
    {
        case 0: printf("Zero");break;
        case 1: printf("One");break;
        case 2: printf("Two");break;
        case 3: printf("Three");break;
        case 4: printf("Four");break;
        case 5: printf("Five");break;
        case 6: printf("Six");break;
        case 7: printf("Seven");break;
        case 8: printf("Eight");break;
        case 9: printf("Nine");break;
    }
    printf(" ");
    switch(num_one)
    {
        case 0: printf("Zero");break;
        case 1: printf("One");break;
        case 2: printf("Two");break;
        case 3: printf("Three");break;
        case 4: printf("Four");break;
        case 5: printf("Five");break;
        case 6: printf("Six");break;
        case 7: printf("Seven");break;
        case 8: printf("Eight");break;
        case 9: printf("Nine");break;
    }
    return 0;
}
