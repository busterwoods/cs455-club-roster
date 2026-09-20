#ifndef MENU_H
#define MENU_H

#include <string>
#include <vector>
#include "Menu_item.h"

namespace textui {
    class Menu {
        private:
            std::string title;
            std::vector<Menu_item> item_list;

        public:
            using const_iterator = std::vector<Menu_item>::const_iterator;

            Menu() = default;

            void set_title(const std::string& title);

            std::string get_title() const;

            void add_item(char selector, const std::string& description);

            void add_item(const Menu_item& item);

            const_iterator begin() const;

            const_iterator end() const;

    };
}

#endif