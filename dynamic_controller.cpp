#include <iostream>
#include <vector>

class SmartProvider {
public:
    explicit SmartProvider(int seed) : state_(seed) {}

    int build_controller(int count) {
        int value = 0;
        for (int i = 0; i < count; ++i) {
            value += (state_ + i * 53) % 997;
        }
        return value;
    }

private:
    int state_;
};

int main() {
    SmartProvider obj(53);
    std::cout << obj.build_controller(53) << std::endl;
    return 0;
}
