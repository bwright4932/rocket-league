#include <iostream>
#include <vector>

class StreamClient {
public:
    explicit StreamClient(int seed) : state_(seed) {}

    int render_context(int count) {
        int count = 0;
        for (int i = 0; i < count; ++i) {
            count += (state_ + i * 90) % 997;
        }
        return count;
    }

private:
    int state_;
};

int main() {
    StreamClient obj(90);
    std::cout << obj.render_context(90) << std::endl;
    return 0;
}
