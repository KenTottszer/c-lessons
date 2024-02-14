#include <iostream>


struct Game{
    std::string monster{};
    std::string name{};
    int health{};

};

Game getMonsterDetails(){
    Game m{};
    bool status{true};
    while(status){
        int name{};
        std::cout << "What is your monster type? (ogre = 0, dragon = 1, orc = 2, spider = 3, slime = 4)\n";
        std::cin >> name;
        switch (name){
        case 0 :
            std::cout << "You chose an ogre!";
            m.monster = "ogre";
            status = false;
            break;
        case 1 :
            std::cout << "You chose a dragon!";
            m.monster = "dragon";
            status = false;
            break;
        case 2 :
            std::cout << "You chose an orc!";
            m.monster = "orc";
            status = false;
            break;
        case 3 :
            std::cout << "You chose a spider!";
            m.monster = "spider";
            status = false;
            break;
        case 4 :
            std::cout << "You chose a slime!";
            m.monster = "slime";
            status = false;
            break;
        
        default:
            std::cout << "Try again. ";
            break;
        }
    }


    std::cout << "What is your monster's name: ";
    std::cin >> m.name;

    std::cout << "How much health does your monster have: ";
    std::cin >> m.health;

    return m;

}

void printMonster(Game m){
    std::cout << "Your monster " << m.name << " is a " << m.monster << " and has " << m.health << " health\n";
}


int main(){
    Game monsterOne {getMonsterDetails()};
    printMonster(monsterOne);
   

}