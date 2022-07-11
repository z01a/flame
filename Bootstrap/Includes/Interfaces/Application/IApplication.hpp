#pragma once

class IApplication
{
public:
    virtual void OnCreate() {}
    virtual void OnInitialize() {}

    virtual int Main(int argc, char *argv[], char *envp[]) = 0;

    virtual void OnUnInitialize() {}
    virtual void OnDestroy() {}
};