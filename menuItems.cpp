#include "menu_functions.hpp"
#include "menuItems.hpp"


namespace {
    const IBusko::Menu* const study_children[] = {
            &IBusko::EXIT,
            &IBusko::RUWRITES
    };
    const int baza_size = sizeof(study_children) / sizeof(study_children[0]);
}


namespace {
    const IBusko::Menu* const LITERAT_children[] = {
            &IBusko::RUWRITERS_BACK,
            &IBusko::RUWRITERS_PUSHKIN,
            &IBusko::RUWRITERS_LERMONTOV,
            &IBusko::RUWRITERS_KRILOV
    }; const int WRITERS_size = sizeof(LITERAT_children) / sizeof(LITERAT_children[0]);
}

namespace {
    const IBusko::Menu* const PUSHKIN_children[] = {
            &IBusko::PUSHKIN_BACK,
            &IBusko::PUSHKIN_DYBROVSKY,
            &IBusko::PUSHKIN_ONEGIN,
            &IBusko::PUSHKIN_EVENING,
    }; const int PUSHKIN_size = sizeof(PUSHKIN_children) / sizeof(PUSHKIN_children[0]);
}


const IBusko::Menu IBusko::MAIN = {
        nullptr, IBusko::read_Rus_Literat, nullptr, study_children, baza_size
};

const IBusko::Menu IBusko::RUWRITES =
        {"1 - Русские писатели", IBusko::read_Rus_Literat, &IBusko::MAIN, LITERAT_children, WRITERS_size };
const IBusko::Menu IBusko::EXIT ={ "0 - Завершить чтение", IBusko::exit, &IBusko::MAIN };


const IBusko::Menu IBusko::RUWRITERS_BACK = {"0 - Выйти в главное меню",
                                             IBusko::go_Main_menu, &IBusko::RUWRITES };


const IBusko::Menu IBusko::RUWRITERS_PUSHKIN = {
        "1 - Читать Пушкина", IBusko::read_Pushkin, &IBusko::RUWRITES, PUSHKIN_children, PUSHKIN_size
};

const IBusko::Menu IBusko::PUSHKIN_DYBROVSKY = {"1 - Дубровский", IBusko::read_Dubrovskiy, &IBusko::RUWRITERS_PUSHKIN };
const IBusko::Menu IBusko::PUSHKIN_ONEGIN = {"2 - Евгений Онегин", IBusko::read_Onegin, &IBusko::RUWRITERS_PUSHKIN };
const IBusko::Menu IBusko::PUSHKIN_EVENING = { "3 - Зимний вечер", IBusko::read_Evening,&IBusko::RUWRITERS_PUSHKIN };
const IBusko::Menu IBusko::PUSHKIN_BACK = {"0 - Выйти в предыдущее меню", IBusko::back_to_Pushkin, &IBusko::RUWRITERS_PUSHKIN };


const IBusko::Menu IBusko::RUWRITERS_LERMONTOV = {"2 - Читать Лермонтова", IBusko::read_Lermontov, &IBusko::RUWRITES };

//TO DO RUWRITERS_LERMONTOV
const IBusko::Menu IBusko::RUWRITERS_KRILOV = {"3 - Читать Крылова", IBusko::read_Krilov, &IBusko::RUWRITES };

//TO DO RUWRITERS_KRILOV