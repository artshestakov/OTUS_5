#include "MainWindow.h"
//-----------------------------------------------------------------------------
int main()
{
    MainWindow w;

    Model model;
    model.Subscribe(&w);

    Controller controller;
    controller.SetModel(&model);

    w.SetController(&controller);

    w.Show();
    return 0;
}
//-----------------------------------------------------------------------------
