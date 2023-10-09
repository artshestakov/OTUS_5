#pragma once
//-----------------------------------------------------------------------------
#include "model.h"
//-----------------------------------------------------------------------------
class Controller
{
public:
    Controller();
    ~Controller();

    void SetModel(Model* m);
    void Draw();

    void CreateDocument();
    void OpenDocument(const std::string& file_path);
    void SaveDocument(const std::string& file_path);
    void Import(const std::string& file_path);
    void Export(const std::string& file_path);

    void AddShape(IShape* shape);
    void Clear();

private:
    Model* m_Model;
};
//-----------------------------------------------------------------------------
