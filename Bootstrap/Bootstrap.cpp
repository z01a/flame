#include <iostream>

#include "Bootstrap/Bootstrap.hpp"

IApplication *Bootstrap::ms_Application = nullptr;

Bootstrap *Bootstrap::ms_Instance = nullptr;

Bootstrap *GetBootstrap()
{
    return Bootstrap::GetInstance();
}

void Bootstrap::Initialize()
{
    std::cout << "[INFO] - Bootstrap is initializing..." << std::endl;
    if (!IsAppInitialized())
    {
        std::cout << "[ERROR] - Application is not initialized!" << std::endl;
    }
    else
    {
        std::cout << "[INFO] - Application is initialized!" << std::endl;
        ms_Application->OnInitialize();
    }
}

int Bootstrap::Execute(int argc, char *argv[], char *envp[])
{
    if (!IsAppInitialized())
    {
        std::cout << "[ERROR] - Application is not initialized!" << std::endl;
        return EXIT_FAILURE;
    }

    return ms_Application->Main(argc, argv, envp);
}

void Bootstrap::UnInitialize()
{
    std::cout << "[INFO] - Bootstrap is uninitializing..." << std::endl;

    if (IsAppInitialized())
    {
        ms_Application->OnUnInitialize();

        ms_Application->OnDestroy();

        delete ms_Application;
        ms_Application = nullptr;
    }
}