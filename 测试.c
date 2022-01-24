/*一元二次方程组（1）
#include <stdio.h>
#include <math.h>
int main() 
{ 
	float a,b,c,disc,term1,term2; 
	printf("enter a,b,c:"); 
	scanf("%f%f%f",&a,&b,&c); 
	if (a==0) 
		if (b==0) 
			printf("no answer due to input error\n"); 
		else 
			printf("the single root is %f\n", - c/b); 
	else
		{ 
			disc=b*b-4*a*c;
			term1= -b/(2*a);
			term2=sqrt(fabs(disc))/(2*a); 
			if (disc<0)
				printf("complex root\n real part=%f imag part =%f\n", term1,term2);
			else
				printf("real roots\n root1=%f root2=%f\n", term1+term2,term1-term2);

		}

}*/
/*一元二次方程组
#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c,disc,x1,x2,realpart,imagpart;
	scanf("%lf %lf %lf",&a,&b,&c);
	printf("The equation ");
	if (fabs(a)<=1e-6)
		printf("is not a quadratic\n");
	else
	{
		disc=b*b-4*a*c;
		if (fabs(disc)<=1e-6)
			printf("has two equal roots:%8.4f\n",-b/(2*a));
		else
		{
			if (disc>1e-6)
			{
				x1=(-b+sqrt(disc))/(2*a);
				x2=(-b-sqrt(disc))/(2*a);
				printf("has distinct real roots: %8.4f and %8.4f\n",x1,x2);
			}
			else
			{
				realpart=-b/(2*a);
				imagpart=sqrt(-disc)/(2*a);
				printf("has complex roots:\n");
				printf("%8.4f + %8.4fi\n",realpart,imagpart);
				printf("%8.4f - %8.4fi\n",realpart,imagpart);
			}
		}
	}
	return 0;
}*/
/*
#include <stdio.h>
int main()
{
	char i,j,k;
	for(i='x';i<='z';i++)
		for(j='x';j<='z';j++)
			if(i!=j)
				for(k='x';k<='z';k++)
					if(i!=k && j!=k)
						if(i!='x' && k!='x' && k!='z')
							printf("A--%c\nB--%c\nC--%c\n",i,j,k);
	return 0;
}*/
/*字母菱形
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,k,n;
    char c='A';
    printf("n= ");
    scanf("%d",&n);
    printf("对应的菱形图\n");
    for (k=1-n;k<=n-1;k++,c++)
        {
            i=n-abs(k);
            for (j=1;j<=n-i+8;j++)//+8,右移8位
                printf(" ");
            for (j=1;j<=2*i-1;j++)
                printf("%c",c);
            printf("\n");
        }
    return 0;
}*/
/*菱形星
#include <stdio.h>
#include <math.h>
int main()
{
	int n,i,j,k;
	printf("n=?\n");
	scanf("%d",&n);
	for(i=0;i<n*2+1;i++)
	{
		for(j=0;j<fabs(i-n);j++)
			printf(" ");
		for(k=0;k<2*(n-fabs(i-n))+1;k++)
			printf("*");
		printf("\n");
	}
	return 0;
}*/
/*猴子吃桃
#include <stdio.h>
int main()
{
	int d=9,x,y=1;
	while(d>0)
	{
		x=(y+1)*2;
		y=x;
		d--;
	}
	printf("第1天共摘了%d个\n",x);
	return 0;
}*/
/*球落地	 
#include <stdio.h>
int main()
{
	double s=100,h=s/2;
	int n;
	for(n=2;n<=10;n++)
	{
		s=s+2*h;
		h=h/2;
	}
	printf("第10次落地时共经过%f米\n",s);
	printf("第10次反弹%f\n",h);
	return 0;
}*/
/*分数序列前20项之和 2/1，3/2，5/3....
#include <stdio.h>
int main()
{
	int i,n=20;
	double a=2,b=1,s=0,t;
	for(i=1;i<=n;i++)
	{
		s=s+a/b;
		t=a;
		a=a+b;
		b=t;
	}
	printf("sum=%.1f\n",s);
	return 0;
}*/
/*1000之内的完数（一个数恰好是等于它的因子之和）
#include <stdio.h>
void main()
{
    int i,a,k,sum;
    for (i=1; i < 1000; i++)
    {
        for (sum=0,a=1; a <= i/2; a++)
            if (i % a == 0)
                sum=sum+a;
        if (sum==i) 
        {	
			printf("%d=", i);
			for (k=1;k<=sum/2; k++) 
			{
				if (sum % k == 0) 
				{
					printf("%d",k);
					if (k<sum/2) printf("+");
				}			
			}
        printf("\n");
		}
    }
}*/
/*水仙花数
#include <stdio.h>
int main()
{
	int i,j,k,n;
	printf("水仙花数有:\n");
	for(n=100;n<1000;n++)
	{
		i=n/100;
		j=(n-i*100)/10;
		k=n-i*100-j*10;
		if(n==i*i*i+j*j*j+k*k*k)
			printf("%d\t",n);
	}
	printf("\n");
	return 0;
}*/
/*连加，k*k，1/k
#include <stdio.h>
int main()
{
	int n1=1000,n2=50,n3=10;
	double k,s1=0,s2=0,s3=0;
	for(k=1;k<=n1;k++)
	{s1=s1+k;}
	for(k=1;k<=n2;k++)
	{s2=s2+k*k;}
	for(k=1;k<=s3;k++)
	{s3=s3+1/k;}
	printf("sum=%.6f\n",s1+s2+s3);
	return 0;
}*/
/*一到20的阶乘
#include <stdio.h>
int main()
{
	double s=0,t=1;
	int n;
	for (n=1;n<=20;n++)
	{
		t=t*n;
		s=s+t;
	}
	printf("1!+2!+3!+4!+...+20!=%.15e\n",s);
	return 0;
}*/
/*a+aa+aaa+...
#include <stdio.h>
void main()
{
	int i,n,a,t=0,sum=0;
	printf("请输入a，n的整数值：");
	scanf("%d %d",&a,&n);
	for ( i = 1; i <= n; i++)
	{
		t=t+a;
		sum=sum+t;
		a=a*10;
		printf("%d",t);
		if (i<n) printf("+");
	}
	printf("=%d\n",sum);
}*/
/*输入一行字符
#include <stdio.h>
int main()
{
	char c;
	int Y=0,K=0,N=0,Q=0;
	printf("请输入一行字符：\n");
	while((c=getchar())!='\n')
	{
		if(c>='A' && c<='Z' || c>='a' && c<='z')
			Y++;
		else if(c==' ')
			K++;
		else if(c>='0' && c<='9')
			N++;
		else
			Q++;
	}
	printf("字母有%d\n空格有%d\n数字有%d\n其他有%d\n",Y,K,N,Q);
	return 0;
}*/
/*最小公倍数，最大公约数
#include <stdio.h>
int main()
{
	int n,m,t,p;
	printf("请输入两个整数n，m：\t");
	scanf("%d %d",&n,&m);
	p=n*m;
	while(t=n%m)
	{
		n=m;
		m=t;
	}	
	printf("最大公约数：%d\n最小公倍数：%d\n",n,p/n);
	return 0;	
}*/
/*派，派/4，1-1/3+1/5-1/7+...
#include <stdio.h>
#include <math.h>
int main()
{
	int sign=1,count=0;
	double pi=0.0,n=1.0,term=1.0;
	while(fabs(term)>=1e-6)
	{
		pi=pi+term;
		n=n+2;
		sign=-1*sign;
		term=sign/n;
		count++;
	}
	pi=pi*4;
	printf("pi=%10.8f\n",pi);
	printf("count=%d\n",count);
	return 0;
}*/
/*输入三个数，求三角形面积
#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c,d,s,arc;
	printf("请输入三个数>>:");
	scanf("%f %f %f",&a,&b,&c);
	d=fabs(a-b);
	if (a+b>c&&d<c)
	{
		s=(a+b+c)/2;
		arc=sqrt(s*(s-a)*(s-b)*(s-c));
		printf("三角形面积是>>:%.2f\n",arc);
		if (a==b && b==c)
			printf("等边三角形\n");
		else if (a==b||b==c||a==c)	
			printf("等腰三角形\n");
		else if (a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
			printf("直角三角形\n");
		else
			printf("一般三角形\n");
	}
	else
		printf("不能组成三角形，有需须重新输入!!!");
	return 0;
}*/
/*交换两个数
#include <stdio.h>
void main()
{
    int x,y;
    printf("请输入两个需交换的数：");
    scanf("%d %d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("交换后：%d , %d\n",x,y);
}*/
/* 求几位数，逆序排列
#include <stdio.h>
void main()
{
    int x,a,b,c,d,e;
    printf("请输入一个整数：");
    scanf("%d",&x);
    a=x/10000;
    b=x/1000%10;
    c=x/100%10;
    d=x/10%10;
    e=x%10;
    if (a!=0)
        printf("位数为：5 位\n每位数分别为：%d,%d,%d,%d,%d\n逆序数字为：%d,%d,%d,%d,%d\n",a,b,c,d,e,e,d,c,b,a);
    else if (b!=0)
        printf("位数为：4 位\n每位数分别为：%d,%d,%d,%d\n逆序数字为：%d,%d,%d,%d\n",b,c,d,e,e,d,c,b);
    else if (c!=0)
        printf("位数为：3 位\n每位数分别为：%d,%d,%d\n逆序数字为：%d,%d,%d\n",c,d,e,e,d,c);
    else if (d!=0)
        printf("位数为：2 位\n每位数分别为：%d,%d\n逆序数字为：%d,%d\n",d,e,e,d);
    else
        printf("位数为：1 位\n每位数分别为：%d\n逆序数字为：%d\n",e,e);
}*/
/*循环逆序
#include <stdio.h>
void main()
{
    int x,y;
    scanf("%d",&x);
    while (x!=0)
    {
        y=x%10;
        printf("%d",y);
        x=x/10;
    }
    printf("\n");
}*/
/*折半查找算法  二分查找算法
#include <stdio.h>
int main()
{
	int arr[] ={1,2,3,4,5,6,8,9,10};
	int k=9;
	int sz =sizeof(arr)/sizeof(arr[0]);
	int left = 0;
	int right = sz-1;
	while (left<=right)
	{
		int mid =(left+right)/2;
		if (arr[mid]>k)
			right=mid-1;
		else if (arr[mid]<k)
			left=mid+1;
		else
		{
			printf("找到了，下标是：%d\n",mid);	
			break;
		}
	}
	if (left>right)
	{
		printf("找不到\n");
	}
	return 0;
}*/
/*演示多个字符从两端移动，向中间汇聚
#include <stdio.h>
#include <string.h>
int main()
{
	char arr1[] ="welcome to chinese ! ! !";
	char arr2[] ="************************";
	int left =0;
	int right = strlen(arr1)-1;
	while (left<=right)
	{
		arr2[left]=arr1[left];
		arr2[right]=arr1[right];
		printf("%s\n",arr2);
		left++;
		right--;
	}
	return 0;
}*/
/*请输入一个整数,知道位数,需逆序输出
#include <stdio.h>
#include<math.h>
int main()
{
	int numeral,y,c=0,n;
	printf("请输入一个整数,和限定的位数：");
	scanf("%d %d",&numeral,&n);
	n=pow(10,n);
	while (numeral && numeral<n)
	{
		y=numeral%10;
		printf("%d",y);
		numeral/=10;
	}
	if (numeral>n)
		printf("输入位数超过限定！！！");
	printf("\n");
	return 0;
}*/
/*输入一个整数，输出位数和逆序
#include <stdio.h>
#include<math.h>
int main()
{
	int numeral,y,c=0,n;
	printf("请输入一个整数：");
	scanf("%d",&numeral);
	n=log10(numeral)+1;
	printf("位数为：%d\n",n);
	while (numeral)
	{
		y=numeral%10;
		printf("%d",y);
		numeral/=10;
	}
	printf("\n");
	return 0;
}*/
/*冒泡排序
#include <stdio.h>
int main()
{
	int a[10];
	int i,j,k,t;
	int flag;
	printf("input 10 number>>：\n");
	for ( i = 0; i < 10; i++)
		scanf("%d",&a[i]);
	printf("\n");
	for ( j = 0; j < 9; j++)
	{
		flag=1;//假设本次排序的数据已经有序
		for (k=0;k<9-j;k++)
			if (a[k]>a[k+1])
			{
				t=a[k];
				a[k]=a[k+1];
				a[k+1]=t;
				flag=0;//本次排序的数据其实不完全有序
			}	
		if (flag==1)
			break;	
	}
	printf("the sorted numbers:\n");
	for ( i = 0; i < 10; i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;	
}*/
/*编一程序，从键盘输入 10 个整数并保存到数组，求出该 10 个整数的最大值、最小值及平均值
#include <stdio.h>
int main()
{
    int i,max,min;
    int a[10];
    float average=0,sum=0;
    printf("input 10 number>>: \n");
    for ( i = 0; i < 10; i++)
        scanf("%d",&a[i]);
    max=min=a[0];
    for ( i = 0; i < 10; i++)
    {
        if (max<a[i])   max=a[i];
        if (min>a[i])   min=a[i];
        sum+=a[i];
    }
    average=sum/10;
    printf("max= %d\t min= %d\t average= %.2f\n",max,min,average);
    return 0;
}*/
/*编一程序，从键盘输入 10 个整数并保存到数组，要求找出最小的数和它的下标，然后把它和数组 中最前面的元素对换位置。
#include <stdio.h>
int main()
{
    int i,j,min;
    int a[10];
    printf("请输入10个整数：\n");
    for ( i = 0; i < 10; i++) 
        scanf("%d",&a[i]);
    min=a[0];
    for ( j=0,i = 1 ; i < 10; i++) 
        if (min>a[i]) 
        {
            min=a[i];  
            j=i;
        }
    printf("最小的数是：%d\n 下标为：%d\n",min,j);
    a[j]=a[0]; 
    a[0]=min;
    printf("对换后的结果为：\n");
    for ( i = 0; i < 10; i++)
        printf("%d ",a[i]);
    return 0;
}*/

/*在原来有序的基础上插入一个数
#include <stdio.h>
int main()
{
    int i,n,insert_value,right,left,mid;
    int a[21];
    printf("输入 n 的数值：\n");
    scanf("%d",&n);
    printf("请输入不超过 %d 个从小到大整数排列的数列：\n",n);
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\ninput insert_value>>：");
    scanf("%d",&insert_value);
    left=0;
    right=n-1;
    while (left<=right)
    {
        mid=(left+right)/2;
        if (a[mid]>insert_value)
            right=mid-1;
        else if (a[mid]<insert_value)
            left=mid+1;   
    }
    for ( i =n-1; i >= left; i--)
        a[i+1]=a[i];
    a[left]=insert_value;
    for ( i = 0; i <n+1; i++)
        printf("%d ",a[i]);
    return 0;
}*/
