#include <stdio.h>
typedef struct tool_for_test
{
    int price_one;

    int price_two;

}TestTool;
void TestTool_Print_Value(TestTool *self);
void TestTool_Calculate(TestTool *a,TestTool *b);
void TestTool_Generate(int one, int two, TestTool *new_one);
