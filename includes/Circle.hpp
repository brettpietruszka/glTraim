#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include  <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>


namespace glTraim {
    
class Circle {

    private: 
        static inline unsigned int curID {0};
        
        glm::vec2 position; // xy initial position 
        double radius; // initial radius
        glm::mat4 transform; // transformation matrix
        

    public:
        unsigned int ID; // to be implemented

        Circle(glm::vec2 position, double radius);
        void translate(glm::vec3);
        void scale(double);

        glm::vec2 getPosition();
        float * getTransform();

        friend bool operator==(const glTraim::Circle&, const glTraim::Circle&);
        

}; 
}


#endif