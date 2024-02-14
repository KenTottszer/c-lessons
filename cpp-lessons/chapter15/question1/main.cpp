#include <iostream>
#include <string>
#include "random.h"



class Monster{

public:
    enum Type{
    dragon, 
    goblin, 
    ogre, 
    orc, 
    skeleton, 
    troll, 
    vampire,
    zombie,
    max_monsters_type
    };

    Monster(Type type, std::string name, std::string rawr, int hit):
        m_type {type},
        m_name {name},
        m_rawr {rawr},
        m_hit {hit}{

        }
    constexpr std::string_view getTypeString() const{
		switch (m_type){
		case dragon:   return "dragon";
		case goblin:   return "goblin";
		case ogre:     return "ogre";
		case orc:      return "orc";
		case skeleton: return "skeleton";
		case troll:    return "troll";
		case vampire:  return "vampire";
		case zombie:   return "zombie";
		default:       return "???";
		}
	}

    void print() const{
		if (m_hit <= 0){
			std::cout << m_name << " is dead.\n";
        }
        else{
			std::cout << m_name << " the " << getTypeString() << " has " << m_hit << " hit points and says " << m_rawr << ".\n";
	}
    }

   

private:
    Type m_type{};
    std::string m_name{};
    std::string m_rawr{};
    int m_hit{};


};

 namespace MonsterGenerator{
        
        std::string getName(int num){
            switch (num)
            {
            case 0: return "Tamas";
            case 1: return "Bob";
            case 2: return "Billy";
            case 3: return "Ahmad";
            case 4: return "Abood";
            case 5: return "Ken";
            
            default:
                return "Anon";
            }
        }
        
        std::string getRawr(int num){
            switch (num)
            {
            case 0: return "ahhhh";
            case 1: return "ohhh";
            case 2: return "ehhh";
            case 3: return "geci";
            case 4: return "niggz";
            case 5: return "asfhjasfksa";
            
            default:
                return "nothing";
            }
        }
        Monster generate(){
            return Monster{ 
                static_cast<Monster::Type>(Random::get(0, Monster::max_monsters_type-1)),
                getName(Random::get(0,5)),
                getRawr(Random::get(0,5)),
                Random::get(1, 100)};
        }
        
    };


int main()
{
	Monster m{ MonsterGenerator::generate() };
	m.print();

	return 0;
}