//
// Created by Hunter Dick on 2021/8/1.
//

#ifndef LEETCODEPASS_GENERATEMULTILEVELMENUS_H
#define LEETCODEPASS_GENERATEMULTILEVELMENUS_H


#include "Menu.h"

class GenerateMultiLevelMenus {

private:
    //包含所有menu节点的list，假设初始化时期构建完成
    std::vector<Menu*> allMenus;
public:
    virtual ~GenerateMultiLevelMenus();
    GenerateMultiLevelMenus();
    GenerateMultiLevelMenus(const std::vector<Menu*> &allMenus);
    std::vector<Menu*>& buildMultiLevelMenu();
    std::vector<Menu*>& getSubMenus(std::string id, const std::vector<Menu*>& allMenus);
};


#endif //LEETCODEPASS_GENERATEMULTILEVELMENUS_H
