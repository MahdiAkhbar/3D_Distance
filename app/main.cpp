
#include <iostream>
#include <stdlib.h>
#include <math.h>

float ux{}, uy{}, vx{}, vy{}, vz{};

float dist3(float ux, float uy, float uz, float vx, float vy, float vz)
{
  float d = sqrt(pow((vx-ux),2) + pow((vy-uy),2) + pow((vz-uz),2));
  std::cout << "Distance between ("<<ux<<", "<<uy<<", "<<uz<<") and "
                                "("<<vx<<", "<<vy<<", "<<vz<<") = ";

  return d;
}

int main()
{
  std::cout << dist3(1,2,3,0,0,0) << std::endl;
  std::cout << dist3(1,2,3,1,2,3) << std::endl;
  std::cout << dist3(1,2,3,7,-4,5) << std::endl;
  return 0;
}
