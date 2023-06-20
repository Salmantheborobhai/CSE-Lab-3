//1
/*#include<stdio.h>
int main()
{
    int i,j,n=10;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}*/

//2
/*#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=10;j++)
        {
            if(i<=3 && j<=5){printf("* ");}
            else{printf("- ");}
        }printf("\n");
    }
    return 0;
} */

//3
/*#include <stdio.h>
#include <ctype.h>

void OppositeCase(char *str) {
    while (*str != '\0') {
        if (islower(*str))
            *str = toupper(*str);
        else if (isupper(*str))
            *str = tolower(*str);
        str++;
    }
}

int main() {
    char str[100];

    fgets(str, sizeof(str), stdin);

    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

        OppositeCase(str);

    printf("%s\n", str);

    return 0;
}*/

//4
/*#include<stdio.h>
#include<string.h>
int main()
{
    int i,lenth;
    char A[50];
    gets(A);
    lenth=strlen(A);
    for(i=0;i<lenth;i++)
    {
        if(A[i]<'z' && A[i]>='a'){A[i]=A[i]+1;}
        else if(A[i]<'Z' && A[i]>='A'){A[i]=A[i]+1;}
        else if(A[i]<'9' && A[i]>='0'){A[i]=A[i]+1;}
        else if(A[i]=='9'){A[i]='0';}
        else if(A[i]=='z'){A[i]='a';}
        else if(A[i]=='Z'){A[i]='A';}
    }
    puts(A);
}*/

//5
/*#include<stdio.h>
#include<string.h>
int main()
{
    char A[50];
    char a[50];
    gets(A);
    strcpy(a,A);
    strrev(a);
    if(strcmp(A,a)==0){printf("yes\n");}
    else{printf("No\n");}
}
*/

//6
/*#include<stdio.h>
int main()
{
    int a,s=1,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        s=s*i;
    }
    printf("%d",s);
}
*/

//7
/*#include<stdio.h>
int fact(int a)
{
    static int j=1;
    j=j*a;
    if(a<=1){return j;}
    else{fact(a-1);}
}
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",fact(a));

}
*/

//8
/*#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    int arr[a];
    arr[0]=1;
    arr[1]=1;
    for(i=2;i<=a;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    for(i=0;i<=a;i++)
    {
        printf("%d ",arr[i]);
    }
}
*/

//9
/*#include<stdio.h>
int fib(int a)
{
    int s;
    if(a==0){return 1;}
    else if(a==1){return 1;}
    s=fib(a-1)+fib(a-2);
    return s;
}
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",fib(a));

}
*/

//10
/*#include<stdio.h>
void revers(char *str)
{
    if(*str)
    {
        revers(str+1);
        printf("%c",*str);
    }
}
int main()
{
    char A[50];
    gets(A);
    revers(A);
}
*/

//11
/*#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {
        if(a%i==0){break;}
    }
    if(i==a){printf("Prime\n");}
    else {printf("Not\n");}
}
*/

//12
/*#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d %d",&a,&b);
    if(a<b)
    {
        if(b%a==0){printf("%d",b);}
        else{
            for(i=b;i<=a*b;i++)

            {
                if(i%a== 0 && i%b==0){printf("%d",i);break;}
            }
        }
    }
    else if(a>b)
    {
        if(a%b==0){printf("%d",a);}
        else{
            for(i=a;i<=a*b;i++)

            {
                if(i%a== 0 && i%b==0){printf("%d",i);break;}
            }
        }
    }
    else {printf("%d",a);}
}
*/

//13
/*#include<stdio.h>
int main()
{
    int a,b,i,p=0;
    scanf("%d %d",&a,&b);

    if(a<b)
    {

        for(i=a; i>1; i--)
        {
            if(a%i==0 && b%i==0)
            {
                printf("%d",i);
                p=1;
                break;
            }
        }
    }
    else
    {
        for(i=b; i>1; i--)
        {
            if(a%i==0 && b%i==0)
            {
                printf("%d",i);
                p=1;
                break;
            }
        }
    }
    if(p==0)
    {
        printf("1\n");
    }
}
*/
