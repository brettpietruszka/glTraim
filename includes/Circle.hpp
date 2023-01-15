#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "main.hpp"

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>


namespace gltraim {
    
class Circle {

    private: 
        static inline unsigned int curID;
        
        double radius; // initial radius
        glm::vec2 position; // xy initial position 
        glm::mat2 transform; // transformation matrix
        float vertexArray()

        void createVertexArray();

    public:
        unsigned int ID; // to be implemented

        Circle(glm::vec2 position, double radius);
        void translate();
        void scale();

        glm::vec2 getPosition();
        float * getVertArray();


}; 
}


#endif