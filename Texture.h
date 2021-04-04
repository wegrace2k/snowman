/*
 * Texture.h
 *
 *  Created on: 03 апр. 2021 г.
 *      Author: TEN
 */

#ifndef TEXTURE_H_
#define TEXTURE_H_

#include <GL/gl.h>
#include <GL/glu.h>

class Texture
{
protected:
	GLuint _tex;
public:
	Texture(const char * filename);
	virtual ~Texture();

	void bind();
};

#endif /* TEXTURE_H_ */



