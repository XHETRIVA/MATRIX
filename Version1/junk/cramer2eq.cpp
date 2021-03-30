#include<iostream>
int det2x2(int a,int b,int c,int d)
{
    int det;
    det=a*d-b*c;
    return det;
}
int main()
{
    int a,b,c,d,e,f,D,X,Y;
    float x,y;
    char ch;
    repeat:
    std::cout<<"FIRST EQUATION: ax + by = c\nEnter the values of a,b,c of the first equation:\n";
    std::cin>>a>>b>>c;
    std::cout<<"SECOND EQUATION: dx + ey = f\nEnter the values of d,e,f of the second equation:\n";
    std::cin>>d>>e>>f;
    D=det2x2(a,b,d,e);
    X=det2x2(c,b,f,e);
    Y=det2x2(a,c,d,f);
    x=(float)X/(float)D;
    y=(float)Y/(float)D;
    if(D==0)
    {
        std:: cout<<"The equations have either no solution or infinite many solutions.\nDo You Want To Try Again?(y/n) - ";
        std::cin>>ch;
        if(ch=='y')
        goto repeat;
    }
    else
    {
        std::cout<<"The solution of the entered equtions "<<a<<"x + "<<b<<"y = "<<c<<"  and  "<<d<<"x + "<<e<<"y = "<<f;
        std::cout<<"  are:\nx = "<<x<<"\ny = "<<y<<"\n";
    }
}