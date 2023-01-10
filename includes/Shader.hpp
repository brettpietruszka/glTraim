#ifndef SHADER_H
#define SHADER_H

#include "main.hpp"
  
#include <string>
#include <fstream>
#include <sstream>
//#include <iostream>
  
/* SHADERS helpful info
vec.x, vec.y ...
Swizzling: 
vec2 someVec;
vec4 differentVec = someVec.xyxx;
vec3 anotherVec = differentVec.zyw;
vec4 otherVec = someVec.xxxx + anotherVec.yxzy;

vec2 vect = vec2(0.5, 0.7);
vec4 result = vec4(vect, 0.0, 0.0);
vec4 otherResult = vec4(result.xyz, 1.0);

Uniforms: uniforms are global variables for shaders defined once
and they must be in the GLSL code and data must be added to it via

float timeValue = glfwGetTime();
float greenValue = (sin(timeValue) / 2.0f) + 0.5f;
int vertexColorLocation = glGetUniformLocation(shaderProgram, "ourColor");
glUseProgram(shaderProgram);
glUniform4f(vertexColorLocation, 0.0f, greenValue, 0.0f, 1.0f);

vecn: the default vector of n floats.
bvecn : a vector of n booleans.
ivecn : a vector// of n integers.
uvecn : a vector of n unsigned integers.
dvecn : a vector of n double components.
*/ 


class Shader {
    public:
        // the program ID
        unsigned int ID;
    
        // constructor reads and builds the shader
        Shader(const char* vertexPath, const char* fragmentPath);
        // use/activate the shader
        void use();
        // utility uniform functions
        void setBool(const std::string &name, bool value) const;  
        void setInt(const std::string &name, int value) const;   
        void setFloat(const std::string &name, float value) const;

    private:
        void checkCompileErrors(unsigned int, std::string);
};
  
#endif