#pragma once

#include "Interfaces/Application/IApplication.hpp"

// TODO: Move this to some other header to keep everything uniform
#include <iostream>

class Application : public IApplication
{
public:
    void OnCreate() override
    {
        std::cout << "[INFO] - Application Created" << std::endl;
    }

    void OnInitialize() override
    {
        std::cout << "[INFO] - Application Initialized" << std::endl;
    }

    int Main(int argc, char *argv[], char *envp[]) override;

    void OnUnInitialize() override
    {
        std::cout << "[INFO] - Application UnInitialized" << std::endl;
    }

    void OnDestroy() override
    {
        std::cout << "[INFO] - Application Destroyed" << std::endl;
    }
};