#include <iostream>
#include <cmath>
using namespace std;

double pi = 2 * acos(0.0);

//Declaring classes
class rectBlocks{
	public:
	int rectwidth;
	int rectheight;
	int rectlength;

rectBlocks(int rw, int rh, int rl){
		rectwidth = rw;
		rectheight = rh;
		rectlength = rl;

	
	};
};


class sqrBaseRectBlocks: public rectBlocks{
	public:
	sqrBaseRectBlocks(int sqrwidth, int sqrheight, int sqrlength): rectBlocks(rw, rh, rl){};
	
	
};


class cuboidBlocks: public sqrBaseRectBlocks{
	public:
	cuboidBlocks(int cuwidth, int cuheight, int culength): sqrBaseRectBlocks(sqrwidth, sqrheight, sqrlength){};
	

};


class cylindricalBlocks: public sqrBaseRectBlocks{
	public:
	int diameter, radius;
	cylindricalBlocks(int cywidth, int cyheight, int cylength): sqrBaseRectBlocks(sqrwidth, sqrheight, sqrlength){
		diameter = cywidth;
		radius = diameter/2;
		double volume = pi * radius * radius * cylength;
		double surfaceArea = (2*pi*radius*cylength) + (2*pi*radius*radius);
	
	};
};


class sphericalBlocks: public cuboidBlocks{
	public:
	int diameter, radius;
	sphericalBlocks(int spwidth, int spheight, int splength): cuboidBlocks(cuwidth, cuheight, culength){
		diameter = cywidth;
		radius = diameter/2;
		double volume = (4/3) * pi * radius * radius * radius;
		double surfaceArea = 4*pi*radius*radius;
	
	
	};

};



