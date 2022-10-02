#include <iostream>

int f(void)
{
    int i = 0;
    char arr[20];
    int size = sizeof(arr[i++]); //wrong: sizeof expression has side effect
    std::cout << i; //would output 0 instead of 1
}

int main(int argc, char** argv)
{
    std::cout << "Hello World" << std::endl;
    f();
    return 0;
}
