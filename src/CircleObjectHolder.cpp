#include "CircleObjectHolder.hpp"
#include <algorithm>

glTraim::CircleObjectHolder::CircleObjectHolder() {
    this->gameCircles = {};

    this->circleAttrbuteData {new float[CIRCLES_INIT_MAX * (16)]};
}

glTraim::CircleObjectHolder::addCircle(const glTraim::Circle &newCircle) {
    this.gameCircles.push_back(newCircle);

    std::copy_n(newCircle.getAttribArray());
}



glTraim::CircleObjectHolder::~CircleObjectHolder() {
    delete[] this->circleAttributeData();
}