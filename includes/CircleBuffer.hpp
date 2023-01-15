#ifndef CIRCLE_BUFFER_HPP
#define CIRCLE_BUFFER_HPP



#include "main.hpp"

namespace glTraim {
    
class CircleBuffer {


    public:
        unsigned int VAOID;
        unsigned int VBOID;
        unsigned int EBOID;

        CircleBuffer();
        void deleteBuffer();
        void use();


};



}


#endif