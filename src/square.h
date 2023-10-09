#pragma once
//-----------------------------------------------------------------------------
#include "ishape.h"
//-----------------------------------------------------------------------------
class Square : public IShape
{
public:
    Square(size_t w = 0, size_t h = 0)
        : IShape(),
        m_Width(w),
        m_Height(h)
    {

    }
    
    void draw() override
    {
        std::cout << "Draw a square" << std::endl;
    }

    void erase() override
    {
        std::cout << "Erase a square" << std::endl;
    }

    void exp(const std::string& file_path) override
    {
        std::cout << "Export a square to file " << file_path << std::endl;
    }

    void imp(const std::string& file_path) override
    {
        std::cout << "Import a square to file " << file_path << std::endl;
    }

private:
    size_t m_Width;
    size_t m_Height;
};
//-----------------------------------------------------------------------------
