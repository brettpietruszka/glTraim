#include "globals.hpp"

int screen_width = 800;
int screen_height = 600;

float right = 0.5;
float bottom = -0.5;
float left = -0.5;
float top = 0.5;
float circle_vert_data[12] = { 
    //x, y, z, s, t
    right, bottom, 0.0f, 1.0f, 0.0f
    right, top, 0.0f, 01.0f, 1.0f
    left, top, 0.0f, 0.0f, 1.0f
    left, bottom, 0.0f , 0.0f, 0.0f
};