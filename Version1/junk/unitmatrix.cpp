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
    int m,a[50][50],i,j,flag=0;
    beg:
    std:: cout<<"Enter the dimension of the square matrix - ";
    std:: cin>>m;
    std:: cout<<"Enter the elements of the matrix -\n";
    entermatrix(m,m,a);
    std:: cout<<"The matrix in matrix form is -\n";
    showmatrix(m,m,a);
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if((i==j&&a[i][j]!=1)||(i!=j&&a[i][j]!=0))
            flag=1;
        }
    }
    if(flag==0)
    std:: cout<<"The entered matrix is a unit matrix.";
    else
    {
        std:: cout<<"The entered matrix is not a unit matrix. Wanna Try Again?(y/n)-";
        repeat:
        char ch;
        std:: cin>>ch;
        if(ch=='y')
        goto beg;
        else if(ch=='n')
        std:: cout<<"Ending...";
        else
        {
            std:: cout<<"Invalid Entry! Enter Again(y/n)\n";
            goto repeat;
        }
    }
}