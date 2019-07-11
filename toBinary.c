#include <stdio.h>

void toBinary(int num)
{
    int bits=sizeof(num)*8;
    for(int i=bits-1;i>=0;i--)
    {
        int k=num>>i;
        if(k&1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");
}

int main()
{
    int i=11;
    toBinary(i);
    return 0;
}
