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
    int m,n,a[50][50],c1,c2,i,temp;
    std:: cout<<"Enter the rows and coloumns of the matrix - \n";
    std:: cin>>m>>n;
    std:: cout<<"Enter the elements of the matrix -\n";
    entermatrix(m,n,a);
    std:: cout<<"The matrix in matrix form is -\n";
    showmatrix(m,n,a);
    std:: cout<<"Enter the coloumn number that you want to swap - ";
    std:: cin>>c1;
    std:: cout<<"Enter the coloumn number with which you want to swap - ";
    std:: cin>>c2;
    if((c1<=0||c1>=m)||(c2<=0||c2>=0))
    {
        std:: cout<<"\a";
        std:: cout<<"ERROR! COLOUMN DOES NOT EXIST.";
    }
    else
    {
        for(i=0;i<m;i++)
        {
            temp=a[i][c1-1];
            a[i][c1-1]=a[i][c2-1];
            a[i][c2-1]=temp;
        }
        std:: cout<<"The final matrix is -\n";
        showmatrix(m,n,a);
    }
}