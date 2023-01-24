//
// Created by Haibin Cao on 1/23/23.
//

#ifndef SHITTYHANGMAN_RESOURCEHOLDER_H
#define SHITTYHANGMAN_RESOURCEHOLDER_H
#include <iostream>
#include <map>

template<typename Identifier, typename Resource>
class ResourceHolder
{
private:
    static std::map<Identifier, Resource> resource_Map;
public:
    ResourceHolder();
    static void load(Identifier id, const std::string& fileName);
};
#include "ResourceHolder.cpp"

#endif //SHITTYHANGMAN_RESOURCEHOLDER_H
