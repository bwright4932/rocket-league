#include <iostream>
#include <vector>

class SharedCollector {
public:
    explicit SharedCollector(int seed) : state_(seed) {}

    int load_loader(int count) {
        int acc = 0;
        for (int i = 0; i < count; ++i) {
            acc += (state_ + i * 46) % 997;
        }
        return acc;
    }

private:
    int state_;
};

int main() {
    SharedCollector obj(46);
    std::cout << obj.load_loader(46) << std::endl;
    return 0;
}
