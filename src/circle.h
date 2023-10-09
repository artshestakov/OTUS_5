#pragma once
//-----------------------------------------------------------------------------
#include "ishape.h"
//-----------------------------------------------------------------------------
class Circle : public IShape
{
public:
    Circle(size_t r = 0)
        : IShape(),
        m_Radius(r)
    {

    }
    
    void draw() override
    {
        std::cout << "Draw a circle" << std::endl;
    }

    void erase() override
    {
        std::cout << "Erase a curcle" << std::endl;
    }

    void exp(const std::string& file_path) override
    {
        std::cout << "Export a circle to file " << file_path << std::endl;
    }

    void imp(const std::string& file_path) override
    {
        std::cout << "Import a circle to file " << file_path << std::endl;
    }

private:
    size_t m_Radius;
};
//-----------------------------------------------------------------------------
