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
void add(int m,int n,int a[50][50],int b[50][50],int c[50][50])
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        c[i][j]=a[i][j]+b[i][j];
    }
}
void sub(int m,int n,int a[50][50],int b[50][50],int c[50][50])
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        c[i][j]=a[i][j]-b[i][j];
    }
}
int main()
{
    int a[50][50],b[50][50],c[50][50],d[50][50],m,n,p,q;
    std::cout<<"Enter the number of rows(m) and columns(n) of the matrix.(SAME FOR BOTH MATRICES)\n";
    std::cin>>m>>n;
    std::cout<<"Enter the first matrix:\n";
    entermatrix(m,n,a);
    std::cout<<"Enter the second matrix:\n";
    entermatrix(m,n,b);
    std::cout<<"The first matrix in matrix form:\n";
    showmatrix(m,n,a);
    std::cout<<"The second matrix in matrix form:\n";
    showmatrix(m,n,b);
    add(m,n,a,b,c);
    std::cout<<"The resultant after addition is:\n";
    showmatrix(m,n,c);
    sub(m,n,a,b,d);
        std::cout<<"The resultant after subtraction is:\n";
    showmatrix(m,n,d);
}