#include <stdio.h>

double simple_model(double Var1, double Var2, double Var3, double Var4, double Var5, double Var6, double Var7, double Var8, double Var9, double Var10) {
  // handle some internal calculations
  double Expression1 = Var1 * 0.336218764;
  double Expression2 = Var2 * 0.75222251;
  double Expression3 = Var3 * 0.358511648;
  double Expression4 = Var4 * 0.916881328;
  double Expression5 = Var5 * 0.968932684;
  double Expression6 = Var6 * 0.100469201;
  double Expression7 = Var7 * 0.008698836;
  double Expression8 = Var8 * 0.980040676;
  double Expression9 = Var9 * 0.36560712;
  double Expression10 = Var10 * 0.716986761;

  // evaluate outputs
  double *output;
  output[0] = Expression1 + Expression2 + Expression3;
  output[1] = Expression4 + Expression5 + Expression6;
  output[2] = Expression7 + Expression8;
  output[3] = Expression9;
  output[4] = Expression10;

  // double output = Expression1 + Expression2;

  // return output;
  printf("Input: %.f %.f %.f %.f %.f %.f %.f %.f %.f %.f\n", Var1, Var2, Var3, Var4, Var5, Var6, Var7, Var8, Var9, Var10);
  printf("Output: %.8f %.8f %.8f %.8f %.8f\n", output[0], output[1], output[2], output[3], output[4]);
  // return [ Output1, Output2, Output3, Output4, Output5 ]

  return output[0];

}

int main() {

  double Var1 = 5.0;
  double Var2 = 2.0;
  double Var3 = 5.0;
  double Var4 = 2.0;
  double Var5 = 5.0;
  double Var6 = 2.0;
  double Var7 = 5.0;
  double Var8 = 2.0;
  double Var9 = 5.0;
  double Var10 = 2.0;
  double* output;


  // evaluate
  // simple_model(Var1, Var2, Var3, Var4, Var5, Var6, Var7, Var8, Var9, Var10, output);
  printf("%f\n", simple_model(Var1, Var2, Var3, Var4, Var5, Var6, Var7, Var8, Var9, Var10) );

}
