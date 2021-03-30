#include<iostream>
#include<complex>
int det3x3(int a,int b,int c,int d,int e,int f,int g,int h,int i)
{
    int det=a*(e*i-h*f)-b*(d*i-f*g)+c*(d*h-e*g);
    return det;
}
int main()
{
    int a,b,c,d,e,f,g,h,i,m,n,o,D,X,Y,Z;
    float x,y,z;
    char ch;
    repeat:
    std::cout<<"FIRST EQUATION: ax + by + cz = m\nEnter the values of a,b,c,m of the first equation:\n";
    std::cin>>a>>b>>c>>m;
    std::cout<<"SECOND EQUATION: dx + ey + fz = n\nEnter the values of d,e,f,n of the second equation:\n";
    std::cin>>d>>e>>f>>n;
    std::cout<<"THIRD EQUATION: gx + hy + iz = o\nEnter the values of g,h,i,o of the first equation:\n";
    std::cin>>g>>h>>i>>o;
    D=det3x3(a,b,c,d,e,f,g,h,i);
    X=det3x3(m,b,c,n,e,f,o,h,i);
    Y=det3x3(a,m,c,d,n,f,g,o,i);
    Z=det3x3(a,b,m,d,e,n,g,h,o);
    y=(float)Y/(float)D;
    z=(float)Z/(float)D;
    x=(float)X/(float)D;
    if(D==0)
    {
        std:: cout<<"The equations have either no solution or infinite many solutions.\nDo You Want To Try Again?(y/n) - ";
        std::cin>>ch;
        if(ch=='y')
        goto repeat;
    }
    else
    {
        std::cout<<"The solution of the entered equtions "<<a<<"x + "<<b<<"y + "<<c<<"z = "<<m<<"  ,  "<<d<<"x + "<<e;
        std::cout<<"y + "<<f<<"z = "<<n<<"  and  "<<g<<"x + "<<h<<"y + "<<i<<"z = "<<o<<"are:\nx = "<<x<<"\ny = "<<y;
        std::cout<<"\nz = "<<z<<"\n";
    }
    
}