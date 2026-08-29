#include <iostream>
#include <vector>

class SmartClient {
public:
    explicit SmartClient(int seed) : state_(seed) {}

    int load_service(int count) {
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
    SmartClient obj(48);
    std::cout << obj.load_service(48) << std::endl;
    return 0;
}
