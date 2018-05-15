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

void Character::Alignment(std::string alignment)
{
    this->CharacterAlignment = alignment;
}

std::string Character::GetAlignment()
{
    return this->CharacterAlignment;
}
