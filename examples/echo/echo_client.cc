#include "rpc/client.h"

#include <iostream>

int main() {
    rpc::client c(rpc::constants::DEFAULT_SOCK);

    std::string text;
    while (std::getline(std::cin, text)) {
        if (!text.empty()) {
            std::string result(c.call("echo", text).as<std::string>());
            std::cout << "> " <<  result << std::endl;
        }
    }
}
