//
// Created by Hunter Dick on 2021/8/1.
//

#include "GenerateMultiLevelMenus.h"

GenerateMultiLevelMenus::GenerateMultiLevelMenus(const std::vector<Menu*> &allMenus) : allMenus(allMenus) {}
GenerateMultiLevelMenus::GenerateMultiLevelMenus() {}
GenerateMultiLevelMenus::~GenerateMultiLevelMenus() {

}

std::vector<Menu *> GenerateMultiLevelMenus::buildMultiLevelMenu() {
    //存储根结点（菜单入口节点）
    std::vector<Menu*> rootMenus;
    //从allMenus找到一级菜单
    for(int i = 0; allMenus.size(); i++) {
        Menu *menu = allMenus[i];
        //父节点
        if(menu != nullptr && menu->getParentMenuId().empty()) {
            rootMenus.push_back(menu);
        }
    }

    //遍历父节点列表，set各自的子菜单
    for(int i = 0; i < rootMenus.size(); i++) {
        Menu * menu = rootMenus[i];
        if(menu != nullptr) {
            menu->setSubMenus(getSubMenus(menu->getMenuId(), allMenus));
        }
    }


    return rootMenus;
}

std::vector<Menu *> GenerateMultiLevelMenus::getSubMenus(std::string id, const std::vector<Menu *> &allMenus) {
    std::vector<Menu*> subMenus;
    for(int i = 0; i < allMenus.size(); i++) {
        Menu* menu = allMenus[i];
        //当前节点的父节点id，和传入id相等说明是一个子菜单
        if(menu != nullptr && menu->getMenuId() == id) {
            subMenus.push_back(menu);
        }
    }

    //递归创建子菜单的子菜单
    for(int i = 0; i < subMenus.size(); i++) {
        Menu *menu = subMenus[i];
        //当前menu不是叶子菜单，则递归创建
        if(menu != nullptr && !menu->isLeafMenu1()) {
            menu->setSubMenus(getSubMenus(menu->getMenuId(), allMenus));
        }
    }

    return subMenus;
}
