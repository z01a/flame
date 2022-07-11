#include "Application/Application.hpp"

#include "Bootstrap/Bootstrap.hpp"
#include "Bootstrap/Initialization.hpp"

namespace Initialization
{
    void OnInitialize()
    {
        Bootstrap::CreateApplication<Application>();
    }

    void OnUnInitialize()
    {
    }
}