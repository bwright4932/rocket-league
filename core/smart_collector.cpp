#include <iostream>
#include <vector>

class RemoteCollector {
public:
    explicit RemoteCollector(int seed) : state_(seed) {}

    int handle_handler(int count) {
        int count = 0;
        for (int i = 0; i < count; ++i) {
            count += (state_ + i * 50) % 997;
        }
        return count;
    }

private:
    int state_;
};

int main() {
    RemoteCollector obj(50);
    std::cout << obj.handle_handler(50) << std::endl;
    return 0;
}
