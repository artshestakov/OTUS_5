#include "model.h"
//-----------------------------------------------------------------------------
Model::Model()
{
    
}
//-----------------------------------------------------------------------------
Model::~Model()
{
    Clear(false);
}
//-----------------------------------------------------------------------------
void Model::Draw()
{
    for (auto a : m_Shapes)
    {
        a->draw();
    }
}
//-----------------------------------------------------------------------------
void Model::Open(const std::string& file_path)
{
    (void)file_path;
    Update();
}
//-----------------------------------------------------------------------------
void Model::Save(const std::string& file_path)
{
    (void)file_path;
    Update();
}
//-----------------------------------------------------------------------------
void Model::Import(const std::string& file_path)
{
    (void)file_path;
    Update();
}
//-----------------------------------------------------------------------------
void Model::Export(const std::string& file_path)
{
    (void)file_path;
    Update();
}
//-----------------------------------------------------------------------------
void Model::AddShape(IShape* shape)
{
    m_Shapes.emplace_back(shape);
    Update();
}
//-----------------------------------------------------------------------------
void Model::EraseShape(IShape* shape)
{
    auto a = std::find(m_Shapes.begin(), m_Shapes.end(), shape);
    if (a != m_Shapes.end())
    {
        m_Shapes.erase(a);
    }

    Update();
}
//-----------------------------------------------------------------------------
void Model::Clear(bool need_to_update)
{
    for (auto a : m_Shapes)
    {
        delete a;
    }
    m_Shapes.clear();

    if (need_to_update)
    {
        Update();
    }
}
//-----------------------------------------------------------------------------
