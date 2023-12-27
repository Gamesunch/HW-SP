#include <stdio.h>

int main()
{
    int a,b,c,min,second,max;
    scanf("%d %d %d",&a,&b,&c);

    min = (a<b)? a:b;
    min = (min<c)? min:c;

    max = (a>b)? a:b;
    max = (max>c)? max:c;

    second = (a != max)? a:b;
    second = (min < second && second < max)? second:b;
    second = (min < second && second < max)? second:c;

    printf("%d %d %d",min,second,max);
    return 0;
}
