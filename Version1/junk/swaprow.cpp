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
    int m,n,a[50][50],r1,r2,i,j,temp;
    std:: cout<<"Enter the rows and coloumns of the matrix - \n";
    std:: cin>>m>>n;
    std:: cout<<"Enter the elements of the matrix -\n";
    entermatrix(m,n,a);
    std:: cout<<"The matrix in matrix form is -\n";
    showmatrix(m,n,a);
    std:: cout<<"Enter the row number that you want to swap - ";
    std:: cin>>r1;
    std:: cout<<"Enter the row number with which you want to swap - ";
    std:: cin>>r2;
    for(j=0;j<n;j++)
    {
        temp=a[r2-1][j];
        a[r2-1][j]=a[r1-1][j];
        a[r1-1][j]=temp;
    }

    std:: cout<<"The final matrix is -\n";
    showmatrix(m,n,a);
}