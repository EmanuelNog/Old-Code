#include <stdio.h>

int multiplicar(int a, int b)
{
    if(b == 0){
        return b;
    }
    
    return a + multiplicar(a,b-1); 
};

void main()
{
    printf("results: %d",multiplicar(2,5));
};