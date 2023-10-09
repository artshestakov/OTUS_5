#include "MainWindow.h"
#include "square.h"
//-----------------------------------------------------------------------------
MainWindow::MainWindow()
    : Observer(),
    m_Controller(nullptr)
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
void MainWindow::SetController(Controller* c)
{
    m_Controller = c;
}
//-----------------------------------------------------------------------------
void MainWindow::Show()
{
    //For example: it will be the green square with a bold text...

    Square* square = new Square(25, 25);
    square->SetColorBorder(IShape::ShapeColor::Green);
    square->SetColorIn(IShape::ShapeColor::Green);
    square->SetText("Some text");
    square->SetBold(true);
    m_Controller->AddShape(square);
}
//-----------------------------------------------------------------------------
void MainWindow::Create()
{
    if (!m_Controller)
    {
        m_Controller = new Controller();
    }
    m_Controller->CreateDocument();
}
//-----------------------------------------------------------------------------
void MainWindow::Import()
{
    m_Controller->Import(std::string());
}
//-----------------------------------------------------------------------------
void MainWindow::Export()
{
    m_Controller->Export(std::string());
}
//-----------------------------------------------------------------------------
void MainWindow::Exit()
{
    std::exit(0);
}
//-----------------------------------------------------------------------------
void MainWindow::Update()
{
    m_Controller->Draw();
}
//-----------------------------------------------------------------------------
