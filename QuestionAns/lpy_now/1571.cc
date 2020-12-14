#include<iostream>
#include<set>
#include<iterator>
#include<string>
#include<set>
#include<queue>
#include<list>
#include<algorithm>
#include<cstdio>
#include<cctype>
#include<cstring>
#include<map>
#include<vector>
#include<cstdlib>
#include<cmath>
#include<stack>
#include<sstream>
using namespace std;
class Point
{
protected:
    int x,y;
public:
    Point():x(0),y(0){}
    Point(double a,double b):x(a),y(b){}
    void showPoint(){cout<<"2D Point ("<<x<<","<<y<<")"<<endl;}
};
class Point_3D:public Point
{
protected:
    int z;
public:
    Point_3D():z(0){}
    Point_3D(double a,double b,double c):Point(a,b),z(c){}
    void showPoint(){cout<<"3D Point ("<<x<<","<<y<<","<<z<<")"<<endl;}
 
};

int main()
{
    int cases;
    cin>>cases;
    for(int i = 1; i <= cases; i++)
    {
        double x, y, z;
        int point_type;
        cin>>point_type;
        if(point_type == 2)
        {
            cin>>x>>y;
            Point p(x, y);
            p.showPoint();
        }
        if(point_type == 3)
        {
            cin>>x>>y>>z;
            Point_3D p(x, y, z);
            p.showPoint();
        }
    }
}

/**************************************************************
	Problem: 1571
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

