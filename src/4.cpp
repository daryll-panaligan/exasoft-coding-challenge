
/*
4. Please implement a class CShell that will be used as follows. What does pShell point to after
CShell::destroy() is called?
*/

void main()
{
    CShell *pShell = new CShell;       // should be disallowed by compiler
    CShell *pShell = CShell::create(); // should do what above does

    // do stuff with pShell...
    delete pShell;     // should be disallowed by compiler
    CShell::destroy(); // should deallocate memory allocated in create call
}
