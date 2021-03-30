#include<iostream>
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
    int m,a[50][50],i,j,sumr=0,suml=0;
    std:: cout<<"Enter the dimension of square matrix - ";
    std:: cin>>m;
    std:: cout<<"Enter the elements of the square matrix -\n";
    entermatrix(m,m,a);
    std:: cout<<"Matrix in matrix form is -\n";
    showmatrix(m,m,a);
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==j)
            suml+=a[i][j];
            if((i+j)==(m-1))
            sumr+=a[i][j];
        }    
    }
    std:: cout<<"The sum of elements of left diagonal is - "<<suml<<" and the sum of elemnts of right diagonal is - "<<sumr;
}