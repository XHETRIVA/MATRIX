#include<iostream>
using namespace std;
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
int main()
{
    int m,n,a[50][50],temp;
    cout<<"Enter the number of rows and columns of the matrix:\n";
    cin>>m>>n;
    cout<<"Enter the matrix\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        cin>>a[i][j];
    }
    int x;
    addelc:
    cout<<"\nPRESS\n1: To insert a column\n2: To delete a column\nAny key: To exit operation\nYour Choice:\t";
    cin>>x;
    if(x==1)
    {
        int y;
        showmatrix(m,n,a);
        cout<<"Enter the column position where you want to insert a row:\t";
        cin>>y;
        n=n+1;
        for(int j=n-1;j>=(y-1);j--)
        {
            for(int i=0;i<m;i++)
            a[i][j+1]=a[i][j];
        }
        cout<<"Enter the "<<m<<" elements of the column "<<y<<":\n";
        for(int i=0;i<m;i++)
        cin>>a[i][y-1];
        cout<<"The matrix after column addition becomes:\n";
        showmatrix(m,n,a);
    }
    else if(x==2)
    {
        int y;
        showmatrix(m,n,a);
        cout<<"Enter the column position you want to delete:\t";
        cin>>y;
        n=n-1;
        for(int j=y;j<=n;j++)
        {
            for(int i=0;i<m;i++)
            a[i][j-1]=a[i][j];
        }
        cout<<"The matrix after column deletion becomes:\n";
        showmatrix(m,n,a);
    }
    else
    goto addelc1;
    int f;
    cout<<"Do you want to insert or delete another column to the matrix?\nPRESS:\n1: Yes\nAny key: No\nYour choice:\t";
    cin>>f;
    if(f==1)
    goto addelc;
    addelc1:
    cout<<"Ending operation...";   
}