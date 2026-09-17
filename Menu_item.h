#ifndef MENU_ITEM_H
#define MENU_ITEM_H

#include <iostream>
#include <string>

namespace textui{

    class Menu_item {
        private:
            char selector;
            std::string description;

        public:
            Menu_item(char selector, std::string description);
            
            char get_selector() const;
            std::string get_description() const;

            friend std::ostream& operator<<(std::ostream& os, const Menu_item& item);
    };
}

#endif