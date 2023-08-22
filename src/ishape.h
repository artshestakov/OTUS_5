#pragma once
#ifndef _ISHAPE_H_INCLUDED
#define _ISHAPE_H_INCLUDED
//-----------------------------------------------------------------------------
#include <string>
//-----------------------------------------------------------------------------
class IShape
{
public:
    enum class ShapeColor
    {
        Black,
        Green,
        Blue,
        Yellow,
        White
    };

public:
    IShape()
        : m_ColorBorder(ShapeColor::Black),
        m_ColorIn(ShapeColor::Black),
        m_Bold(false),
        m_Italic(false),
        m_Underline(false),
        m_TextPosX(0),
        m_TextPosY(0)
    {

    }

    virtual ~IShape()
    {

    }

    virtual void draw() = 0;
    virtual void erase() = 0;
    virtual void export(const std::string& file_path) = 0;
    virtual void import(const std::string& file_path) = 0;

    //! Изменить цвет рамки фигуры
    //! \param color цвет
    void SetColorBorder(ShapeColor color)
    {
        m_ColorBorder = color;
    }

    //! Изменить цвет внутренней заливки фигуры
    //! \param color цвет
    void SetColorIn(ShapeColor color)
    {
        m_ColorIn = color;
    }

    //! Изменить текст на фигуре
    //! \param s текст
    void SetText(const std::string& s)
    {
        m_Text = s;
    }

    //! Получить текст
    //! \return возвращает текст
    const std::string& GetText() const
    {
        return m_Text;
    }

    //! Изменить шрифт текста
    //! \param font_family наименование шрифта
    void SetFontFamily(const std::string& font_family)
    {
        m_FontFamily = font_family;
    }

    //! Установить жирный шрифт
    //! \param b флаг жирности шрифта
    void SetBold(bool b)
    {
        m_Bold = b;
    }

    void SetItalic(bool b)
    {
        m_Italic = b;
    }

    void SetUnderline(bool b)
    {
        m_Underline = b;
    }

    void SetTextPos(size_t x, size_t y)
    {
        m_TextPosX = x;
        m_TextPosY = y;
    }

protected:
    ShapeColor m_ColorBorder;
    ShapeColor m_ColorIn;
    std::string m_Text;
    std::string m_FontFamily;
    bool m_Bold;
    bool m_Italic;
    bool m_Underline;
    size_t m_TextPosX;
    size_t m_TextPosY;
    // some attribute of the shape...
};
//-----------------------------------------------------------------------------
#endif
