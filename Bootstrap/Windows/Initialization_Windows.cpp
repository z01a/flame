#include "Bootstrap/Initialization.hpp"

#include "Windows.h"

#ifdef WINDOWS_APPLICATION
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR pCmdLine, int nCmdShow)
{
    return Initialization::Main(__argc, __argv, nullptr);
}
#else
int main(int argc, char *argv[], char *envp[])
{
    return Initialization::Main(argc, argv, envp);
}
#endif