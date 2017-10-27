#include <iostream>
#include <string>

enum class MonsterType
{
    OGRE,
    DRAGON,
    ORC,
    GIANT_SPIDER,
    SLIME
};

struct Monster
{
    MonsterType type;
    std::string name;
    int health;
};

std::string getMonsterTypeString(Monster monster)
{
    if (monster.type == MonsterType::OGRE)
        return "Ogre";
    if (monster.type == MonsterType::DRAGON)
        return "Dragon";
    if (monster.type == MonsterType::ORC)
        return "Orc";
    if (monster.type == MonsterType::GIANT_SPIDER)
        return "Giant Spider";
    if (monster.type == MonsterType::SLIME)
        return "Slime";

    return "Unknown";
}

Monster createNewMonster(MonsterType type, std::string name, int health)
{
    Monster newMonster = {type, name, health};
    return newMonster;
}

void printMonster(Monster monster)
{
    std::cout << "**********************************" << std::endl;
    std::cout << getMonsterTypeString(monster) << std::endl;
    std::cout << monster.name << std::endl;
    std::cout << monster.health << std::endl;
    std::cout << "**********************************" << std::endl;
}

int main() {


    Monster mon1 = createNewMonster(MonsterType::OGRE,"Torg",145);
    Monster mon2 = createNewMonster(MonsterType::SLIME,"BLurp",23);

    printMonster(mon1);
    printMonster(mon2);

    return 0;
}