#pragma once
#ifndef _MAINWINDOW_H_INCLUDED
#define _MAINWINDOW_H_INCLUDED
//-----------------------------------------------------------------------------
#include <string>
#include <vector>
#include <functional>
//-----------------------------------------------------------------------------
class MainWindow;
//-----------------------------------------------------------------------------
struct Button
{
    std::string Text;
    size_t Width = 25;
    size_t Height = 75;
    std::function<void(MainWindow&)> Event;
};
//-----------------------------------------------------------------------------
class MainWindow
{
public:
    MainWindow();
    ~MainWindow();

    void Show();

    void Create();
    void Import();
    void Export();
    void Exit();

private:
    std::vector<Button> m_Buttons;
};
//-----------------------------------------------------------------------------
#endif
