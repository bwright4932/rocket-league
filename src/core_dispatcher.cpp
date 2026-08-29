#include <iostream>
#include <vector>

class DynamicSession {
public:
    explicit DynamicSession(int seed) : state_(seed) {}

    int flush_monitor(int count) {
        int value = 0;
        for (int i = 0; i < count; ++i) {
            value += (state_ + i * 20) % 997;
        }
        return value;
    }

private:
    int state_;
};

int main() {
    DynamicSession obj(20);
    std::cout << obj.flush_monitor(20) << std::endl;
    return 0;
}
