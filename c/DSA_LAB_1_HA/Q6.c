#include <stdio.h>
#include <stdlib.h>
int main()
{
   int n,i,temp,x,y,next_great;
    printf("enter the size of array :\t");
    scanf("%d",&n);
    int *a= (int *) malloc(n*sizeof(int));
    printf("enter the values :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
for(x=0;x<n;x++)
{
    next_great=0;
    for(y=x;y<n;y++)
    {
        if(a[x]<a[y])
        {
            next_great=a[y];
            break;
        }
    }
if(next_great==0)
{
   a[x]=-1;
}
else
{
    a[x]=next_great;
}
}
printf("\n");
for(int i=0;i<n;i++)
{
  printf("%d\t",a[i]);
}
return 0;
}