#include "tool_for_test.h"


void TestTool_Print_Value(TestTool *self)
{
    if(self->price_one==0||self->price_two==0)
    {
        printf("Wrong : one of the price is 0\r\n");
    }else{
        printf("The price one is: %d ,  The price_two is: %d ",self->price_one,self->price_two);
    }
}


void TestTool_Generate(int one,int two,TestTool *new_one)
{
    new_one->price_one = one;
    new_one->price_two = two;   
}


void TestTool_Calculate(TestTool *a,TestTool *b)
{
    double ans_one = a->price_one / b->price_one;
    double ans_two = a->price_two / b->price_two;

    printf("The price_one of a is %.2f of b, The price_two of a is %.2f of b",ans_one,ans_two);
}