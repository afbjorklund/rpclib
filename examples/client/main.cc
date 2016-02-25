#include <iostream>
#include "callme/client.h"

int main() {
    callme::client client("127.0.0.1", 8080);
    auto result = client.call("add", 2, 3).as<int>();
    std::cout << "The result is: " << result << std::endl;
    return 0;
}