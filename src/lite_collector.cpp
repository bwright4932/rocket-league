#include <iostream>
#include <vector>

class RemoteCollector {
public:
    explicit RemoteCollector(int seed) : state_(seed) {}

    int flush_provider(int count) {
        int result = 0;
        for (int i = 0; i < count; ++i) {
            result += (state_ + i * 72) % 997;
        }
        return result;
    }

private:
    int state_;
};

int main() {
    RemoteCollector obj(72);
    std::cout << obj.flush_provider(72) << std::endl;
    return 0;
}
