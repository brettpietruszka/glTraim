#include "CircleObjectHolder.hpp"
#include "Circle.hpp"
#include "globals.hpp"
#include <algorithm>
#include <vector>

glTraim::CircleObjectHolder::CircleObjectHolder() {
    this->gameCircles = {};
    this->circleAttributeData = new float[max_circles * (36)];
}

void glTraim::CircleObjectHolder::addCircle(glTraim::Circle &newCircle) {
    

    std::copy_n(std::begin(circle_vert_data), 
        20, this->circleAttributeData + 36 * this->size());
    std::copy_n(newCircle.getTransform(), 16, this->circleAttributeData + 36 * this->size() + 20); // Should return the

    this->gameCircles.push_back(newCircle); 
    
}

void glTraim::CircleObjectHolder::removeCircle(glTraim::Circle &newCircle) {
    auto it = std::find(this->gameCircles.begin(), this->gameCircles.end(), newCircle);
    int pos =  it - this->gameCircles.begin();
    

    if (pos == this->size()) {
        return;
    }

    // Fix the array and shift everything after it 
    // Starting position is pos * (20+16)

    for (float * i = this->circleAttributeData + (pos+1) * 36; i < this->circleAttributeData + this->size() * 36; i++) {
        
        *(i - 36) = *i;
        //this->circleAttributeData[i] = 0; 
    }

    this->gameCircles.erase(it);
}

int glTraim::CircleObjectHolder::size() {
    return this->gameCircles.size();
}

glTraim::CircleObjectHolder::~CircleObjectHolder() {
    delete[] this->circleAttributeData;
}
