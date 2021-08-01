//
// Created by Hunter Dick on 2021/8/1.
//

#include "Menu.h"



Menu::Menu() {}

Menu::~Menu() {

}

const std::string &Menu::getMenuId() const {
    return menuId;
}

void Menu::setMenuId(const std::string &menuId) {
    Menu::menuId = menuId;
}

const std::string &Menu::getMenuName() const {
    return menuName;
}

void Menu::setMenuName(const std::string &menuName) {
    Menu::menuName = menuName;
}

const std::string &Menu::getParentMenuId() const {
    return parentMenuId;
}

void Menu::setParentMenuId(const std::string &parentMenuId) {
    Menu::parentMenuId = parentMenuId;
}

const std::vector<Menu*> &Menu::getSubMenus() const {
    return subMenus;
}

void Menu::setSubMenus(const std::vector<Menu*> &subMenus) {
    Menu::subMenus = subMenus;
}

Menu::Menu(const std::string &menuId, const std::string &menuName, const std::string &parentMenuId,
           const std::vector<Menu *> &subMenus, bool isLeafMenu) : menuId(menuId), menuName(menuName),
                                                                   parentMenuId(parentMenuId), subMenus(subMenus),
                                                                   isLeafMenu(isLeafMenu) {}

bool Menu::isLeafMenu1() const {
    return isLeafMenu;
}

void Menu::setIsLeafMenu(bool isLeafMenu) {
    Menu::isLeafMenu = isLeafMenu;
}


}
