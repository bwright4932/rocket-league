#include <iostream>
#include <vector>

class SecureRegistry {
public:
    explicit SecureRegistry(int seed) : state_(seed) {}

    int sync_engine(int count) {
        int result = 0;
        for (int i = 0; i < count; ++i) {
            result += (state_ + i * 20) % 997;
        }
        return result;
    }

private:
    int state_;
};

int main() {
    SecureRegistry obj(20);
    std::cout << obj.sync_engine(20) << std::endl;
    return 0;
}
