//
// Created by Haibin Cao on 1/23/23.
//
#ifndef SHITTYHANGMAN_RESOURCEHOLDER_CPP
#define SHITTYHANGMAN_RESOURCEHOLDER_CPP

#include "ResourceHolder.h"
template<typename Identifier, typename Resource>
std::map<Identifier, Resource> ResourceHolder<Identifier, Resource>::resource_Map;

template<typename Idenfitier, typename Resource>
ResourceHolder<Idenfitier, Resource>::ResourceHolder()
{
}

template<typename Identifier, typename Resource>
void ResourceHolder<Identifier, Resource>::load(Identifier identifier, const std::string& fileName)
{

    resource_Map.insert(std::pair<Identifier, Resource>(identifier, fileName));
}

#endif