#include <stdio.h>

extern void func1(void);
extern void func2(void);

int main(void)
{
    func1();
    func2();
    return 0;
}