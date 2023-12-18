#pragma once
#include "menu.hpp"

namespace IBusko {
    const Menu* read_Rus_Literat(const Menu* current);

    const Menu* exit(const Menu* current);

    const Menu* read_Pushkin(const Menu* current);
    const Menu* read_Lermontov(const Menu* current);
    const Menu* read_Krilov(const Menu* current);

    const Menu* go_Main_menu(const Menu* current);

    const Menu* read_Dubrovskiy(const Menu* current);
    const Menu* read_Onegin(const Menu* current);
    const Menu* read_Evening(const Menu* current);

    const Menu* back_to_Pushkin(const Menu* current);
}