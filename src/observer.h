#pragma once
//-----------------------------------------------------------------------------
#include "stdafx.h"
//-----------------------------------------------------------------------------
class Observer
{
public:
    Observer() = default;
    virtual ~Observer() = default;

    virtual void Update() = 0;
};
//-----------------------------------------------------------------------------
class Observable
{
public:
    Observable() = default;
    virtual ~Observable() = default;

    void Subscribe(Observer* observer)
    {
        m_Subscribers.emplace_back(observer);
    }

    void Update()
    {
        for (const auto a : m_Subscribers)
        {
            a->Update();
        }
    }

private:
    std::vector<Observer*> m_Subscribers;
};
//-----------------------------------------------------------------------------
