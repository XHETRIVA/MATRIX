#include<iostream>
void scamult(int m,int n,float x,int a[50][50],float b[50][50])
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        b[i][j]=x*(float)a[i][j];
    }
}
void showmatrixf(int m,int n,float a[50][50])
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        std:: cout<<a[i][j]<<"\t";
        std:: cout<<"\n";
    }
}
void showmatrix(int m,int n,int a[50][50])
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        std:: cout<<a[i][j]<<"\t";
        std:: cout<<"\n";
    }
}
void entermatrix(int m,int n,int a[50][50])
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        std:: cin>>a[i][j];
    }
}
int main()
{
    int m,n,a[50][50];
    float b[50][50],x,y;
    std:: cout<<"Enter the number of rows and coloumns of the matrix-\n";
    std:: cin>>m>>n;
    std:: cout<<"Enter the elements of the matrix-\n";
    entermatrix(m,n,a);
    std:: cout<<"Enter the scalar you want to divide to the matrix - ";
    std:: cin>>x;
    y=1/x;
    scamult(m,n,y,a,b);
    std:: cout<<"The matrix-\n";
    showmatrix(m,n,a);
    std:: cout<<"when divided with "<<x<<" gives the resultant matrix -\n";
    showmatrixf(m,n,b);
}