#include <iostream>
#include <app.h>

int main(int argc, char* argv[])
{
    std::cout << "This is simp.gemma.cpp, a LLM inference engine for my computer(intel cpu and gpu with unified memory)" << std::endl;
    app::run(argc, argv);
    return 0;
}
