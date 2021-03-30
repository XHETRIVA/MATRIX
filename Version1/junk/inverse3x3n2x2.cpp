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
void scamult(int m,int n,float x,int a[50][50],float b[50][50])
{
    
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        b[i][j]=x*(float)a[i][j];
    }
}
void showmatrixf(int m,int n,float a[50][50])
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        std::cout<<a[i][j]<<"\t";
        std::cout<<"\n";
    }
}
void adjoint(int m,int a[50][50],int b[50][50])
{
    int c[50][50];
    c[0][0]=det2x2(a[1][1],a[1][2],a[2][1],a[2][2]);
    c[0][1]=det2x2(a[1][0],a[1][2],a[2][0],a[2][2]);
    c[0][2]=det2x2(a[1][0],a[1][1],a[2][0],a[2][1]);
    c[1][0]=det2x2(a[0][1],a[0][2],a[2][1],a[2][2]);
    c[1][1]=det2x2(a[0][0],a[0][2],a[2][0],a[2][2]);
    c[1][2]=det2x2(a[0][0],a[0][1],a[2][0],a[2][1]);
    c[2][0]=det2x2(a[0][1],a[0][2],a[1][1],a[1][2]);
    c[2][1]=det2x2(a[0][0],a[0][2],a[1][0],a[1][2]);
    c[2][2]=det2x2(a[0][0],a[0][1],a[1][0],a[1][1]);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            if((i+j)%2!=0)
            c[i][j]=-1*c[i][j];
        }
    }
    transpose(m,m,c,b);
}
void transpose(int m,int n,int a[50][50],int b[50][50])
{
    std:: cout<<"Transpose -\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        b[i][j]=a[j][i];
    }
}
int det3x3(int a,int b,int c,int d,int e,int f,int g,int h,int i)
{
    int det=a*(e*i-h*f)-b*(d*i-f*g)+c*(d*h-e*g);
    return det;
}
int det2x2(int a,int b,int c,int d)
{
    int det;
    det=a*d-b*c;
    return det;
}
int main()
{
    int a[50][50],b[50][50],m,det;
    float c[50][50];
    inverse:
    std::cout<<"Enter the dimension(2 OR 3) of the square matrix whose inverse you wish to find:\t";
    std::cin>>m;
    if(m==2||m==3)
    {
        std::cout<<"Enter the matrix:\n";
        entermatrix(m,m,a);
        if(m==2)
        {
            transpose(m,m,a,b);
            for(int i=0;i<m;i++)
            {
                for(int j=0;j<m;j++)
                {
                    if((i+j)%2!=0)
                    c[i][j]=-1*c[i][j];
                }
            }
            det=det2x2(a[0][0],a[0][1],a[1][0],a[1][1]);
        }
        else
        {
            adjoint(m,a,b);
            det=det3x3(a[0][0],a[0][1],a[0][2],a[1][0],a[1][1],a[1][2],a[2][0],a[2][1],a[2][2]);
        }
        if(det==0)
        {
            std::cout<<"OOPS!: The determinant of the matrix you entered equals to 0 , so inverse does not exist!\n";
            int x;
            std::cout<<"Do you want to enter again?\nPRESS\n1-Yes\nAny_other_number-No\n";
            std::cin>>x;
            if(x==1)
            goto inverse;
        }
        float k=(float)1/det;
        scamult(m,m,k,b,c);
        std::cout<<"\nThe inverse of the matrix\n\n";
        showmatrix(m,m,a);
        std::cout<<"\nis";
        showmatrixf(m,m,c);
    }
    else
    {
        std::cout<<"SORRY! FUNCTION UNAVAILABLE!\nAVAILABLE FUNCTIONS:\nDIMENSION = 2\nDIMENSION = 3\n";
        int x;
            std::cout<<"Do you want to enter again?\nPRESS\n1-Yes\nAny_other_number-No\n";
            std::cin>>x;
            if(x==1)
            goto inverse;
    }
}