#include "Entity.h"
Entity::Entity()
{
	health = 100;
	name = "entidad";
}
const char* Entity::toString()
{
	return name.c_str();
}
