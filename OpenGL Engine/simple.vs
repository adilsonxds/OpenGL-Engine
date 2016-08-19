#version 330 core

layout(location = 0) in vec3 pos;
layout(location = 1) in vec3 vertexColor;

out vec3 fragmentColor;

void main()
{
	gl_Position.xyz = pos;
	gl_Position.w = 1;

	fragmentColor = vertexColor;
}