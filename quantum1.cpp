#include <cmath>

//Constants necessary for this endeavour:
//Gravitational constant
const float g=6.67430e-11f;
//Electrostatic constant
const float k=8.98755e9f;
//Speed of light
const float c=c = 2.99792e8f;


//Introducing the particle, which the project ervolves around
struct particle{
float x [100];
float y [100];
float z [100];
};

//Newtonian potential from interaction with another poarticle
float newton_potential_mutual(constant,attribute1,attribute2,r1,r2){
float d,potential;
d=std::fabs(r1-r2);

//With no distance between particles, there is no potential
if (d!=0){
  potential2=constant*attribute1*attribute2/d;
}
  else potential2=0;
  
  return potential2;
};

//Newtonian potential from a field
float newton_potential_solo(constant,attribute,r){
potential1=constant*attribute/r;
return potential1;
};
