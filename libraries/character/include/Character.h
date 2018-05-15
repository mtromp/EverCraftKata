#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

class Character
{
public:
    Character();
    void Name(std::string name);
    std::string GetName();
    void Alignment(std::string alignment);
    std::string GetAlignment();
private:
    std::string CharacterName;
    std::string CharacterAlignment;
};

#endif // CHARACTER_H
