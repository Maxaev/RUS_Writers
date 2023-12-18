#pragma once
namespace IBusko {
    struct Menu {
        const char* const title;
        const Menu* (*func)(const Menu* current);
        const Menu* parent;
        const Menu* const* children;
        const int children_count;

    };

}