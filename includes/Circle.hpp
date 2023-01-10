#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "main.hpp"

class Circle {

    private: 
        double radius;
        glm::vec2 position; // xy position 
        glm::mat2 transform; // transformation matrix

        void createVertexArray();

    public:
        Circle(glm::vec2 position, double radius);
        void translate();


};

#endif