
/*平均成绩，高低排序(选择法)
#include <stdio.h>
int sum=0;
void func(int array[],int n)
{
    int i,j,t,k;
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
        sum+=array[i];
    }
    for ( i = 0; i < n-1; i++)
    {
        k=i;
        for ( j = i; j < n; j++)
            if(array[j]>array[k])
                k=j;
        t=array[k];
        array[k]=array[i];
        array[i]=t;
    }
    
}
void print_(int a[])
{
    int i;
    for ( i = 0; i < 10; i++)
        printf("%d ",a[i]); 
}
int main()
{
    int src[10];
    func(src,10);
    printf("平均成绩为：%d\n",sum/10);
    print_(src);
}*/

/*是素数返回1，不是返回0
#include <stdio.h>
#include <math.h>
int isprime(int a)
{
    int i;
    for (i=2;i<=sqrt(a);i++)
        if (a%i == 0) return 0;
    return 1;
}
int main()
{
    int x=57;
    if (isprime(x)==0)
        printf("%d 不是素数\n",x);
    else printf("%d 是素数\n",x);
    return 0;
}*/

/*a的n次方
#include <stdio.h>
double mypow(double x,int y)
{
    int i;
    double c=1.0;
    for (i=0;i<y;i++)
        c*=x;
    return c;
}
int main()
{
    double a=5.0;
    int n=5;
    printf("a的 %d 次方为： %.2f\n",n,mypow(a,n));
}*/

/*输入一个整数，求出各位数字的和
#include <stdio.h>
int sum_(int n)
{
    int sum=0;
    while (n)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    int number;
    printf("请输入一个整数>>：");
    scanf("%d",&number);
    printf("%d 各位数字之和为： %d\n",number,sum_(number));
}*/

/*两个函数最大公约数，最小公倍数
#include <stdio.h>
int main()
{
    int hcf(int,int);
    int lcd(int,int,int);
    int u,v,h,l;
    scanf("%d %d",&u,&v);
    h=hcf(u,v);
    l=lcd(u,v,h);
    printf("H.C.F=%d\nL.C.D=%d\n",h,l);
    return 0;
}
int hcf(int u,int v)
{
    int r,t;
    if (v>u)
    {t=u;u=v;v=t;}
    while((r=u%v) !=0)
    {u=v;v=r;}
    return v;
}
int lcd(int u,int v,int h)
{
    return u*v/h;
}*/

/*一个函数求最大公约数，最小公倍数
#include <stdio.h>
int gonyue(int x,int y)
{
    int temp;
    while(y)
    {
        temp=x%y;
        x=y;
        y=temp;
    }
    return x;
}
int main()
{
    int a,b,c,d;
    printf("input two number：");
    scanf("%d %d",&a,&b);
    c=gonyue(a,b);
    printf("最大公约数：%d\n最小公倍数：%d\n",c,a*b/c);
}*/

/*求平均分，打印高于平均分的
#include <stdio.h>
float above(float score[10])
{
    int i;
    float sum=0,aver=0;
    for (i=0;i<10;i++)
        sum+=score[i];
    aver=sum/10.0; 
    return aver;
     
}
int main()
{
    int i;
    float b;
    float array[10]={67,45,78,56,90,57,34,38,76,18};
    b=above(array);
    printf("平均分为：%.2f\n",b);
    for ( i = 0; i < 10; i++)
        if (array[i]>b)
            printf("高于平均分的英语成绩为：%.2f\n",array[i]); 
    return 0;
}*/

/*四舍五入
#include <stdio.h>
void Check(int ponse,float value)
{
    int val;
    val=value+0.5;//(int)((value*10+5)/10)
    printf("计算后的值：%d",val);
    if (val==ponse) printf("\nWELL DONE!!\n");
    else printf("\nSorry the correct answer is %d\n",val);   
}
int main()
{
    int ponse;
    float value;
    printf("input ponse and value>>：");
    scanf("%d %f",&ponse,&value);
    Check(ponse,value);
    return 0;
}*/

/*函数交换数
#include <stdio.h>
void f(int *x,int *y)
{
    int t;
    if (*x<*y)
    {
        t=*x;
        *x=*y;
        *y=t;
    }
    
}
int main()
{
    int a=4,b=3,c=5;
    f(&a,&b);
    f(&a,&c);
    f(&b,&c);
    printf("%3d,%3d,%3d\n",a,b,c);
}*/

/*函数 Fibonacci数列
#include <stdio.h>
long fib(int n)
{
    if (n>2) return (fib(n-1)+fib(n-2));
    else return 1;  
}
int main()
{
    int i;
    for (i=1;i<9;i++)
        printf("%ld ",fib(i));
}*/