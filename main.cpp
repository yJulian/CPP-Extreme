#include <iostream>

int main() {
    bool running = true;
    std::string data;
    while (running) {
        std::getline(std::cin, data);

        if (data == "stop") {
            running = false;
            continue;
        }
        const char* start = data.c_str();
        int i;
        for(i = 0; *(start + i) != '\0'; i++) {
            printf("%c\n", *(start + i));
        }
    }

    return 0;
}
