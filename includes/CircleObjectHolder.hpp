#ifndef CIRCLE_OBJECT_HOLDER_HPP
#define CIRCLE_OBJECT_HOLDER_HPP

#include "Circle.hpp"
#include <vector>


namespace glTraim {
    
class CircleObjectHolder {
        
    public:
        std::vector<glTraim::Circle> gameCircles;
        float * circleAttributeData;

        CircleObjectHolder();
        ~CircleObjectHolder();

        void addCircle(glTraim::Circle &newCircle);
        void removeCircle(glTraim::Circle &newCircle);
        int size();


}; 

}


#endif