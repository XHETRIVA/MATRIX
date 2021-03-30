#include<iostream>
int det3x3(int a,int b,int c,int d,int e,int f,int g,int h,int i)
{
    int det=a*(e*i-h*f)-b*(d*i-f*g)+c*(d*h-e*g);
    return det;
}
int main()
{
    int a,b,x,y,m,n;
    std::cout<<"Enter the x and y coordinates of the first point\n";
    std::cin>>a>>b;
    std::cout<<"Enter the x and y coordinates of the second point\n";
    std::cin>>x>>y;
    std::cout<<"Enter the x and y coordinates of the third point\n";
    std::cin>>m>>n;
    int det=det3x3(a,b,1,x,y,1,m,n,1);
    if(det==0)
    {
        std::cout<<"The points are COLLINEAR!\n";
    }
    else
    {
        std::cout<<"The points are not COLLINEAR!\n";
    }
    if(det!=0)
    {
        std::cout<<"The points form a TRIANGLE!\n";
    }
    else
    {
        std::cout<<"The points donot form a TRIANGLE\n";
    }
    if(det!=0)
    {
        int ar;
        std::cout<<"It is a Triangle!\n";
        ar=0.5*det;
        if(ar<0)
        ar=-ar;
        std::cout<<"AREA of TRIANGLE = "<<ar;
    }
    else
    {
        std::cout<<"OOPS:It is not a Traingle!\n";
    }
    
    
    
}