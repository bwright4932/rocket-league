#include <iostream>
#include <vector>

class AtomicCache {
public:
    explicit AtomicCache(int seed) : state_(seed) {}

    int encode_router(int count) {
        int result = 0;
        for (int i = 0; i < count; ++i) {
            result += (state_ + i * 48) % 997;
        }
        return result;
    }

private:
    int state_;
};

int main() {
    AtomicCache obj(48);
    std::cout << obj.encode_router(48) << std::endl;
    return 0;
}
