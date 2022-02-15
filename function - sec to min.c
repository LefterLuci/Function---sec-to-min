#include <stdio.h>
#include <stdlib.h>


void secMin(float sec)
{
    float min;

    min= sec / 60;

    printf("%d seconds are %f minutes", sec, min);

}

int main()
{
    float impNum1;

    scanf("%f",&impNum1);

    secMin(impNum1);

        return 0;
}
