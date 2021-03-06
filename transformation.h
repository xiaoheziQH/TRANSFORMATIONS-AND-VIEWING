#include <GL/glut.h>
//#include "vector.h"
#include "matrix.h"


//vector scale(Matrix *sc,vector *v);

vector translate(vector *v,float x,float y,float z);


vector rotate_x(vector *v,float theta);


vector rotate_y(vector *v,float theta);


vector rotate_z(vector *v,float theta);



vector create_scale_Matrix(vector *v,float scale_x,float scale_y,float scale_z);


Matrix create_translate_Matrix(float x, float y, float z);


Matrix return_scale_Matrix(float factor_x,float factor_y,float factor_z);
