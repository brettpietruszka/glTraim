#ifndef GLOBALS_HPP
#define GLOBALS_HPP

#include "CircleObjectHolder.hpp"
#include "main.hpp"

extern int screen_width;
extern int screen_height;

inline constexpr int max_circles {100};


constexpr float right = 0.5;
constexpr float bottom = -0.5;
constexpr float left = -0.5;
constexpr float top = 0.5;
inline constexpr float circle_vert_data[20] = { 
    //x, y, z, s, t
    right, bottom, 0.0f, 1.0f, 0.0f,
    right, top, 0.0f, 01.0f, 1.0f,
    left, top, 0.0f, 0.0f, 1.0f,
    left, bottom, 0.0f , 0.0f, 0.0f
};
extern glTraim::CircleObjectHolder game_circles;

#endif