#include <stdio.h>

int linear_search(int a[],int length, int key)
{
    for(int i=0;i<length;i++)
    {
        if(key==a[i])
        {
            return i;
        }

    }
    return -1;
}

int main()
{
    int a[]={1,2,3,4,5};
    int key = 3;
    int length = 5;
    int x=linear_search(a,5,3);
    if(x!=-1){printf("Your stuff is at position:%d",x);}
                     else {printf("Your stuff is not here");};
    return 0;
}
