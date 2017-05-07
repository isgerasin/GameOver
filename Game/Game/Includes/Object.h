#pragma once

#include "Vector//Vector.h"
#include "SFML//Main.hpp"
#include "SFML//Graphics.hpp"

//extern class Engine {};

class Object 
{
public:
	Object(Vector coordinate, Vector velocity, size_t weight, /*sf::Sprite sprite,*/ size_t level);

	void Dump();
	void Dump(FILE *file);

private:
	/*virtual void Control();
	virtual void Logic();
	virtual void Physic();
	virtual void Draw();*/
	
//	Engine *engine_;
//	sf::Sprite sprite_;
	size_t level_;

	Vector coordinate_;
	Vector velocity_;

	size_t weight_;
};

Object::Object(Vector coordinate, Vector velocity, size_t weight, /*sf::Sprite sprite,*/ size_t level) :
//	engine_(NULL),
//	sprite_(sprite),
	level_(level),
	coordinate_(coordinate),
	velocity_(velocity),
	weight_(weight)
{
	//�� ������ ��� Engine
}

void Object::Dump()
{
	printf("Object {\n");
//	printf("\tengine     : 0x%p;\n", engine_);
//	printf("\tsprite     : 0x%p;\n", &sprite_);
	printf("\tlevel      : %zu;\n", level_);
	printf("\tcoordinate : "); coordinate_.Dump();
	printf("\tvelocity   : "); velocity_.Dump();
	printf("\tweight     : %zu\n", weight_);
	printf("}\n");
}

void Object::Dump(FILE *file)
{
	fprintf(file, "Object {\n");
//	fprintf(file, "\tengine     : 0x%p;\n", engine_);
//	fprintf(file, "\tsprite     : 0x%p;\n", &sprite_);
	fprintf(file, "\tlevel      : %zu;\n", level_);
	fprintf(file, "\tcoordinate : "); coordinate_.Dump();
	fprintf(file, "\tvelocity   : "); velocity_.Dump();
	fprintf(file, "\tweight     : %zu\n", weight_);
	fprintf(file, "}\n");

}