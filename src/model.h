#pragma once
//-----------------------------------------------------------------------------
#include "ishape.h"
#include "observer.h"
//-----------------------------------------------------------------------------
class Model : public Observable
{
public:
    Model();
    ~Model();

    void Draw();

    void Open(const std::string& file_path);
    void Save(const std::string& file_path);
    void Import(const std::string& file_path);
    void Export(const std::string& file_path);

    void AddShape(IShape* shape);
    void EraseShape(IShape* shape);
    void Clear(bool need_to_update = true);

private:
    std::vector<IShape*> m_Shapes;
};
//-----------------------------------------------------------------------------
