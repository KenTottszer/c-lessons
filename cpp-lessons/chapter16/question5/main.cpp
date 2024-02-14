#include <iostream>
#include "random.h"
#include <string_view>
#include <vector>
#include <string>
#include <limits>

namespace Settings
{
    constexpr int wrongGuessesAllowed { 6 };
}
namespace WordList{
    std::vector<std::string_view> words{"mystery", "broccoli", "account", "almost", "spaghetti", "opinion", "beautiful", "distance", "luggage"};

    std::string_view getRandomWord(){
        return words[Random::get<std::size_t>(0, words.size()-1)];
    }
}
class Session
{
private:
    // Game session data
    std::string_view m_word { WordList::getRandomWord() };
     int m_wrongGuessesLeft { Settings::wrongGuessesAllowed };
    std::vector<bool> m_letterGuessed { std::vector<bool>(26) };

    std::size_t toIndex(char c) const { 
        return static_cast<std::size_t>((c % 32)-1); 
        }

public:
    std::string_view getWord() const { 
        return m_word; 
        }

    int wrongGuessesLeft() const { 
        return m_wrongGuessesLeft; 
        }
    void removeGuess() { 
        --m_wrongGuessesLeft; 
        }

    bool isLetterGuessed(char c) const { 
        return m_letterGuessed[toIndex(c)]; 
        }
    void setLetterGuessed(char c) {
        m_letterGuessed[toIndex(c)] = true; 
        }
    bool isLetterInWord(char c) const{
        for (auto ch: m_word){
            if (ch == c)
                return true;
        }

        return false;
    }

    bool won(){
        for (auto c: m_word){
            if (!isLetterGuessed(c))
                return false;
        }
        return true;
    }
    

};




void placeLines(Session& word){
    std::cout << "\nThe word is:   ";
    for (auto c: word.getWord()){
       if(word.isLetterGuessed(c)){
        std::cout << c;
       }
       else{
        std::cout << "-";
       }
    }   
     std::cout << "   Wrong guesses: ";
    for (int i=0; i < word.wrongGuessesLeft(); ++i)
        std::cout << '+';


    for (char c='a'; c <= 'z'; ++c)
        if (word.isLetterGuessed(c) && !word.isLetterInWord(c))
            std::cout << c;

    std::cout << '\n';
}

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
char getUserInput(Session word) {
    while (true) {
        std::cout << "\nType in a letter: ";
        char letter{};
        std::cin >> letter;

        if ((letter < 'a' || letter > 'z') && (letter < 'A' || letter > 'Z') && !std::cin) {
            if (std::cin.eof()) {
                exit(0); 
            }
            std::cin.clear();
            ignoreLine();
            std::cout << "Oops, that input is invalid. Please try again.\n";
        }
        else {
            ignoreLine();
            return letter;
        }
        if (word.isLetterGuessed(letter))
        {
            std::cout << "You already guessed that.  Try again.\n";
            continue;
        }
    }
}

void handleGuess(Session &s, char c)
{
    s.setLetterGuessed(c);

    if (s.isLetterInWord(c))
    {
        std::cout << "Yes, '" << c << "' is in the word!\n";
        return;
    }

    std::cout << "No, '" << c << "' is not in the word!\n";
    s.removeGuess();
}

int main(){
    std::cout <<"Welcome to Hangman the C++ version.\nType in a letter and see if it is in the hidden random word. You only have a select amount of chances, so be wise!!\n";
       Session s{};

    while (s.wrongGuessesLeft() && !s.won())
    {
        placeLines(s);
        char c { getUserInput(s) };
        handleGuess(s, c);
    }

    placeLines(s);

    if (!s.wrongGuessesLeft())
        std::cout << "You lost!  The word was: " << s.getWord() << '\n';
    else
        std::cout << "You won!\n";

    return 0;
}

    
