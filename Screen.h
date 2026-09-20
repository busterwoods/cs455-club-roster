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
            Screen(const std::string& screen_title, const std::vector<std::string>& menu_options);

            void show() const;
            char get_choice() const;

    };
}

#endif