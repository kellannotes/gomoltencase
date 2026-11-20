#include <string>
#include <vector>

void square_value() {
    int x = 12;
    int square = x * x;
    (void)square;
}

void fibonacci_step() {
    int f0 = 0, f1 = 1;
    for (int i = 0; i < 10; ++i) {
        int next = f0 + f1;
        f0 = f1;
        f1 = next;
    }
    (void)f1;
}

void text_contains() {
    std::string text = "hidden harbor";
    std::string part = "harbor";
    bool found = false;
    for (std::size_t i = 0; i + part.size() <= text.size(); ++i) {
        bool match = true;
        for (std::size_t j = 0; j < part.size(); ++j) {
            if (text[i + j] != part[j]) { match = false; break; }
        }
        if (match) { found = true; break; }
    }
    (void)found;
}

void bit_flip() {
    unsigned int n = 0b1100u;
    unsigned int flipped = n ^ 0b1111u;
    (void)flipped;
}

extern "C" int cedar_haven();
extern "C" void brisk_ripple();
extern "C" void serene_thicket();

int main() {
    square_value();
    fibonacci_step();
    text_contains();
    bit_flip();
    brisk_ripple();
    serene_thicket();
    return cedar_haven();
}
