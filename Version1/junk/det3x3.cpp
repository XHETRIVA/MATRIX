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
int det3x3(int a,int b,int c,int d,int e,int f,int g,int h,int i)
{
    int det=a*(e*i-h*f)-b*(d*i-f*g)+c*(d*h-e*g);
    return det;
}
int main()
{
    int a[50][50];
    std::cout<<"Enter the the 3x3 matrix\n";
    entermatrix(3,3,a);
    std::cout<<"Determinant of the matrix\n";
    showmatrix(3,3,a);
    int det=det3x3(a[0][0],a[0][1],a[0][2],a[1][0],a[1][1],a[1][2],a[2][0],a[2][1],a[2][2]);
    std::cout<<"\n=\t"<<det;
}