#include <stdio.h>
#include <stdbool.h>

bool mod(int a, int b)
{
    if(b==1)
    return 1;

    if(a % b == 0){
        return 0;
    }
    
    return mod(a, b-1);
};

int main()
{
    int a = 13;
    int b = (a-1);

    if(mod(a,b)==true)
    printf("primo");
    else
        printf("nao primo");

};