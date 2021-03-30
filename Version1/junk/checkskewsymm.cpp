#include<iostream>
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
void transpose(int m,int n,int a[50][50],int b[50][50])
{
    std:: cout<<"Transpose -\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        b[i][j]=a[j][i];
    }
}
int checkskew(int m,int a[50][50])
{
    int b[50][50],flag=1;
    transpose(m,m,a,b);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        if(i!=j&&a[i][j]==-b[i][j]||i==j&&a[i][j]==0)
        {
            flag=1;
        }
        else
        {
            flag=0;
            break;
        }
    }
    return flag;
}
int checksymm(int m,int a[50][50])
{
    int b[50][50],flag=1;
    transpose(m,m,a,b);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        if(i!=j&&a[i][j]==b[i][j]||i==j&&a[i][j]==1)
        {
            flag=1;
        }
        else
        {
            flag=0;
            break;
        }
    }
    return flag;
}
int main()
{
    int m,a[50][50];
    std::cout<<"Enter the dimension of the square matrix:\t";
    std::cin>>m;
    std::cout<<"Enter the matrix to be checked:\n";
    entermatrix(m,m,a);
    if(checkskew(m,a))
    {
        showmatrix(m,m,a);
        std::cout<<"\nis a skew symmetric matrix.\n";
    }
    else if(checksymm(m,a))
    {
        showmatrix(m,m,a);
        std::cout<<"\nis a symmetric matrix.\n";
    }
    else
    {
        showmatrix(m,m,a);
        std::cout<<"\nis neither a symmetric now a skew symmetric matrix\n";
    }
}