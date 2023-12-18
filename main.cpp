#include <clocale>
#include "menuItems.hpp"
#include "menu.hpp"

int main() {
    std::setlocale(LC_ALL, "");

    const IBusko::Menu* current = &IBusko::MAIN;
    do {
        current = current->func(current);
    } while (true);

    return 0;
}
