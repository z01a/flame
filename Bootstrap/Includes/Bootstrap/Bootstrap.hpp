#pragma once

#include <iostream>

#include "Interfaces/Application/IApplication.hpp"

class Bootstrap
{
public:
    static Bootstrap *GetInstance()
    {
        if (ms_Instance == nullptr)
        {
            ms_Instance = new Bootstrap();
        }

        return ms_Instance;
    }

    ~Bootstrap() = default;

    static bool IsAppInitialized()
    {
        return (ms_Application != nullptr);
    }

    template <class Application>
    static void CreateApplication()
    {
        if (IsAppInitialized())
        {
            // Application is already initialized
            return;
        }

        if (ms_Application = new Application())
        {
            ms_Application->OnCreate();
        }
    }

    IApplication *GetApplication()
    {
        return ms_Application;
    }

    void Initialize();

    int Execute(int argc, char *argv[], char *envp[]);

    void UnInitialize();

private:
    Bootstrap() = default;

private:
    static Bootstrap *ms_Instance;

    static IApplication *ms_Application;
};

extern "C" Bootstrap *GetBootstrap();