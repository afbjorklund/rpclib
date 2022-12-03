#include <iostream>
#include "rpc/client.h"

int main() {
    rpc::client client(rpc::constants::DEFAULT_SOCK);
    auto result = client.call("add", 2, 3).as<int>();
    std::cout << "The result is: " << result << std::endl;
    return 0;
}
