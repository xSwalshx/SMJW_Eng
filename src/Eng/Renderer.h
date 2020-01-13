#ifndef RENDERER_H
#define RENDERER_H

#include <GL/glew.h> 

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include "stb_image.h"

#include <iostream>
#include <vector>


class Renderer {
public:

	unsigned int VAO;

	Renderer();
	void loadTexture(char const * path);
	void draw();
private:
	unsigned int VBO;
	unsigned int texture;
};

#endif