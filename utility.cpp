#include "utility.h"

// IN THIS FILE, define any of your OWN functions you may need to 
// solve the problems.    

// You can access p.x, p.y, q.x and q.y and use those in your formula.
double getLength(double p1x, double p1y, double p2x, double p2y){
     return sqrt( pow(p2x - p1x, 2) + pow(p2y - p1y,2));

}
bool approxEqual(double x, double y, double tolerance){
     if( fabs(x-y) < tolerance){return true;}
     else{return false; }

}



// You will need to include the function prototype in "utility.h" and
// then be sure to  #include "utility.h" in the file where you use
// these functions

