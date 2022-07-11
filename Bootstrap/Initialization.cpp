#include "Bootstrap/Bootstrap.hpp"
#include "Bootstrap/Initialization.hpp"

namespace Initialization
{
    int Main(int argc, char *argv[], char *envp[])
    {
        Bootstrap *bootstrap = GetBootstrap();

        OnInitialize();
        bootstrap->Initialize();

        int status = bootstrap->Execute(argc, argv, envp);

        bootstrap->UnInitialize();
        OnUnInitialize();

        return status;
    }
}