#include <stdio.h>
#define MAX_INT_NUMBER 256

int mostFrequentNumber(int array[], int size)
{
    int hash[MAX_INT_NUMBER]={0}, res =-1, max=0;
    for(int i=0; i<size; i++)
    {
        hash[array[i]]++;
    }
    for(int i=0; i<size; i++)
    {
        if(max<hash[array[i]])
        {
            max=hash[array[i]];
            res=array[i];
        }
    }
    return res;
}

int main()
{
    int array[]={1,2,3,4,8,9,7,4,9,8,5,9,3};
    int res, size;
    size=sizeof(array)/sizeof(array[0]);
    res=mostFrequentNumber(array, size);
    printf("Most frequent number in array is : %d\n", res);
    return 0;
}
