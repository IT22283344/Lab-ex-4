#include<iostream>
#include<iomanip>
using namespace std;

float areaofcircle(float rad);
float areaofrectangle(float length,float width);
float areaofsquare(float len);
float perameterofland(float &length,float &width);

struct circle{
	float rad;
}cir1;

struct rectangle{
	float length;
	float width;
}rec1;

struct square{
	float len;
}sqr1;



int main(){
	float groundarea,llength,lwidth,carea,rec1area,sqarea,landperemeter;
	
	cout<<"Enter length of land:";
	cin>>llength;
	cout<<"Enter width of land:";
	cin>>lwidth;
	
	cout<<"Enter length of rectangle:";
	cin>>rec1.length;
	cout<<"Enter width of rectangle:";
	cin>>rec1.width;
	
	cout<<"Enter length of square:";
	cin>>sqr1.len;
	
	cout<<"Enter radius of pond:";
	cin>>cir1.rad;
	
	 carea = areaofcircle(cir1.rad) ;
	 rec1area = areaofrectangle( rec1.length, rec1.width);
	 sqarea = areaofsquare( sqr1.len);
	 
	landperemeter = perameterofland(llength,lwidth);
	 
	groundarea = (llength*lwidth)-(carea+rec1area+sqarea);
	
	cout<<"Ground area is:"<<setiosflags(ios::fixed)<<setprecision(3)<<groundarea;
	cout<<endl;
	cout<<"Length of fence is:"<< setiosflags(ios::fixed)<<setprecision(2)<<landperemeter<<endl;
	
	
return 0;
}

float areaofcircle(float rad)
{
	float carea;
	carea=(22.0/7)*rad*rad;
	return carea;
}

float areaofrectangle(float length,float width)
{
	float rec1area;
	rec1area=length*width;
	return rec1area;
}

float areaofsquare(float len)
{
	float sqarea;
	sqarea=len*len;
	return sqarea;
}

float perameterofland(float &length,float &width)
{
	float landperemeter;
	landperemeter = (length*2)+(width*2);
	return landperemeter;
}