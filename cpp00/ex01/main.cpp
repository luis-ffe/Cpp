#include "master_header.hpp"

int main(void){
    Phonebook phonebook;
    std::string input;
    int n;

    n = 0;
    while (!std::cin.eof()) {
        std::cout << "Command list; SEARCH / ADD / EXIT \n";
        std::getline(std::cin, input);
        if (input == "EXIT") //directly stops the loop otherwose it keeps asking for input
            return (0);
        if (input == "ADD") {
            if (n > 8)
                std::cout << "Maximum of 8 contacts allowed. \n";
            else {
                ft_add_all(&phonebook, n);
                n++;
            }
        }
        else if (input == "SEARCH") {
            ft_search(&phonebook, n);
        }
        else {
            if (!std::cin.eof()) {
                std::cout << "Commands: [ADD] [SEARCH] [EXIT]\n";
            }
        }
    }
    return 0;
}
