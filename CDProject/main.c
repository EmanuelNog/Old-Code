#include <stdio.h>

int amortecimento(int h, void ((float*)r))
{
    if(r==0.0)
    {
        return 0;
    };
    h = h * r;

    return  (h*2) + amortecimento(h,r - 0.1);
};

int main()
{
    printf("%d", amortecimento(10,1));
};
