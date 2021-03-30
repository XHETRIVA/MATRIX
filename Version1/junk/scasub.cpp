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
    int m,n,a[50][50],b[50][50],c[50][50],x,i,j;
    std:: cout<<"Enter the rows and coloumns of the matrix - \n";
    std:: cin>>m>>n;
    std:: cout<<"Enter the elements of the matrix -\n";
    entermatrix(m,n,a);
    std:: cout<<"The matrix in matrix form is -\n";
    showmatrix(m,n,a);
    std:: cout<<"Enter the scalar you want to subtract to the matrix - ";
    std:: cin>>x;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        b[i][j]=x;
    }
    sub(m,n,a,b,c);
    std:: cout<<"The resultant matrix is -\n";
    showmatrix(m,n,c);
}