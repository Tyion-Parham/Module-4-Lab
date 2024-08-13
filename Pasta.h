#pragma once
#include "Food.h"
class Pasta :
    public Food
{
    using Food::Food;
public:
    virtual void setCost();
    virtual void pickFood();
};

