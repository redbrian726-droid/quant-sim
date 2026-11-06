//This is where I write the solver for schrodinger's wave equation
consexpr gridbins=100;

//using the finite difference method to find the 2nd derivative of the wave function for the kinetic energy term and turn it into a matrix. got the in/out array idea from claude
void fdm_2der (const double wavefunction, double 2derivative[][], double interval){
  for (int i=0;i<gridbins;i++){
    if (i==0){
      2derivative [0][0]=(-2*wavefunction[0])/interval**2;
      2derivative [0][1]=(wavefunction[1])/interval**2;
    }
    else if (i==gridbins-1){
      2derivative [i][i]=(-2*wavefunction[i])/interval**2;  
      2derivative [i][i-1]=(wavefunction[i-1])/interval**2;
    }
    else{
      2derivative [i][i]=(-2*wavefunction[i])/interval**2;
      2derivative [i][i-1]=(wavefunction[i-1])/interval**2;
      2derivative [i][i+1]=(wavefunction[i+1])/interval**2; 
    }
  }
}
