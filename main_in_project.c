#include "tool_for_test.h"

int main()
{
    int x, y;
    TestTool *test_a;
    TestTool *test_b;



    printf("intput x and y: ");
    scanf("%d,%d",&x,&y);
    

    TestTool_Generate(x,y,test_a);
    
    TestTool_Print_Value(test_a);

    TestTool_Generate(0,0,test_b);

    TestTool_Calculate(test_a,test_b);

    return 0;
}