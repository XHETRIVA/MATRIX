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
    addelr:
    cout<<"\nPRESS\n1: To insert a row\n2: To delete a row\nAny key: To exit operation\nYour Choice:\t";
    cin>>x;
    if(x==1)
    {
        int y;
        showmatrix(m,n,a);
        cout<<"Enter the row position where you want to insert a row:\t";
        cin>>y;
        m=m+1;
        for(int i=m-1;i>=(y-1);i--)
        {
            for(int j=0;j<n;j++)
            a[i+1][j]=a[i][j];
        }
        cout<<"Enter the "<<n<<" elements of the row "<<y<<":\n";
        for(int j=0;j<n;j++)
        cin>>a[y-1][j];
        cout<<"The matrix after row addition becomes:\n";
        showmatrix(m,n,a);
    }
    else if(x==2)
    {
        int y;
        showmatrix(m,n,a);
        cout<<"Enter the row position you want to delete:\t";
        cin>>y;
        m=m-1;
        for(int i=y;i<=m;i++)
        {
            for(int j=0;j<n;j++)
            a[i-1][j]=a[i][j];
        }
        cout<<"The matrix after row deletion becomes:\n";
        showmatrix(m,n,a);
    }
    else
    goto addelr1;
    int f;
    cout<<"Do you want to insert or delete another row to the matrix?\nPRESS:\n1: Yes\nAny key: No\nYour choice:\t";
    cin>>f;
    if(f==1)
    goto addelr;
    addelr1:
    cout<<"Ending operation...";   
}