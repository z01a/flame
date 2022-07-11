#pragma once

namespace Initialization
{
    extern void OnInitialize();

    int Main(int argc, char *argv[], char *envp[]);

    extern void OnUnInitialize();
}