#include "Character.h"
#include <gtest/gtest.h>

TEST(characterTest, characterNameCanBeSetAndRetrieved)
{
    Character character;
    character.Name("holodigm");

    EXPECT_EQ("holodigm", character.GetName());
}
