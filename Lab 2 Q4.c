#include<stdio.h>

int main()
{
    int i, a, b, x, y, k;
    
    printf("Input Numbers Between Which you Want to Find Ramanujan Number : ");
    scanf("%d %d", &a, &b);
    
    for(i=a;i<b;i++)
    {
        k=0;
        for(x=1;x*x*x<i;x++)
        {
            for(y=x+1;x*x*x+y*y*y<=i;y++)
            {
                if(x*x*x+y*y*y==i)
                {
                    k++;
                    x++;   
                }
            }
        }
        
        if(k==2)
        
        {
            printf("%d ", i);
        }
    }

return 0;
}
