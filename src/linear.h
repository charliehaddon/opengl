#ifndef LINEAR_H
#define LINEAR_H

#include <math.h>

typedef struct {float x; float y;} vec2;
float vec2Dot (vec2 u, vec2 v);
float vec2Mag (vec2 u);

typedef struct {float x; float y; float z;} vec3;
float vec3Dot (vec3 u, vec3 v);
float vec3Mag (vec3 u);

typedef struct {float x; float y; float z; float w;} vec4;
float vec4Dot (vec4 u ,vec4 v);
float vec4Mag (vec4 u);

typedef struct {
    float a; float b;
    float c; float d;
} mat2;

void mat2ToArray (mat2 x, float data[4]);
mat2 mat2Mult (mat2 x, mat2 y);
float mat2Det (mat2 x);

typedef struct {
    float a; float b; float c;
    float d; float e; float f;
    float g; float h; float i;
} mat3;

void mat3ToArray (mat3 x, float data[9]);
mat3 mat3Mult (mat3 x, mat3 y);
float mat3Det (mat3 x);

typedef struct {
    float a; float b; float c; float d;
    float e; float f; float g; float h;
    float i; float j; float k; float l;
    float m; float n; float o; float p;
} mat4;

void mat4ToArray (mat4 x, float data[16]);
mat4 mat4Mult (mat4 x, mat4 y);
float mat4Det (mat4 x);

#endif