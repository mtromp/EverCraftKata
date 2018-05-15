#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

class Character
{
public:
    Character();
    void Name(std::string name);
    std::string GetName();
private:
    std::string CharacterName;
};

#endif // CHARACTER_H
