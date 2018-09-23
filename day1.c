//gcc 5.4.0

#include  <stdio.h>
int main()
{
    int m,n;
    int a[10],b[10];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }   
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<m;j++)
       {
           if(a[i]==b[j])
           {
               a[i]=-1;
           }
       }
    }
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
              
        }
        }
    }
    int i=0;
    while(a[i]==-1)
    {
        i++;
    }
    if(i==n)
    {
        printf("NO");
    }
    else
    {
        printf("%d",a[i]);
    }
    return 0;
}
