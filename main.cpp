#include <iostream>
#include <phepnhan.h>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    phepnhan nhan(1985, 1990);
    std::cout << "anh yeu em:" << nhan.get() << std::endl;
    std::cout << "__builtin_extract_return_addr(__builtin_return_address(0)): "
              << __builtin_extract_return_addr(__builtin_return_address(0))
              << &std::endl;
    std::cout << "__builtin_return_address(0): " << __builtin_return_address(0)
              << &std::endl;
    return 0;
}
