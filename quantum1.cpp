#include <cmath>

//Constants necessary for this endeavour:
//Gravitational constant
constexpr double g=6.67430e-11;
//Electrostatic constant
constexpr double k=8.98755e9;
//Speed of light
constexpr double c=2.99792e8;
//Defining the precision of the grid by controlling the number of bins
constexpr int gridbins=100;

//Introducing the grid where the particles exist
struct grid{
  double length, width, height;
  double dx,dy,dz;
  double x [gridbins], y [gridbins], z [gridbins];

  void gridinterval(double l,double w,double h){
    length=l;
    width=w;
    height=h;
    dx=length/gridbins;
    dy=width/gridbins;
    dz=height/gridbins;
    
    for (int i=0;i<gridbins;i++){
      x[i]=i*dx;
      y[i]=i*dy;
      z[i]=i*dz;
    }
  }
};

//Newtonian potential from interaction with another poarticle
double newton_potential_mutual(double constant, double attribute1,double attribute2,double r1,double r2){
double d,potential;
d=std::fabs(r1-r2);

//With no distance between particles, there is no potential
if (d!=0){
  potential2=constant*attribute1*attribute2/d;
  }
  else potential2=0;
  
return potential2;
};

//Newtonian potential from a field
double newton_potential_solo(constant,attribute,r){
  potential1=constant*attribute/r;
  return potential1;
};
