#pragma once
//-----------------------------------------------------------------------------
#include "controller.h"
#include "observer.h"
//-----------------------------------------------------------------------------
class MainWindow : public Observer
{
private:
    struct Button
    {
        std::string Text;
        size_t Width = 25;
        size_t Height = 75;
        std::function<void(MainWindow&)> Event;
    };

public:
    MainWindow();
    ~MainWindow();

    void SetController(Controller* c);
    void Show();

private:
    void Create();
    void Import();
    void Export();
    void Exit();
    void Update() override;

private:
    std::vector<Button> m_Buttons;
    Controller* m_Controller;
};
//-----------------------------------------------------------------------------
