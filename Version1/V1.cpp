//project_by_ _the_twins_33
//pooja agarwal
//rudrashis kumar dutta
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<windows.h>
using namespace std;
void entermatrix(int m,int n,int a[100][100])
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
       cin>>a[i][j];
    }
}
void showmatrix(int m,int n,int a[100][100])
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
       cout<<a[i][j]<<"\t";
       cout<<"\n";
    }
}
void add(int m,int n,int a[100][100],int b[100][100],int c[100][100])
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        c[i][j]=a[i][j]+b[i][j];
    }
}
void sub(int m,int n,int a[100][100],int b[100][100],int c[100][100])
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        c[i][j]=a[i][j]-b[i][j];
    }
}
void sksmrep(int m,int a[100][100],float e[100][100],float f[100][100])
{
    int i,j,k;
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        if(i==m/2)
        cout<<"=\t";
        else
        {
            cout<<" \t";
        }
        for(k=0;k<m;k++)
        {
            cout<<e[i][k]<<"\t";
        }
        if(i==m/2)
        cout<<"+\t";
        else
        {
            cout<<" \t";
        }
        for(k=0;k<m;k++)
        {
            cout<<f[i][k]<<"\t";
        }
        cout<<"\n";
    }
}
void transpose(int m,int n,int a[100][100],int b[100][100])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        b[i][j]=a[j][i];
    }
}
int checkskew(int m,int a[100][100])
{
    int b[100][100],flag=1;
    transpose(m,m,a,b);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        if(i!=j&&a[i][j]==-b[i][j]||i==j&&a[i][j]==0)
        {
            flag=1;
        }
        else
        {
            flag=0;
            break;
        }
    }
    return flag;
}
int checksymm(int m,int a[100][100])
{
    int b[100][100],flag=1;
    transpose(m,m,a,b);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        if(i!=j&&a[i][j]==b[i][j]||i==j&&a[i][j]==1)
        {
            flag=1;
        }
        else
        {
            flag=0;
            break;
        }
    }
    return flag;
}
int det2x2(int a,int b,int c,int d)
{
    int det;
    det=a*d-b*c;
    return det;
}
int det3x3(int a,int b,int c,int d,int e,int f,int g,int h,int i)
{
    int det=a*(e*i-h*f)-b*(d*i-f*g)+c*(d*h-e*g);
    return det;
}
void scamult(int m,int n,float x,int a[100][100],float b[100][100])
{
    
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        b[i][j]=x*(float)a[i][j];
    }
}
void showmatrixf(int m,int n,float a[100][100])
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
       cout<<a[i][j]<<"\t";
       cout<<"\n";
    }
}
void adjoint(int m,int a[100][100],int b[100][100])
{
    int c[100][100];
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
int n_p(int n,int p)
{
    if(n==p)
    return 1;
    else
    return 0;
}
void mult(int m,int n,int a[100][100],int p,int q,int b[100][100],int res[100][100])
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
void options()
{
    cout<<"---------------------------------------------------------------------------------------------------------------\n";
    cout<<"1)   Print In Matrix Form\n2)   Scalar Addition\n3)   Scalar Subtraction\n4)   Scalar Multiplication\n5)   Scalar division\n";
    cout<<"6)   Swap 2 Rows\n7)   Swap 2 Coloumns\n8)   Insert Or Delete A Row\n9)   Insert Or Delete A Coloumn\n";
    cout<<"10)  Finding An Element\n11)  Find The Row Sum\n12)  Find The Coloumn Sum\n13)  Find The Diagonal Sum\n";
    cout<<"14)  Print The Diagonal Elements\n15)  Find The Transpose\n16)  Find The Determinant Of 2X2 Matrix\n";
    cout<<"17)  Find The Determinant Of 3X3 Matrix\n18)  Find The Determinant Of 4X4 Matrix\n19)  Addition Of n Number Of Matrices\n20)  Subtraction Of n Number Of Matrices\n";
    cout<<"21)  Multiplication Of n Number Of Matrices\n22)  Check Of Symmetricity\n";
    cout<<"23)  Check For Skew-Symmetricity\n24)  Check For Unit Matrix\n25)  Find The Nth Power Of A Matrix\n";
    cout<<"26)  Represent A Matrix As Sum Of Symmetric And Skew-Symmetric\n";
    cout<<"27)  Check For Collinearity\n28)  Check For Triangle Formation And Find Its Area\n29)  Check For Parallelogram Formation And Find Its Area\n";
    cout<<"30)  Solving 2 Equations\n31)  Solving 3 Equations\n32)  Find The Inverse Of A Matrix\n33)  Exit\n";
    cout<<"---------------------------------------------------------------------------------------------------------------\n";
}
void welcome()
{
    system("cls");
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),1);
    cout<<"                        **********    *********    **********   *********        ********       ***********   ***********    **********    ******    ***    ********\n";
    cout<<"                       ***      ***   ***    ***   ***          ***    ***      ***    ***      ***********   ***********   ***      ***   *** ***   ***   ***      \n";
    cout<<"                       ***      ***   *********    ******       *********      ************         ***           ***       ***      ***   ***  ***  ***    ******* \n";
    cout<<"                       ***      ***   ***          ***          ***  ***      ***        ***        ***       ***********   ***      ***   ***   *** ***         ***\n";
    cout<<"                        **********    ***          **********   ***    ***   ***          ***       ***       ***********    **********    ***    ******   ******** \n";
    Sleep(1000);
    cout<<"                                                                                                                                                                                  \n";
    cout<<"                                                                                 **********    **********                                                                     \n";
    cout<<"                                                                                ***      ***   ***                                                                            \n";
    cout<<"                                                                                ***      ***   ******                                                                         \n";
    cout<<"                                                                                ***      ***   ***                                                                     \n";
    cout<<"                                                                                 **********    ***                                                                     \n";
    Sleep(2000);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
    cout<<"                                                                                                                                                                                  \n";
    cout<<"                                                    ***    ***           ********       ***********   *********    **********   ***   ***                                         \n";
    cout<<"                                                   *** **** ***         ***    ***      ***********   ***    ***   **********    *** ***                                          \n";
    cout<<"                                                  ***   **   ***       ************         ***       *********        ***         ***                                            \n";
    cout<<"                                                 ***          ***     ***        ***        ***       ***  ***     **********    *** ***                                          \n";
    cout<<"                                                ***            ***   ***          ***       ***       ***    ***   **********   ***   ***                                         \n";
    cout<<"                                                                                                                                                                                  \n";
    cout<<"                                                                            ********       ******    ***   ********                                                                       \n";
    cout<<"                                                                           ***    ***      *** ***   ***   ***    ***                                                                    \n";
    cout<<"                                                                          ************     ***  ***  ***   ***    ***                                                                      \n";
    cout<<"                                                                         ***        ***    ***   *** ***   ***    ***                                                                    \n";
    cout<<"                                                                        ***          ***   ***    ******   ********                                                                ***    \n";
    cout<<"                                                                                                                                                                                    ***    \n";
    cout<<"   ********     **********   ***********   **********   *********        ***    ***       ***********   ******    ***       ********       ******    ***   ***********    ********   **      \n";
    cout<<"   ***    ***   ***          ***********   ***          ***    ***      *** **** ***      ***********   *** ***   ***      ***    ***      *** ***   ***   ***********   ***         *       \n";
    cout<<"   ***    ***   ******           ***       ******       *********      ***   **   ***         ***       ***  ***  ***     ************     ***  ***  ***       ***        *******              \n";
    cout<<"   ***    ***   ***              ***       ***          ***  ***      ***          ***    ***********   ***   *** ***    ***        ***    ***   *** ***       ***             ***              \n";
    cout<<"   ********     **********       ***       **********   ***    ***   ***            ***   ***********   ***    ******   ***          ***   ***    ******       ***       ********     \n";
    cout<<"                                                                                                                                                                                               \n";
    cout<<"                                                                                                                                                    - the_twins_33\n";
    Sleep(3000);
    cout<<"\a";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
    system("cls"); 
}
int main()
{
    welcome();
    int x;
    matrix:
    options();
    cin>>x;
    system("cls");
    if(x==1)
    {
        int m,n,a[100][100];
        cout<<"Print In Matrix Form\n\n";
        cout<<"Number of rows: ";
        cin>>m;
        cout<<"Number of columns: ";
        cin>>n;
        cout<<"Enter the elements of the matrix:\n";
        entermatrix(m,n,a);
        cout<<"The matrix in matrix form is:\n";
        showmatrix(m,n,a);
    }
    else if(x==2)
    {
        int m,n,a[100][100],b[100][100],c[100][100],x,i,j;
        cout<<"Scalar Addition\n\n";
        cout<<"Number of rows: ";
        cin>>m;
        cout<<"Number of columns: ";
        cin>>n;
        cout<<"Enter the elements of the matrix:\n";
        entermatrix(m,n,a);
        cout<<"The matrix in matrix form is:\n";
        showmatrix(m,n,a);
        cout<<"Enter the scalar you want to add to the matrix: ";
        cin>>x;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            b[i][j]=x;
        }
        add(m,n,a,b,c);
        showmatrix(m,n,c);
    }
    else if(x==3)
    {
        int m,n,a[100][100],b[100][100],c[100][100],x,i,j;
        cout<<"Scalar Subtraction\n\n";
        cout<<"Number of rows: ";
        cin>>m;
        cout<<"Number of columns: ";
        cin>>n;
        cout<<"Enter the elements of the matrix: \n";
        entermatrix(m,n,a);
        cout<<"The matrix in matrix form is:\n";
        showmatrix(m,n,a);
        cout<<"Enter the scalar you want to subtract to the matrix: ";
        cin>>x;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            b[i][j]=x;
        }
        sub(m,n,a,b,c);
        cout<<"The resultant matrix is:\n";
        showmatrix(m,n,c);
    }
    else if(x==4)
    {
        int m,n,a[100][100];
        float b[100][100],x;
        cout<<"Scalar Multiplication\n\n";
        cout<<"Number of rows: ";
        cin>>m;
        cout<<"Number of coloumns: ";
        cin>>n;
        cout<<"Enter the elements of the matrix:\n";
        entermatrix(m,n,a);
        cout<<"Enter the scalar you want to multiply to the matrix: ";
        cin>>x;
        scamult(m,n,x,a,b);
        cout<<"The matrix:\n";
        showmatrix(m,n,a);
        cout<<"when multiplied with "<<x<<" gives the resultant matrix: \n";
        showmatrixf(m,n,b);
   
    }
    else if(x==5)
    {
        int m,n,a[100][100];
        float b[100][100],x,y;
        cout<<"Scalar Division\n\n";
        cout<<"Number of rows: ";
        cin>>m;
        cout<<"Number of coloumns: ";
        cin>>n;
        cout<<"Enter the elements of the matrix:\n";
        entermatrix(m,n,a);
        cout<<"Enter the scalar you want to divide to the matrix: ";
        cin>>x;
        y=1/x;
        scamult(m,n,y,a,b);
        cout<<"The matrix:\n";
        showmatrix(m,n,a);
        cout<<"when divided with "<<x<<" gives the resultant matrix:\n";
        showmatrixf(m,n,b);
   
    }
    else if(x==6)
    {
        int m,n,a[100][100],r1,r2,j,temp;
        cout<<"Swap 2 Rows\n\n";
        cout<<"Number of rows: ";
        cin>>m;
        cout<<"Number of coloumns: ";
        cin>>n;
        cout<<"Enter the elements of the matrix:\n";
        entermatrix(m,n,a);
        cout<<"The matrix in matrix form is:\n";
        showmatrix(m,n,a);
        cout<<"Enter the row number that you want to swap: ";
        cin>>r1;
        cout<<"Enter the row number with which you want to swap: ";
        cin>>r2;
        if((r1<=0||r2>m)||(r2<=0||r1>m))
        {
            cout<<"\a";
            cout<<"ERROR! ROW DOES NOT EXIST.";
        }
        else
        {
            for(j=0;j<n;j++)
            {
                temp=a[r2-1][j];
                a[r2-1][j]=a[r1-1][j];
                a[r1-1][j]=temp;
            }
            cout<<"The final matrix is:\n";
            showmatrix(m,n,a);
        }
    }
    else if(x==7)
    {
        int m,n,a[100][100],c1,c2,i,temp;
        cout<<"Swap 2 Coloumns\n\n";
        cout<<"Number of rows: ";
        cin>>m;
        cout<<"Number of coloumns: ";
        cin>>n;
        cout<<"Enter the elements of the matrix:\n";
        entermatrix(m,n,a);
        cout<<"The matrix in matrix form is:\n";
        showmatrix(m,n,a);
        cout<<"Enter the coloumn number that you want to swap: ";
        cin>>c1;
        cout<<"Enter the coloumn number with which you want to swap: ";
        cin>>c2;
        if((c1<=0||c2>n)||(c1<=0||c2>n))
        {
            cout<<"\a";
            cout<<"ERROR! COLOUMN DOES NOT EXIST.";
        }
        else
        {
            for(i=0;i<m;i++)
            {
                temp=a[i][c1-1];
                a[i][c1-1]=a[i][c2-1];
                a[i][c2-1]=temp;
            }
            cout<<"The final matrix is:\n";
            showmatrix(m,n,a);
        }
    }
    else if(x==8)
    {
        int m,n,a[100][100],temp;
        cout<<"Insert Or Delete A Row\n\n";
       cout<<"Number of rows: ";
       cin>>m;
       cout<<"Number of coloumns: ";
       cin>>n;
       cout<<"Enter the matrix:\n";
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            cin>>a[i][j];
        }
        int q;
        addelr:
        cout<<"\nPRESS\n1: To insert a row\n2: To delete a row\nAny key: To exit operation\nYour Choice -\t";
        cin>>x;
        if(q==1)
        {
            int y;
            showmatrix(m,n,a);
            cout<<"Enter the row position where you want to insert a row: ";
            cin>>y;
            m=m+1;
            for(int i=m-1;i>=(y-1);i--)
            {
                for(int j=0;j<n;j++)
                a[i+1][j]=a[i][j];
            }
           cout<<"Enter the "<<n<<" elements of the row "<<y<<":\n";
            if(y>=0&&y<=m+1)
            {
                for(int j=0;j<n;j++)
                cin>>a[y-1][j];
                cout<<"The matrix after row addition becomes:\n";
                showmatrix(m,n,a);
            }
            else
            {
                cout<<"Row does not exist!\n";
                cout<<"\a";
                goto addelr1;
            }
        }
        else if(q==2)
        {
            int y;
            showmatrix(m,n,a);
           cout<<"Enter the row position you want to delete: ";
           cin>>y;
            if(y>=0&&y<m)
            {
                m=m-1;
                for(int i=y;i<=m;i++)
                {
                    for(int j=0;j<n;j++)
                    a[i-1][j]=a[i][j];
                }
               cout<<"The matrix after row deletion becomes: \n";
                showmatrix(m,n,a);
            }
            else 
            {
               cout<<"Row does not exist!\n";
               cout<<"\a";
                goto addelr1;
            }    
        }
        else
        goto addelr1;
        int f;
       cout<<"PRESS:\n1: Insert or delete another row\nAny key: No\nYour choice: ";
       cin>>f;
        if(f==1)
        goto addelr;
        addelr1:
        cout<<"";   
    }
    else if(x==9)
    {
        int m,n,a[100][100],temp;
        cout<<"Insert Or Delete A Coloumn\n\n";
       cout<<"Number of rows: ";
       cin>>m;
       cout<<"Number of coloumns: ";
       cin>>n;
       cout<<"Enter the matrix: \n";
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
           cin>>a[i][j];
        }
        int x;
        addelc:
       cout<<"\nPRESS\n1: To insert a column\n2: To delete a column\nAny key: To exit operation\nYour Choice: ";
       cin>>x;
        if(x==1)
        {
            int y;
            showmatrix(m,n,a);
           cout<<"Enter the column position where you want to insert a row: ";
           cin>>y;
            if(y>=0&&y<=n+1)
            {
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
            else
            {
               cout<<"Coloumn does not exist!\n";
               cout<<"\a";
                goto addelc1;
            }
        }
        else if(x==2)
        {
            int y;
            showmatrix(m,n,a);
           cout<<"Enter the column position you want to delete: ";
           cin>>y;
            if(y>=0&&y<n)
            {
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
            {
               cout<<"Coloumn does not exist!\n";
               cout<<"\a";
                goto addelc1;
            }
        }
        else
        goto addelc1;
        int f;
       cout<<"PRESS:\n1: Insert or delete another coloumn\nAny key: To exit operation\nYour choice: ";
       cin>>f;
        if(f==1)
        goto addelc;
        addelc1:
        cout<<"\a";   
    }
    else if(x==10)
    {
        int m,n,a[100][100],x,i,j,flag=0,p,q;
        cout<<"Finding An Element\n\n";
        cout<<"Number of rows: ";
        cin>>m;
        cout<<"Number of columns: ";
        cin>>n;
        cout<<"Enter the elements of the matrix:\n";
        entermatrix(m,n,a);
        cout<<"Enter the element you want to operate on: ";
        cin>>x;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            if(x==a[i][j])
            {
                flag=1;
                cout<<"Element found at row "<<i+1<<" and coloumn "<<j+1<<"\n";
            }
        }
        if(flag==0)
        {
            cout<<"Element Not Found!!!";
            cout<<"\a";
        }
    }
    else if(x==11)
    {
        int m,n,a[100][100],i,j;
        cout<<"Finding The Row Sum\n\n";
        cout<<"Number of rows: ";
        cin>>m;
        cout<<"Number of coloumns: ";
        cin>>n;
        cout<<"Enter the elements of matrix:\n";
        entermatrix(m,n,a);
        cout<<"The matrix in matrix form is:\n";
        showmatrix(m,n,a);
        cout<<"Matrix with its row sum is:\n";
        for(i=0;i<m;i++)
        {
            int sum=0;
            for(j=0;j<n;j++)
            {
                cout<<a[i][j]<<"\t";
                sum+=a[i][j];
            }
            cout<<sum;
            cout<<"\n";
        }
   
    }
    else if(x==12)
    {
        int m,n,a[100][100],i,j;
        cout<<"Finding The Coloumn Sum\n\n";
        cout<<"Number of rows: ";
        cin>>m;
        cout<<"Number of coloumns: ";
        cin>>n;
        cout<<"Enter the elements of matrix:\n";
        entermatrix(m,n,a);
        cout<<"The matrix in matrix form is:\n";
        showmatrix(m,n,a);
        cout<<"Matrix with its coloumn sum is:\n";
        showmatrix(m,n,a);
        for(j=0;j<n;j++)
        {
            int sum=0;
            for(i=0;i<m;i++)
            {
                sum+=a[i][j];
            }
            cout<<sum<<"\t";
        }
    }
    else if(x==13)
    {
        int m,a[100][100],i,j,sumr=0,suml=0;
        cout<<"Finding The Diagonal Sum\n\n";
        cout<<"Dimension of square matrix: ";
        cin>>m;
        cout<<"Enter the elements of the square matrix:\n";
        entermatrix(m,m,a);
        cout<<"Matrix in matrix form is:\n";
        showmatrix(m,m,a);
        for(i=0;i<m;i++)
        {
            for(j=0;j<m;j++)
            {
                if(i==j)
                suml+=a[i][j];
                if((i+j)==(m-1))
                sumr+=a[i][j];
            }    
        }
        cout<<"The sum of elements of left diagonal is: "<<suml<<" and the sum of elemnts of right diagonal is: "<<sumr;
   
    }
    else if(x==14)
    {
        int m,a[100][100],i,j;
        cout<<"Print The Diagonal Elements\n\n";
        cout<<"Dimension of square matrix: ";
        cin>>m;
        cout<<"Enter the elements of the square matrix:\n";
        entermatrix(m,m,a);
        cout<<"Matrix in matrix form is:\n";
        showmatrix(m,m,a);
       cout<<"The diagonal elements are:\n";
        for(i=0;i<m;i++)
        {
            for(j=0;j<m;j++)
            {
                if((i==j)||(i+j)==(m-1))
               cout<<a[i][j]<<"\t";
                else
               cout<<" \t";
            }    
           cout<<"\n";
        }
    }
    else if(x==15)
    {
        int m,n;
        cout<<"Find The Transpose\n\n";
        cout<<"Number of rows: ";
        cin>>m;
        cout<<"Number of coloumns: ";
        cin>>n;
        int a[100][100];
        cout<<"Enter the elements of the matrix:\n";
        entermatrix(m,n,a);
        int b[100][100];
        cout<<"The matrix in matrix form is:\n";
        showmatrix(m,n,a);
        transpose(m,n,a,b);
        cout<<"Transpose:\n";
        showmatrix(n,m,b);
   
    }
    else if(x==16)
    {
        int x[100][100];
        cout<<"Find The Determinant Of 2X2 Matrix\n\n";
        cout<<"Enter the elements of matrix 2X2:\n";
        entermatrix(2,2,x);
        int det=det2x2(x[0][0],x[0][1],x[1][0],x[1][1]);
        cout<<"Determinant of matrix:\n";
        showmatrix(2,2,x);
        cout<<"equals: "<< det;
    }
    else if(x==17)
    {
        int x[100][100],i,j;
        cout<<"Find The Determinant Of 3X3 Matrix\n\n";
        cout<<"Enter the elements of matrix 3X3:\n";
        entermatrix(3,3,x);
        int det= det3x3(x[0][0],x[0][1],x[0][2],x[1][0],x[1][1],x[1][2],x[2][0],x[2][1],x[2][2]);
        cout<<"Determinant of matrix:\n";
        showmatrix(3,3,x);
        cout<<"equals: "<< det;
    }
    else if(x==18)
    {
        int a[100][100],i,j;
        cout<<"Find The Determinant Of 4X4 Matrix\n\n";
        cout<<"Enter the elements of matrix 4X4:\n";
        entermatrix(4,4,a);
        int p=a[0][0]*det3x3(a[1][1],a[1][2],a[1][3],a[2][1],a[2][2],a[2][3],a[3][1],a[3][2],a[3][3]);
        int q=a[0][1]*det3x3(a[1][0],a[1][2],a[1][3],a[2][0],a[2][2],a[2][3],a[3][0],a[3][2],a[3][3]);
        int r=a[0][2]*det3x3(a[1][0],a[1][1],a[1][3],a[2][0],a[2][1],a[2][3],a[3][0],a[3][1],a[3][3]);
        int s=a[0][3]*det3x3(a[1][0],a[1][1],a[1][2],a[2][0],a[2][1],a[2][2],a[3][0],a[3][1],a[3][2]);
        int det=p-q+r-s;
        std:: cout<<"Determinant of matrix:\n";
        showmatrix(4,4,a);
        std:: cout<<"equals: "<< det;
    }
    else if(x==19)
    {
        int a[100][100],b[100][100],c[100][100],d[100][100],i,j,m,n,x;
        cout<<"Adition Of n Number Of Matrices\n\n";
        cout<<"Number of rows: ";
        cin>>m;
        cout<<"Number of coloumns: ";
        cin>>n;
        cout<<"Enter a matrix:\n";
        entermatrix(m,n,a);
        cout<<"Matrix in matrix form:\n";
        showmatrix(m,n,a);
        add:
        cout<<"Enter the another matrix:\n";
        entermatrix(m,n,b);
        cout<<"Second matrix in matrix form:\n";
        showmatrix(m,n,b);
        add(m,n,a,b,c);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            a[i][j]=c[i][j];    
        }
        cout<<"Resultant matrix after addition is:\n";
        showmatrix(m,n,c);   
        char ch;     
        cout<<"Do you want to add more matrices to it(y/n)? ";
        cin>>ch;
        if(ch=='y')
        {
            goto add;
        }
        else
        {
            cout<<"\a";
        }  
    }
    else if(x==20)
    {
        int a[100][100],b[100][100],c[100][100],d[100][100],i,j,m,n,x;
        char ch;
        cout<<"Subtraction Of n Number Of Matrices\n\n";
        cout<<"Number of rows: ";
        cin>>m;
        cout<<"Number of coloumns: ";
        cin>>n;
        cout<<"Enter a matrix:\n";
        entermatrix(m,n,a);
        cout<<"Matrix in matrix form:\n";
        showmatrix(m,n,a);
        sub:
        cout<<"Enter the another matrix:\n";
        entermatrix(m,n,b);
        cout<<"Matrix in matrix form:\n";
        showmatrix(m,n,b);
        sub(m,n,a,b,d);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            a[i][j]=c[i][j];   
        }
        cout<<"Resultant matrix after subtraction is:\n";
        showmatrix(m,n,d);
        cout<<"Do you want to add more matrices to it(y/n)? ";
        cin>>ch;
        if(ch=='y')
        {
            goto sub;
        }
        else
        {
            cout<<"\a";
        }
    }
    else if(x==21)
    {
        int a[100][100],i,j,m,n,b[100][100],p,q,res[100][100],k,flag=0;
        cout<<"Multiplication Of n Number Of Matrices\n\n";
        multstart:
        std::cout<<"Matrix 1:\nNumber of rows: ";
        std::cin>>m;
        cout<<"\nNumber of coloumns: ";
        cin>>n;
        std::cout<<"\n\nMatrix 2:\nNumber of rows: ";
        std::cin>>p;
        cout<<"\nNumber of coloumns: ";
        cin>>q;
        if (n_p(n,p))
        {
            std::cout<<"Enter the elements of the matrix 1:\n";
            entermatrix(m,n,a);
            multmat:
            k=q;
            std::cout<<"Enter the elements of another matrix:\n";
            entermatrix(p,q,b);
            mult(m,n,a,p,q,b,res);
            std::cout<<"The resultant matrix is:\n";
            showmatrix(m,q,res);
        }
        else
        {
            mult:
            std::cout<<"Matrix multiplication is not possible as number of columns of first matrix is not equal to the number of rows of second matrix!\n";
            cout<<"\a";
            if(flag!=1)
            goto multstart;
            else
            {
                goto multmid;
                cout<<"\aEnter again:\n";
            }
        }
        cout<<"Do you want to multiply another matrix to the result(y/n)? ";
        char ch;
        cin>>ch;
        if(ch=='y')
        {   
            multmid:
            n=k;     
            cout<<"Another matrix:\nNumber of rows: ";
            cin>>p;
            cout<<"\nNumber of coloumns: ";
            cin>>q;
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
        cout<<"\a";
    }
    else if(x==22)
    {
        int m,a[100][100];
        cout<<"Check For Symmetricity\n\n";
        cout<<"Dimension of square matrix: ";
        cin>>m;
        cout<<"Enter the elements of the matrix to be checked:\n";
        entermatrix(m,m,a);
        if(checksymm(m,a))
        {
            showmatrix(m,m,a);
            cout<<"is a symmetric matrix.";
            
        }
        else
        {
            showmatrix(m,m,a);
            cout<<"is not a symmetric matrix.";
            cout<<"\a";
        }
    }
    else if(x==23)
    {
        int m,a[100][100];
        cout<<"Check For Skew-Symmetricity\n\n";
        cout<<"Dimension of square matrix: ";
        cin>>m;
        cout<<"Enter the elements of the matrix to be checked:\n";
        entermatrix(m,m,a);
        if(checkskew(m,a))
        {
            showmatrix(m,m,a);
            cout<<"is a skew symmetric matrix.";
        }
        else
        {
            showmatrix(m,m,a);
            cout<<"is not a skew-symmetric matrix.";
            cout<<"\a";
        }
    }
    else if(x==24)
    {
        int m,a[100][100],i,j,flag=0;
        cout<<"Check For Unit Matrix\n\n";
        cout<<"Dimension of the square matrix: ";
        cin>>m;
        cout<<"Enter the elements of the matrix:\n";
        entermatrix(m,m,a);
        cout<<"The matrix in matrix form is:\n";
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
        {
            cout<<"The entered matrix is a unit matrix.";
        }
        else
        {
            cout<<"The entered matrix is not a unit matrix.";
            cout<<"\a";
        }
    }
    else if(x==25)
    {
        int a[100][100],b[100][100],c[100][100],n,m,p,i,j;
        cout<<"Find The Nth Power Of A Matrix\n\n";
       cout<<"Dimension of square matrix: ";
       cin>>m;
       cout<<"Enter the elements of matrix:\n";
        entermatrix(m,m,a);
       cout<<"Enter the power of matrix to be calculated: ";
       cin>>n;
        for(i=0;i<m;i++)
        {
            for(j=0;j<m;j++)
            {
                b[i][j]=a[i][j];
                c[i][j]=a[i][j];
            }
        }
        int x=n;
        while(n!=1)
        {
            mult(m,m,a,m,m,b,c);
            for(i=0;i<m;i++)
            {
                for(j=0;j<m;j++)
                a[i][j]=c[i][j];
            }
            n--;
        }
       cout<<"\n";
        showmatrix(m,m,b);
       cout<<"to the power "<<x<<" is:\n";
        showmatrix(m,m,a);
   
    }
    else if(x==26)
    {
        int m,a[100][100],b[100][100],i,j,c[100][100],d[100][100];
        float e[100][100],f[100][100];
        cout<<"Represent A Matrix As Sum Of Symmetric And Skew-Symmetric\n\n";
        cout<<"Dimensions of square matrix: ";
        cin>>m;
        cout<<"Enter the elements of matrix:\n";
        entermatrix(m,m,a);
        cout<<"The matrix in matrix form is:\n";
        showmatrix(m,m,a);
        transpose(m,m,a,b);
        add(m,m,a,b,c);
        sub(m,m,a,b,d);
        scamult(m,m,0.5,c,e);
        cout<<"\ncan be represented as the sum of the following matrices:\nSYMMETRIC:\n";
        showmatrixf(m,m,e);
        scamult(m,m,0.5,d,f);
        cout<<"SKEW_SYMMETRIC:\n";
        showmatrixf(m,m,f);
        sksmrep(m,a,e,f);
    }
    else if(x==27)
    {
        int a,b,d,e,g,h;
        cout<<"Check For Collinearity\n\n";
        cout<<"Enter the coordinates of first point:\nx: ";
        cin>>a;
        cout<<"\ny: ";
        cin>>b;
        cout<<"Enter the coordinates of second point:\nx: ";
        cin>>d;
        cout<<"\ny: ";
        cin>>e;
        cout<<"Enter the coordinates of third point:\nx: ";
        cin>>g;
        cout<<"\ny: ";
        cin>>h;
        int det=det3x3(a,b,1,d,e,1,g,h,1);
        if(det==0)
        {
           cout<<"The 3 points are collinear.\n";
        }
        else
        {
           cout<<"The 3 points are not collinear.\n";
            cout<<"\a";
        }
    }
    else if(x==28)
    {
        int a,b,d,e,g,h;
        cout<<"Check For Triangle Formation And Find Its Area\n\n";
        cout<<"Enter the coordinates of first point:\nx: ";
        cin>>a;
        cout<<"\ny: ";
        cin>>b;
        cout<<"Enter the coordinates of second point:\nx: ";
        cin>>d;
        cout<<"\ny: ";
        cin>>e;
        cout<<"Enter the coordinates of third point:\nx: ";
        cin>>g;
        cout<<"\ny:";
        cin>>h;
        int det=det3x3(a,b,1,d,e,1,g,h,1);
        if(det!=0)
        {
           cout<<"The triangle can be formed";
            float ar=0.5*(float)det;
            if(ar>0)
            ar=ar;
            else if(ar<0)
            ar=-ar;
           cout<<" and its area is - "<<ar<<" square units.\n";
        }
        else
        {
           cout<<"The triangle can not be formed.\n";
            cout<<"\a";
        }
    }
    else if(x==29)
    {
        int x1,x2,x3,x4,y1,y2,y3,y4;
        cout<<"Check For Parrallelogram Formation And Find Its Area\n\n";
       cout<<"Enter the co-ordinates of the first point:\nx: ";
       cin>>x1;
       cout<<"\ny: ";
       cin>>y1;
       cout<<"Enter the co-ordinates of the second point:\nx: ";
       cin>>x2;
       cout<<"\ny: ";
       cin>>y2;
       cout<<"Enter the co-ordinates of the third point:\nx: ";
       cin>>x3;
       cout<<"\ny: ";
       cin>>y3;
       cout<<"Enter the co-ordinates of the fourth point:\nx: ";
       cin>>x4;
       cout<<"\ny: ";
       cin>>y4;
        float l1= pow((x2-x1),2)+pow((y2-y1),2);
        float l2= pow((x3-x4),2)+pow((y3-y4),2);
        float l3= pow((x4-x1),2)+pow((y4-y1),2);
        float l4= pow((x3-x2),2)+pow((y3-y2),2);
        int det=det3x3(x1,y1,1,x2,y2,1,x3,y3,1);
        if(det!=0)
        {
            if(l1==l2&&l3==l4)
            {
               cout<<"Parallelogram can be formed";
                float ar= 2*det;
                if(ar>0)
                ar=ar;
                else if(ar<0)
                ar=-ar;
               cout<<" and its area is - "<<ar<<" square units.\n";
                system("pause");
                goto matrix;
            }
            else
            {
               cout<<"Parallelogram can not be formed.";
                cout<<"\a";
            }
        }
        else
        {
           cout<<"Parallelogram can not be formed.";
            cout<<"\a";
        }
    }
    else if(x==30)
    {
        int a,b,c,d,e,f,X,Y,D;
        float x,y;
        cout<<"Solving 2 Equations\n\n";
        cout<<"FIRST EQUATION: ax + by = c\n";
        cout<<"Enter the values of a, b, c of the first equation:\na: ";
        cin>>a;
        cout<<"\nb: ";
        cin>>b;
        cout<<"\nc: ";
        cin>>c;
        cout<<"SECOND EQUATION: dx + ey = f\n";
        cout<<"Enter the values of d, e, f of the second equation:\nd: ";
        cin>>d;
        cout<<"\ne: ";
        cin>>e;
        cout<<"\nf: ";
        cin>>f;
        D=det2x2(a,b,d,e);
        X=det2x2(c,b,f,e);
        Y=det2x2(a,c,d,f);
        x=(float)X/(float)D;
        y=(float)Y/(float)D;
        if(D!=0)
        {
            cout<<"The solution of the entered equations "<<a<<"x + "<<b<<"y = "<<c<<" and "<<d<<"x + "<<e<<"y = "<<f<<" are:\n";
            cout<<"x = "<<x<<" y = "<<y<<"\n";
        }
        else
        {
           cout<<"The equations have either no solution or infinitely many solutions.";
            cout<<"\a";
        }
    }
    else if(x==31)
    {
        int a,b,c,d,e,f,g,h,i,m,n,o,D,X,Y,Z;
        float x,y,z;
        cout<<"Solving 3 Equations\n\n";
        cout<<"FIRST EQUATION: ax + by + cz = m\n";
        cout<<"Enter the values of a, b, c, m of the first equation -\na: ";
        cin>>a;
        cout<<"\nb: ";
        cin>>b;
        cout<<"\nc: ";
        cin>>c;
        cout<<"\nm: ";
        cin>>m;
        cout<<"SECOND EQUATION: dx + ey + fz = n\n";
        cout<<"Enter the values of d, e, f, n of the second equation -\nd: ";
        cin>>d;
        cout<<"\ne: ";
        cin>>e;
        cout<<"\nf: ";
        cin>>f;
        cout<<"\nn: ";
        cin>>n;
        cout<<"THIRD EQUATION: gx + hy + iz = o\n";
        cout<<"Enter the values of g, h, i, o of the third equation -\ng: ";
        cin>>g;
        cout<<"\nh: ";
        cin>>h;
        cout<<"\ni: ";
        cin>>i;
        cout<<"\no: ";
        cin>>o;
        D=det3x3(a,b,c,d,e,f,g,h,i);
        X=det3x3(m,b,c,n,e,f,o,h,i);
        Y=det3x3(a,m,c,d,n,f,g,o,i);
        Z=det3x3(a,b,m,d,e,n,g,h,o);
        x=(float)X/(float)D;
        y=(float)Y/(float)D;
        z=(float)Z/(float)D;
        if(D!=0)
        {
            cout<<"The solution of the entered equations: "<<a<<"x + "<<b<<"y + "<<c<<"z = "<<m<<", "<<d<<"x + "<<e<<"y + ";
            cout<<f<<"z = "<<n<<" and "<<g<<"x + "<<h<<"y + "<<i<<"z = "<<o<<" are:\n";
            cout<<"x = "<<x<<" y = "<<y<<" z = "<<z;
        }
        else
        {
            cout<<"The equations have either no solution or infinitely many solutions.";
            cout<<"\a";
        }
    }
    else if(x==32)
    {
        int a[100][100],b[100][100],m,det;
        float c[100][100];
        cout<<"Find The Inverse Of A Matrix\n\n";
        inverse:
        std::cout<<"Enter the dimension(2 OR 3) of the square matrix: ";
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
                cout<<"\a";
            }
            float k=(float)1/det;
            scamult(m,m,k,b,c);
            std::cout<<"\nThe inverse of the matrix:\n";
            showmatrix(m,m,a);
            std::cout<<"is:\n";
            showmatrixf(m,m,c);
        }
        else
        {
            std::cout<<"SORRY! FUNCTION UNAVAILABLE!\n";
            cout<<"\a";
        }
    }
    else
    {
        goto endmatrix;
    }
    cout<<"\n\n\a";
    system("pause");
    system("cls");
    goto matrix;
    endmatrix:
    cout<<"EXITING OPERATIONS ....\a\n";
    system("pause");
    system("cls");
}