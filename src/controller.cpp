#include "controller.h"
//-----------------------------------------------------------------------------
Controller::Controller()
    : m_Model(nullptr)
{
    
}
//-----------------------------------------------------------------------------
Controller::~Controller()
{

}
//-----------------------------------------------------------------------------
void Controller::SetModel(Model* m)
{
    m_Model = m;
}
//-----------------------------------------------------------------------------
void Controller::Draw()
{
    m_Model->Draw();
}
//-----------------------------------------------------------------------------
void Controller::CreateDocument()
{
    if (!m_Model)
    {
        m_Model = new Model();
    }
}
//-----------------------------------------------------------------------------
void Controller::OpenDocument(const std::string& file_path)
{
    m_Model->Open(file_path);
}
//-----------------------------------------------------------------------------
void Controller::SaveDocument(const std::string& file_path)
{
    m_Model->Save(file_path);
}
//-----------------------------------------------------------------------------
void Controller::Import(const std::string& file_path)
{
    m_Model->Import(file_path);
}
//-----------------------------------------------------------------------------
void Controller::Export(const std::string& file_path)
{
    m_Model->Export(file_path);
}
//-----------------------------------------------------------------------------
void Controller::AddShape(IShape* shape)
{
    m_Model->AddShape(shape);
}
//-----------------------------------------------------------------------------
void Controller::Clear()
{
    m_Model->Clear();
}
//-----------------------------------------------------------------------------
