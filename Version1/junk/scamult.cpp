#include<iostream>
void scamult(int m,int n,float x,int a[50][50],float b[50][50])
{
    
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        b[i][j]=x*(float)a[i][j];
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
void showmatrixf(int m,int n,float a[50][50])
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        std::cout<<a[i][j]<<"\t";
        std::cout<<"\n";
    }
}
void entermatrix(int m,int n,int a[50][50])
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        std::cin>>a[i][j];
    }
}
int main()
{
    int m,n,a[50][50];
    float x,b[50][50];
    std::cout<<"Enter the number of rows and columns of the matrix:\t";
    std::cin>>m>>n;
    std::cout<<"\nEnter the matrix\n";
    entermatrix(m,n,a);
    std::cout<<"Enter the scalar to be multiplied:\t";
    std::cin>>x;
    scamult(m,n,x,a,b);
    std::cout<<"The matrix\n";
    showmatrix(m,n,a);
    std::cout<<"\nwhen multiplied by "<<x<<" gives the resultnt\n\n";
    showmatrixf(m,n,b);
}