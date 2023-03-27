#include <stdio.h>

float amortecimento(float h, float r)
{
    if(r==0.0)
    {
        return 0;
    };
    h = h * r;

    return  (h*2) + amortecimento(h,r - 0.1);
};

float main()
{
    printf("%d", amortecimento(10,1.0));
};