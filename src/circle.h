#pragma once
#ifndef _CIRCLE_H_INCLUDED
#define _CIRCLE_H_INCLUDED
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
        //Draw a circle...
    }

    void erase() override
    {
        //Erase a circle
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
    size_t m_Radius;
};
//-----------------------------------------------------------------------------
#endif
