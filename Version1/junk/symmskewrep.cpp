#include<iostream>
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
void transpose(int m,int n,int a[50][50],int b[50][50])
{
    std:: cout<<"Transpose -\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        b[i][j]=a[j][i];
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
void scamult(int m,int n,float x,int a[50][50],float b[50][50])
{
    
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        b[i][j]=x*(float)a[i][j];
    }
}
using namespace std;
void sksmrep(int m,int a[50][50],float b[50][50],float c[50][50])
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<'\t';
        }
        if(i==m/2)
        cout<<"=\t";
        else
        cout<<" \t";
        for(int k=0;k<m;k++)
        {
            cout<<b[i][k]<<'\t';
        }
        if(i==m/2)
        cout<<"+\t";
        else
        cout<<" \t";
        for(int l=0;l<m;l++)
        {
            cout<<c[i][l]<<'\t';
        }
        cout<<'\n';
    }
}
int main()
{
    int m,a[50][50],b[50][50],c[50][50],d[50][50];
    float e[50][50],f[50][50];
    std::cout<<"Enter the Dimension of the square matrix:\t";
    std::cin>>m;
    std::cout<<"Enter the matrix which you wish to represent as sum of symmetric and skew symmetric matrices\n";
    entermatrix(m,m,a);
    transpose(m,m,a,b);
    add(m,m,a,b,c);
    sub(m,m,a,b,d);
    scamult(m,m,0.5F,c,e);
    scamult(m,m,0.5F,d,f);
    sksmrep(m,a,e,f);
}