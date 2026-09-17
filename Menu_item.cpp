#include "Menu_item.h"

namespace textui {

    Menu_item::Menu_item(char selector, std::string description)
        : selector(selector), description(description) {}

    char Menu_item::get_selector() const {
        return selector;
    }

    std::string Menu_item::get_description() const {
        return description;
    }

    std::ostream& operator<<(std::ostream& os, const Menu_item& item) {
        os << "[" << item.selector << "] " << item.description;
        return os;
    }

}