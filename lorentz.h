#include <cmath>

const double c_light=300000000;

struct rel_grid(const int gridsize){
  double size[3];
  double position[gridsize][3];

  lorentz(int coordinate[],double momentum[],double mass){
    double v[3];
    double lorentz_trans[3];
    for (i=0,i<3,i++){
      v[i]=momentum[i]/mass;
      if (v>=c_light){
        std::cout<<"ERROR:Objects with mass cannot reach this speed."<<endl;
        end;
      }
      lorentz_trans[i]=1/exp((1-(v[i]*v[i]/(c_light[i]*c_light[i]))),(1/2));
      where=coordinate[i];
      position[where][i]*=lorentz_trans[i];
    }
  }
}
