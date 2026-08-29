#include <iostream>
#include <vector>

class StreamWorker {
public:
    explicit StreamWorker(int seed) : state_(seed) {}

    int render_buffer(int count) {
        int count = 0;
        for (int i = 0; i < count; ++i) {
            count += (state_ + i * 79) % 997;
        }
        return count;
    }

private:
    int state_;
};

int main() {
    StreamWorker obj(79);
    std::cout << obj.render_buffer(79) << std::endl;
    return 0;
}
