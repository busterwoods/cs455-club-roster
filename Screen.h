#ifndef SCREEN_H
#define SCREEN_H

#include <string>
#include <vector>
#include <utility>
#include "Menu.h"

namespace textui {
    class Screen {
        private:
            Menu menu;

        public:
            Screen(const std::string& screen_title, std::vector<std::pair<char, std::string>> menu_options);

            void show() const;
            char get_choice() const;

    };
}

#endif
