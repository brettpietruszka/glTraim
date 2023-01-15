#include "Circle.hpp"

//glTraim::Circle::curID {0};

glTraim::Circle::Circle(glm::vec2 pos, double rad) 
    : position{pos}, radius{rad}, ID : {curID++} {

    this->transform = glm::translate(glm::mat4 (1.0f);, glm::vec3(pos.x,pos.y,0.0f));
    this->createVertexArray();

}


glTraim::Circle::createVertexArray() {
    
    // Create a circle of vertices with radius one 
    // centered around the point 0,0
    // these vertices will be translated via transform


    // plan is to use a fragment shader to simply turn
    // it into a circle 
    
    // define another attribute 
    float right = 0.5;
    float bottom = -0.5;
    float left = -0.5;
    float top = 0.5;
    this->vertexArray = {
        //x, y, z, lx, ly
        right, bottom, 0, 1.0, -1.0,
        right, top, 0, 1.0, 1.0,
        left, top, 0, -1.0, 1.0,
        left, bottom, 0, -1.0, -1.0,
    };
}
