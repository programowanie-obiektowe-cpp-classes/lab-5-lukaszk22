#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector<char> out;
    for(auto iter = people.rbegin(); iter!=people.rend(); ++iter){
        iter->birthday();
        
        if(iter->isMonster()==true){
            out.push_back('n');
        }
        else{
            out.push_back('y');
        }
    }

    return out;
}
