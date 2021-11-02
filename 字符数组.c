#include <stdio.h>
int main()
{
    int i,j=0,sum=2;
    int a[30];
    int b[6];
    for (i=0 ; i<30 ;i++)
    {
        a[i]=(i+1)*2;
        j++;
        sum+=a[i];
        if (j%5==0)
        {
            b[j/5-1]=sum/5;
            sum=0;
        }
    }
    for (i=0;i<6;i++)
        printf("%d ",b[i]);
    return 0;
}

/*#include <stdio.h>
int main()
{
    int i,j,sum=0,min;
    int a[5][5];
    printf("一个 5*5 的二位数组>>：\n");
    for ( i = 0; i < 5; i++)
        for ( j = 0; j < 5; j++)   
            scanf("%d",&a[i][j]);
    min=a[0][0];
    for ( i = 0; i < 5; i++) 
        for (j=0 ; j < 5 ;j++)  
            {
                if (i==0 || i==4) sum+=a[i][j];
                else if (j==0 || j==4) sum+=a[i][j];
                else if (j==i) sum+=a[i][j];
                else if (i+j==4) sum+=a[i][j];
                if(min>a[i][j]) min=a[i][j];
            }
    printf("sum= %d,min= %d\n",sum,min);
    return 0;
}*/

/*
#include <stdio.h>
int main()
{
    int i,j,n,sum1=0,sum2=0;
    int a[20][20];
    printf("请输入 n 的值（不超过20）>>：\n");
    scanf("%d",&n);
    printf("请输入 %d * %d 的矩阵>>：\n",n,n);
    for (i=0 ; i<n ; i++)
        for (j=0 ; j<n ; j++)
        {
            scanf("%d",&a[i][j]);
            if (i==j)
                sum1+=a[i][j];
            if (j==n-1-i)
            {
                if (i==j) continue; 
                sum2+=a[i][j];
            }
        }
    printf("sum1= %d \nsum2= %d\nsum= %d\n",sum1,sum2,sum1+sum2);
    return 0;
}*/
