//
// Created by Hunter Dick on 2021/8/1.
//

#ifndef LEETCODEPASS_MENU_H
#define LEETCODEPASS_MENU_H

#include <string>
#include <vector>

class Menu {
protected:
    //菜单id
    std::string menuId;
    //菜单名称
    std::string menuName;
    //父菜单id(或指针）
    std::string parentMenuId;
    //子菜单
    std::vector<Menu*> subMenus;
    //是否是最后一级的叶子节点
    bool isLeafMenu = false;
public:
    bool isLeafMenu1() const;

    void setIsLeafMenu(bool isLeafMenu);

public:
    Menu(const std::string &menuId, const std::string &menuName, const std::string &parentMenuId,
         const std::vector<Menu *> &subMenus, bool isLeafMenu);

    Menu();

    virtual ~Menu();

    const std::string &getMenuId() const;

    void setMenuId(const std::string &menuId);

    const std::string &getMenuName() const;

    void setMenuName(const std::string &menuName);

    const std::string &getParentMenuId() const;

    void setParentMenuId(const std::string &parentMenuId);

    const std::vector<Menu*> &getSubMenus() const;

    void setSubMenus(const std::vector<Menu*> &subMenus);


};


#endif //LEETCODEPASS_MENU_H
