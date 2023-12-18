#include "menu_functions.hpp"
#include <iostream>

const IBusko::Menu* IBusko::go_Main_menu(const IBusko::Menu *current) {
    return current->parent->parent;
}

const IBusko::Menu* IBusko::read_Rus_Literat(const IBusko::Menu *current) {
    std::cout << "Читалка" << std::endl;
    for (int i = 1; i < current->children_count; ++i) {
        std::cout << current->children[i]->title << std::endl;
    }
    std::cout << current->children[0]->title << std::endl;
    std::cout << "Писатели>>";

    int user_input;
    std::cin >> user_input;
    std::cout << std::endl;
    if(user_input >= 0 && user_input < current->children_count) {
        std::cout << std::endl;
        return current->children[user_input];
    }
    else {
        std::cout << "Неправильной ввод введите нормально" << std::endl;
        return current;
    }
}
const IBusko::Menu* IBusko::exit(const IBusko::Menu* current) {
    std::exit(0);
}

const IBusko::Menu* IBusko::read_Pushkin(const IBusko::Menu* current) {
    for (int i = 1; i < current->children_count; i++) {
        std::cout << current->children[i]->title << std::endl;
    }
    std::cout << current->children[0]->title << std::endl;

    int user_input;
    std::cin >> user_input;
    std::cout << std::endl;


    if(user_input >= 0 && user_input < current->children_count) {
        std::cout << std::endl;
        return current->children[user_input];
    }
    else {
        std::cout << "Неправильной ввод введите нормально" << std::endl;
        return current;
    }

}

const IBusko::Menu* IBusko::read_Lermontov(const IBusko::Menu* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;

}

const IBusko::Menu* IBusko::read_Krilov(const IBusko::Menu* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}



const IBusko::Menu* IBusko::read_Dubrovskiy(const IBusko::Menu* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const  IBusko::Menu* IBusko::read_Onegin(const IBusko::Menu* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}
const IBusko::Menu* IBusko::read_Evening(const IBusko::Menu* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const IBusko::Menu* IBusko::back_to_Pushkin(const IBusko::Menu* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent->parent;
}
