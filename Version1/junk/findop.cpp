#include<iostream>
void entermatrix(int m,int n,int a[50][50])
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        cin>>a[i][j];
    }
}
void showmatrix(int m,int n,int a[50][50])
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        cout<<a[i][j]<<"\t";
        cout<<"\n";
    }
}
using namespace std;
int main()
{
    int m,n,a[50][50],i,j;
    cout<<"Number of rows:   \t";
    cin>>m;
    cout<<"Number of columns:\t";
    cin>>n;
    cout<<"Enter the elements of the matrix:\n";
    entermatrix(m,n,a);
    
}