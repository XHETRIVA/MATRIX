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
int main()
{
    int m,n;
    std:: cout<<"Enter the dimensions of the array\n";
    std:: cin>>m>>n;
    int a[50][50];
    std:: cout<<"Enter the elements of the matrix\n";
    entermatrix(m,n,a);
    int b[50][50];
    transpose(m,n,a,b);
    std::cout<<"The transpose of \n";
    showmatrix(m,n,a);
    std::cout<<"\nis:\n";
    showmatrix(n,m,b);
}