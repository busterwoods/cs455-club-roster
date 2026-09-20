#include "Screen.h"
#include <iostream>
#include <limits>

namespace textui {
    Screen::Screen(const std::string& screen_title, const std::vector<std::string>& menu_options) {
        menu.set_title(screen_title);
        for (const std::string& option : menu_options) {
            if (!option.empty()) {
                menu.add_item(option[0], option.substr(1));
            }
        }
    }

    void Screen::show() const {
        std::cout << "\n=== " << menu.get_title() << " ===\n";
        for (Menu::const_iterator i = menu.begin(); i != menu.end(); ++i) {
            std::cout << *i << "\n";
        }
    }

    char Screen::get_choice() const {
        char choice;
        while (true) {
            std::cout << "Enter your choice: ";
            if (!(std::cin >> choice)) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid input. Please enter a valid character.\n";
                continue;
            }

            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            for (Menu::const_iterator i = menu.begin(); i != menu.end(); ++i) {
                if (i->get_selector() == choice) {
                    return choice;
                }
            }

            std::cout << "Choice " << choice << " is not a valid option. Please try again.\n";
        }
    }
}