#version 330 core
layout (location = 0) in vec3 aPos;
layout (location = 1) in vec3 aColor;
uniform int numObjs;
uniform mat4 transform[2];
out vec3 ourColor;
void main() {
   gl_Position = transform[0] * vec4(aPos.x, aPos.y, aPos.z, 1.0);
   ourColor = aPos;
};