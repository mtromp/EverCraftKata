#include "Character.h"

Character::Character()
{

}
void Character::Name(std::string name)
{
    this->CharacterName = name;
}

std::string Character::GetName()
{
    return this->CharacterName;
}

