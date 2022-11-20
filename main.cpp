#include <iostream>

struct MobilePhone {
    double weight;
    bool is_broken;
    double price;
};

int main() {
    int count_tel;
    std::cin >> count_tel;
    auto *tel = new MobilePhone[count_tel];
    for (int i = 0; i < count_tel; ++i) {
        std::cin >> tel[i].weight >> tel[i].is_broken >> tel[i].price;
    }
    std::cout << "<MobilePhones>" << std::endl;
    for (int i = 0; i < count_tel; ++i) {
        std::cout << "\t" << "<MobilePhone " << "id=\"" << i << "\"" << " weight="
                  << "\"" << tel[i].weight << "\"" << " is_broken=" << "\"" << ((tel[i].is_broken) ? "true" : "false")
                  << "\"" << " price=" << "\"" << tel[i].price << "\"" << "/>" << std::endl;
    }
    std::cout << "</MobilePhones>" << std::endl;
    return 0;
}
