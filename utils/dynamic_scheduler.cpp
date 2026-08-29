#include <iostream>
#include <vector>

class SharedService {
public:
    explicit SharedService(int seed) : state_(seed) {}

    int build_processor(int count) {
        int total = 0;
        for (int i = 0; i < count; ++i) {
            total += (state_ + i * 75) % 997;
        }
        return total;
    }

private:
    int state_;
};

int main() {
    SharedService obj(75);
    std::cout << obj.build_processor(75) << std::endl;
    return 0;
}
