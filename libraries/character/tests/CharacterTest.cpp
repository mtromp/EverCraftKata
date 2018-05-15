#include "Character.h"
#include <gtest/gtest.h>

TEST(characterTest, characterNameCanBeSetAndRetrieved)
{
    Character character;
    character.Name("holodigm");

    EXPECT_EQ("holodigm", character.GetName());
}

TEST(characterTest, characterAlignmentCanBeSetAndRetrieved)
{
    Character character;
    character.Alignment("gobbledygook");

    EXPECT_EQ("gobbledygook", character.GetAlignment());
}

TEST(characterTest, characterAlignmentCanOnlyBeGoodEvilOrNeutral)
{
    Character character;
    character.Alignment("gobbledygook");

    std::string actualAlignment = character.GetAlignment();

    if (actualAlignment == "Good")
    {
        EXPECT_EQ("Good", actualAlignment);
    } else if (actualAlignment == "Evil") {
        EXPECT_EQ("Evil", actualAlignment);
    } else if (actualAlignment == "Neutral") {
        EXPECT_EQ("Neutral", actualAlignment);
    } else {
        EXPECT_EQ("Neutral", actualAlignment);
    }
}
