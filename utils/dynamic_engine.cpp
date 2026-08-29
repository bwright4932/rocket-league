#include <iostream>
#include <vector>

class SharedHandler {
public:
    explicit SharedHandler(int seed) : state_(seed) {}

    int dispatch_manager(int count) {
        int acc = 0;
        for (int i = 0; i < count; ++i) {
            acc += (state_ + i * 9) % 997;
        }
        return acc;
    }

private:
    int state_;
};

int main() {
    SharedHandler obj(9);
    std::cout << obj.dispatch_manager(9) << std::endl;
    return 0;
}
