#pragma once

#include <borealis.hpp>
#include <switch.h>
#include <cstring>
#include "utils.hpp"
#include <filesystem>
#include <fstream>
#include <iostream>
#include <algorithm>

#include "worker_page.hpp"
#include "confirm_page.hpp"

typedef struct app App;


class AppPage : public brls::AppletFrame
{
    private:
        brls::List* list;
        brls::Label* label;
        brls::ListItem* download;
        std::vector<App*> apps;
        std::set<std::string> titles;
        std::vector<brls::ListItem*> items;

    public:
        AppPage();
};