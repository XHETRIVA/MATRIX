#include<iostream>
#include<stdlib.h>
void entermatrix(int m,int n,int a[50][50])
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        std::cin>>a[i][j];
    }
}
void showmatrix(int m,int n,int a[50][50])
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        std::cout<<a[i][j]<<"\t";
        std::cout<<"\n";
    }
}
void mult(int m,int n,int a[50][50],int p,int q,int b[50][50],int res[50][50])
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            res[i][j]=0;
            for(int k=0;k<n;k++)
            {
                res[i][j]=res[i][j]+(a[i][k]*b[k][j]);
            }
        }
    }
}
int main()
{
    int a[50][50],b[50][50],c[50][50],n,m,p,i,j;
    std::cout<<"Enter the dimension of square matrix - ";
    std::cin>>m;
    std::cout<<"enter the elements of matrix-\n";
    entermatrix(m,m,a);
    power1:
    std::cout<<"enter the power of matrix to be calculated - ";
    std::cin>>n;
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            b[i][j]=a[i][j];
            c[i][j]=a[i][j];
        }
    }
    int x=n;
    while(n!=1)
    {
        mult(m,m,a,m,m,b,c);
        for(i=0;i<m;i++)
        {
            for(j=0;j<m;j++)
            a[i][j]=c[i][j];
        }
        n--;
    }
    std::cout<<"\n";
    showmatrix(m,m,b);
    std::cout<<"to the power "<<x<<"is-\n";
    showmatrix(m,m,a);
    int h;
    power3:
    std::cout<<"Do you want to try with a different power on the same matrix?\nPRESS\n1 - Yes\n2 - No\n";
    std::cin>>h;
    if(h==1)
    goto power1;
    else if(h==2)
    {
        std::cout<<"Ending operation...\n";
        goto power2;
    }
    else
    {
        std::cout<<"ERROR:wrong choice!\n";
        goto power3;
    }
    power2:
    exit(0);
}