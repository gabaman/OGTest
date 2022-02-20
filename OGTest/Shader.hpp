//
//  Shader.hpp
//  OGTest
//
//  Created by stan on 2020/12/13.
//

#ifndef SHADER_hpp
#define SHADER_hpp

#include <glad/glad.h> // 包含glad来获取所有的必须OpenGL头文件
#include <glm/glm.hpp>

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>


class Shader {
public:
    // 程序ID
    unsigned int ID;

    // 构造器读取并构建着色器
    // 使用/激活程序
    // uniform工具函数
    Shader(const GLchar* vertexPath, const GLchar* fragmentPath, const char* geometryPath = nullptr);
    void use();
    void setBool(const std::string &name, bool value) const;
    void setInt(const std::string &name, int value) const;
    void setFloat(const std::string &name, float value) const;
    void setVec2(const std::string &name, const glm::vec2 &value) const;
    void setVec2(const std::string &name, float x, float y) const;
    void setVec3(const std::string &name, const glm::vec3 &value) const;
    void setVec3(const std::string &name, float x, float y, float z) const;
    void setVec4(const std::string &name, const glm::vec4 &value) const;
    void setVec4(const std::string &name, float x, float y, float z, float w);
    void setMat2(const std::string &name, const glm::mat2 &mat) const;
    void setMat3(const std::string &name, const glm::mat3 &mat) const;
    void setMat4(const std::string &name, const glm::mat4 &mat) const;
    
    
private:
    void checkCompileErrors(GLuint shader, std::string type);
};

#endif
