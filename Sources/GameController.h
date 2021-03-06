#pragma once

#include "WindowController.h"
#include "ShaderProgram.h"
#include "Texture.h"

class GameController : public WindowController
{
private:

	GLuint _vao;
	GLuint _vb[3];
	ShaderProgram *_program;
	Texture *_texture;

	float _rotation;
	GLuint _textureId;

public:
	GameController();

	virtual void update(float dt);
	virtual void render();

	virtual void windowDidLoad();
};

