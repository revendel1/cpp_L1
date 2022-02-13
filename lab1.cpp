#include <iostream>
#include <string>
#include <list>
#include <memory>

using namespace std;

struct Store {
    string  name_of_app;
    string  category;
    double   cost;
    int     size_of_app;
    int     number_of_install;
    double   mark;
};

int main() {
    list<unique_ptr<Store>> a;
        a.push_back(make_unique<Store>(Store {"Telegram", "Связь", 0, 59000000, 523812746, 4.4}));
        a.push_back(make_unique<Store>(Store {"Госуслуги", "Инструменты", 0, 82000000, 52198347, 4.6}));
        a.push_back(make_unique<Store>(Store {"ZOOM", "Бизнес", 0, 158000000, 589234714, 4.0}));

    for(const auto &o : a)
        cout << o->name_of_app << ' ' <<  o->category << ' ' << o->cost << ' ' << o->size_of_app << ' ' << o->number_of_install << ' ' << o->mark << endl;

    return 0;
}