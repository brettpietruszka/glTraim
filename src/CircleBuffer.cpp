#include "main.hpp"

glTraim::CircleBuffer::CircleBuffer() {
    // VBO is buffer filed with actual data
    // VAO is how the GPU should interpret that data 
    // EBO decides which vertices from VBO to draw in which order
    glGenVertexArrays(1, &this->VAOID); // vao is attribute pointer to specify data
    glGenBuffers(2, &this->VBOID); // creates a new unique id uint and assign it to buffers
    glGenBuffers(1, &this->EBOID);

    glBindBuffer(GL_ARRAY_BUFFER,this->VBOID[0]);
    glBufferData(GL_ARRAY_BUFFER, sizeof(circle_vert_data),circle_vert_data, GL_STATIC_DRAW);

    glBindBuffer(GL_ARRAY_BUFFER,this->VBOID[1]);
    


    // LAYOUT
    // 3 vertex

}



glTraim::CircleBuffer::deleteBuffer() {
    glDeleteVertexArrays(1, &this->VAOID);
    glDeleteBuffers(1, &this->VBOID);
    glDeleteBuffers(1, &this->EBOID);
}
