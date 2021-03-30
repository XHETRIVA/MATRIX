#include<iostream>
void sub(int m,int n,int a[50][50],int b[50][50],int c[50][50])
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        c[i][j]=a[i][j]-b[i][j];
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
    int a[50][50],b[50][50],c[50][50],d[50][50],i,j,m,n,x;
    char ch;
    std:: cout<<"Enter the number of rows and coloumns of matrices -\n";
    std:: cin>>m>>n;
    std:: cout<<"Enter a matrix-\n";
    entermatrix(m,n,a);
    repeat:
    std:: cout<<"Enter the another matrix-\n";
    entermatrix(m,n,b);
    sub(m,n,a,b,d);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        a[i][j]=c[i][j];
        
    }
    std:: cout<<"Do you want to add more matrices to it(y/n)? ";
    std:: cin>>ch;
    if(ch=='y')
    {
        goto repeat;
    }
    else
    {

    }    
    std:: cout<<"Resultant matrix after subtraction is -\n";
    showmatrix(m,n,d);
}