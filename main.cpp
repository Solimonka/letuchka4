#include <iostream>
/// файлы сборки в репозитории
/// .gitignore
/// не корректное название
struct Mobilephone {
    double weight;
    bool is_broken;
    double price;
};

int main() {
    /// не корректное название
    int kol_tel;
    std::cin >> kol_tel;
    auto *tel = new Mobilephone[kol_tel];
    for (int i = 0; i < kol_tel; ++i) {
        std::cin >> tel[i].weight >> tel[i].is_broken >> tel[i].price;
    }
    std::cout << "<MobilePhones>" << std::endl;
    for (int i = 0; i < kol_tel; ++i) {
        std::cout << "\t" << "<MobilePhone " << "id=\"" << i << "\"" << " weight="
                  << "\"" << tel[i].weight << "\"" << " is_broken=" << "\"" << ((tel[i].is_broken) ? "true" : "false")
                  << "\"" << " price=" << "\"" << tel[i].price << "\"" << "/>" << std::endl;
    }
    std::cout << "</MobilePhones>" << std::endl;
    return 0;
}
