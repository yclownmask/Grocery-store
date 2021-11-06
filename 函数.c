

/*函数选择法排序小大
#include <stdio.h>
int main()
{
    void sort(int array[],int n);
    int a[10],i;
    printf("enter array:\n");
    for (i=0;i<10;i++)
        scanf("%d",&a[i]);
    sort(a,10);
    printf("The sorted array:\n");
    for ( i = 0; i < 10; i++) 
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}
void sort(int array[],int n)
{
    int i,j,k,temp;
    for (i=0;i<n-1;i++)
        {
            k=i;
            for (j=i+1;j<n;j++)
                if (array[j]<array[k])
                    k=j;
            temp=array[k];array[k]=array[i];array[i]=temp;
       
        }
}*/

/*数组函数比大小
#include <stdio.h>
int main()
{
    int max(int x,int y);
    int a[10],m,n,i;
    printf("enter 10 integer numbers >>:");
    for (i=0;i<10;i++)
        scanf("%d",&a[i]);
    printf("\n");
    for (i=1,m=a[0],n=0;i<10;i++)
        {
            if (max(m,a[i])>m)
            {
                m=max(m,a[i]);
                n=i;
            }
            
        }
    printf("The largest number is %d\nit is the %d number.\n",m,n);
    return 0;
}
int max(int x,int y)
{
    return (x>y? x:y);
}*/

/*汉诺塔递归
#include <stdio.h>
int main()
{
    void hanoi(int n,char one, char two, char three);
    int m;
    printf("input the number of diskes >>: ");
    scanf("%d",&m);
    printf("The step to move %d diskes: \n",m);
    hanoi(m,'A','B','C');
    return 0;
}
void hanoi(int n,char one,char two,char three)
{
    void move(char x,char y);
    if (n==1)
        move(one,three);
    else
        {
            hanoi(n-1,one,three,two);
            move(one,three);
            hanoi(n-1,two,one,three);
        }   
}
void move(char x,char y)
{
    printf("%c --> %c\n",x,y);
}*/

/*递归阶乘
#include <stdio.h>
int Fac2(int n)
{
    if (n<=1)
        return 1;
    else
        return n*Fac2(n-1); 
}
int main()
{
    int n=0;
    int ret=0;
    scanf("%d",&n);
    ret=Fac2(n);
    printf("%d\n",ret);
    return 0;
}*/

/*递归字符长度
#include <stdio.h>
int my_strlen(char* str)
{
    if (*str != '\0')
        return 1+my_strlen(str+1);
    else 
        return 0;  
}
int main()
{
    char arr[]="bit";
    int len=my_strlen(arr);
    printf("len= %d\n",len);
    return 0;
}*/
