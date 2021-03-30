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
int det2x2(int a,int b,int c,int d)
{
    int det;
    det=a*d-b*c;
    return det;
}
int main()
{
    int a[50][50],i,j;
    std::cout<<"Enter the 2x2 matrix\n";
    entermatrix(2,2,a);
    int det=det2x2(a[0][0],a[0][1],a[1][0],a[1][1]);
    std::cout<<"Determinant of the matrix\n";
    showmatrix(2,2,a);
    std::cout<<"is = "<<det;
}