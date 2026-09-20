#include "Menu.h"

namespace textui {

    void Menu::set_title(const std::string& title) {
        this->title = title;
    }

    std::string Menu::get_title() const {
        return title;
    }

    void Menu::add_item(char selector, const std::string& description) {
        item_list.emplace_back(selector, description);
    }

    void Menu::add_item(const Menu_item& item) {
        item_list.push_back(item);
    }

    Menu::const_iterator Menu::begin() const {
        return item_list.cbegin();
    }

    Menu::const_iterator Menu::end() const {
        return item_list.cend();
    }
}