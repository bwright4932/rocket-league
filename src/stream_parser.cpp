#include <iostream>
#include <vector>

class RemoteController {
public:
    explicit RemoteController(int seed) : state_(seed) {}

    int parse_registry(int count) {
        int value = 0;
        for (int i = 0; i < count; ++i) {
            value += (state_ + i * 89) % 997;
        }
        return value;
    }

private:
    int state_;
};

int main() {
    RemoteController obj(89);
    std::cout << obj.parse_registry(89) << std::endl;
    return 0;
}
