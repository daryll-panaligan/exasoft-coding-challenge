
/*
4. Please implement a class CShell that will be used as follows. What does pShell point to after
CShell::destroy() is called?
*/
#include <cstdlib>

class CShell
{
private:
    void *operator new(size_t);
    void operator delete(void *);

    static void *sp_instance;

public:
    static CShell *create()
    {
        sp_instance = malloc(sizeof(CShell));
        return (CShell *)sp_instance;
    };

    static void destroy()
    {
        delete sp_instance;
    };
};

void *CShell::sp_instance = nullptr;

int main()
{
    // CShell *pShell = new CShell;       // should be disallowed by compiler

    CShell *pShell = CShell::create(); // should do what above does

    // do stuff with pShell...
    // delete pShell; // should be disallowed by compiler
    CShell::destroy(); // should deallocate memory allocated in create call

    // ANSWER: pShell points to an invalid memory location (since it has been de-allocated in `CShell::destroy`)
}
