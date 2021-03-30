#include<iostream>
using namespace std;
int n_p(int n,int p)
{
    if(n==p)
    return 1;
    else
    {
        return 0;
    }
    
}
void mult(int m,int n,int a[50][50],int p,int q,int b[50][50],int res[50][50])
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            res[i][j]=0;
            for(int k=0;k<n;k++)
            {
                res[i][j]=res[i][j]+(a[i][k]*b[k][j]);
            }
        }
    }
}
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
    int a[50][50],i,j,m,n,b[50][50],p,q,res[50][50],k,flag=0;
    multstart:
    std::cout<<"Enter the rows and coloums of the matrix-\n";
    std::cin>>m>>n;
    std::cout<<"Enter the rows and coloums of the matrix-\n";
    std::cin>>p>>q;
    if (n_p(n,p))
    {
        std::cout<<"Enter the elements of the matrix-\n";
        entermatrix(m,n,a);
        multmat:
        k=q;
        std::cout<<"Enter the elements of another matrix-\n";
        entermatrix(p,q,b);
        mult(m,n,a,p,q,b,res);
        std::cout<<"The resultant matrix is-\n";
        showmatrix(m,q,res);
    }
    else
    {
        mult:
        std::cout<<"Matrix multiplication is not possible as number of columns of first matrix is not equal to the number of rows of second matrix\n";
        if(flag!=1)
        goto multstart;
        else
        {
            goto multmid;
            cout<<"Enter again\n";
        }
    }
    cout<<"Do you want to multiply another matrix to the result?(y/n)";
    char ch;
    cin>>ch;
    if(ch=='y')
    {   
        multmid:
        n=k;     
        cout<<"Enter the number of rows and coloums of the matrix-\n";
        cin>>p>>q;
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            a[i][j]=res[i][j];
        }
        if(n_p(n,p))
        goto multmat;
        else
        {
            flag=1;
            goto mult;
        }  
    }
    else
    {
        cout<<"Final resultant matrix:\n";
        showmatrix(m,k,res);
        goto multend;
    }
    multend:
    cout<<"Ending operation...";
}