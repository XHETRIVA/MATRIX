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
    int m,a[50][50],i,j;
    std:: cout<<"Enter the dimension of square matrix - ";
    std:: cin>>m;
    std:: cout<<"Enter the elements of the square matrix -\n";
    entermatrix(m,m,a);
    std:: cout<<"Matrix in matrix form is -\n";
    showmatrix(m,m,a);
    std::cout<<"The diagonal elements are:\n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if((i==j)||(i+j)==(m-1))
            std::cout<<a[i][j]<<"\t";
            else
            std::cout<<" \t";
        }    
        std::cout<<"\n";
    }
}