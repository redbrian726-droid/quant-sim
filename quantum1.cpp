#Constants necessary for this endeavour:
#Gravitational constant
const float g=;
#Electrostatic constant
const float k=;
#Speed of light
const float c=;


#Introducing the particle, which the project ervolves around
struct particle{
float x [100];
float y [100];
float z [100];
};

#Newtonian potential from interaction with another poarticle
float newton_potential_mutual(constant,attribute1,attribute2,r1,r2){
float d,potential;
d=std::fabs(r1-r2);
potential2=constant*attribute1*attribute2/d;
return potential;
}

#Newtonian potential from a field
float newton_potential_solo(constant,attribute,r){
potential1=constant*attribute/r;
return potential1;
}
