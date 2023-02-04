#include "Circle.hpp"

//glTraim::Circle::curID {0};

glTraim::Circle::Circle(glm::vec2 pos, double rad) 
    : position{pos}, radius{rad}, ID{curID++} {

    this->transform = glm::translate(glm::mat4 (1.0f), glm::vec3(pos.x,pos.y,0.0f));
    this->transform = glm::scale(this->transform, glm::vec3(0.1 * rad, 0.1 * rad, 0.0f));

}

void glTraim::Circle::translate(glm::vec3 trans) {
    this->transform = glm::translate(this->transform, trans);
    this->position = this->position + glm::vec2(trans.x, trans.y);
}

void glTraim::Circle::scale(double value) {
    this->transform = glm::translate(this->transform, glm::vec3(value,value,value));
    this->radius = this->radius * value;
}

float * glTraim::Circle::getTransform() {
    return glm::value_ptr(this->transform);
}


glm::vec2 glTraim::Circle::getPosition() {
    return this->position;
}


bool glTraim::operator==(const glTraim::Circle& c1, const glTraim::Circle& c2) {
   return c1.ID == c2.ID;
}


