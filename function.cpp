//This is where I write the solver for schrodinger's wave equation
constexpr gridbins=100;

//using the finite difference method to find the 2nd derivative of the wave function for the kinetic energy term and turn it into a matrix. got the in/out array idea from claude
void fdm_2der (double sencdderivative[][], double interval){
  for (int i=0;i<gridbins;i++){
    if (i==0){
      secndderivative [0][0]=(-2)/interval*interval;
      secndderivative [0][1]=(1)/interval*interval;
    }
    else if (i==gridbins-1){
      secndderivative [i][i]=(-2)/interval*interval;  
      secndderivative [i][i-1]=(1)/interval*interval;
    }
    else{
      secndderivative [i][i]=(-2)/interval*interval;
      secndderivative [i][i-1]=(1)/interval*interval;
      secndderivative [i][i+1]=(1)/interval*interval; 
    }
  }
}

//function for adding matrices together
void matrix_add(const double matrix1[gridbins][gridbins],int sign, const double matrix2[gridbins][gridbins],double sum[gridbins][gridbins]){
  for(int i=0;i<gridbins;i++){
    for(int j=0;j<gridbins;j++){
      sum[i][j]=matrix1[i][j]+sign*matrix2[i][j];
    }
  }
}

// function for multiplying matrices by vectors
void matrix_vector_multiply(const double matrix[gridbins][gridbins],const double vector[gridbins], double result[gridbins]){
  for(int i=0;i<gridbins;i++){
    for(int j=0;j<gridbins;j++){
      result[i]+=matrix[i][j]*vector[j];
    }
  }
}


