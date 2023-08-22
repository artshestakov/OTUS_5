#pragma once
#ifndef _SQUARE_H_INCLUDED
#define _SQUARE_H_INCLUDED
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
        //For example: it will be the green square with a bold text
        SetColorBorder(IShape::ShapeColor::Green);
        SetColorIn(IShape::ShapeColor::Green);
        SetText("Some text");
        SetBold(true);
    }
    
    void draw() override
    {
        //Draw a square...
    }

    void erase() override
    {
        //Erase square...
    }

    void export(const std::string& file_path) override
    {
        //Save to the file
    }

    void import(const std::string& file_path) override
    {
        //Restore from the file
    }

private:
    size_t m_Width;
    size_t m_Height;
};
//-----------------------------------------------------------------------------
#endif
