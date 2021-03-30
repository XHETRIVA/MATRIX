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
int main()
{
    int m,n,a[50][50],i,j;
    std::cout<<"Enter the number of rows and columns of the matrix:\n";
    std::cin>>m>>n;
    std::cout<<"Enter the matrix\n";
    entermatrix(m,n,a);
    std::cout<<"The row sum and column sum is written beside and below the matrix respectively:\n\n";
    for(i=0;i<m;i++)
    {
        int rsum=0;
        for(j=0;j<n;j++)
        {
            std::cout<<a[i][j]<<"\t";
            rsum+=a[i][j];
        }
        std::cout<<"\t="<<rsum;
        std::cout<<"\n";
    }
    std::cout<<"\n\n\n=\t=\n";
    for(i=0;i<n;i++)
    {
        int csum=0;
        for(j=0;j<m;j++)
        {
            csum+=a[j][i];
        }
        std::cout<<csum<<"\t";
    }
}