#include "MainWindow.h"
//-----------------------------------------------------------------------------
MainWindow::MainWindow()
{
    Button btn_Create;
    btn_Create.Text = "&Create";
    btn_Create.Event = &MainWindow::Create;
    m_Buttons.emplace_back(std::move(btn_Create));

    Button btn_Import;
    btn_Import.Text = "&Import";
    btn_Import.Event = &MainWindow::Import;
    m_Buttons.emplace_back(std::move(btn_Import));

    Button btn_Export;
    btn_Export.Text = "&Export";
    btn_Export.Event = &MainWindow::Export;
    m_Buttons.emplace_back(std::move(btn_Export));

    Button btn_Exit;
    btn_Exit.Text = "E&xit";
    btn_Exit.Event = &MainWindow::Exit;
    m_Buttons.emplace_back(std::move(btn_Exit));
}
//-----------------------------------------------------------------------------
MainWindow::~MainWindow()
{

}
//-----------------------------------------------------------------------------
void MainWindow::Show()
{

}
//-----------------------------------------------------------------------------
void MainWindow::Create()
{

}
//-----------------------------------------------------------------------------
void MainWindow::Import()
{

}
//-----------------------------------------------------------------------------
void MainWindow::Export()
{

}
//-----------------------------------------------------------------------------
void MainWindow::Exit()
{

}
//-----------------------------------------------------------------------------
