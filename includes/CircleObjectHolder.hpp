#ifndef CIRCLE_OBJECT_HOLDER_HPP
#define CIRCLE_OBJECT_HOLDER_HPP

#include "main.hpp"

#define CIRCLES_INIT_MAX 100

namespace gltraim {
    
class CircleObjectHolder {

    public:
        std::vector<glTraim::Circle> gameCircles;
        float * circleAttributeData;
        void CircleObjectHolder;

        CircleObjectHolder();
        ~CircleObjectHolder();

        void addCircle(const glTraim::Circle &newCircle);
        void removeCircle(unsigned int circleID);


}; 

}


#endif
#endif