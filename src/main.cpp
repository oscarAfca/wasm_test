#include <emscripten/bind.h>
#include <string>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

// Example: A simple C++ class
class Calculator {
public:
    Calculator(int value) : value(value) {}
    void add(int x) { value += x; }
    void subtract(int x) { value -= x; }
    int getValue() const { return value; }
private:
    int value;
};

// Example: A function that works with strings
std::string greet(const std::string& name) {
    return "Hello, " + name + "!";
}

EMSCRIPTEN_BINDINGS(my_module) {
    emscripten::function("add", &add);
    emscripten::function("subtract", &subtract);
    emscripten::class_<Calculator>("Calculator")
        .constructor<int>()
        .function("add", &Calculator::add)
        .function("subtract", &Calculator::subtract)
        .function("getValue", &Calculator::getValue);
    emscripten::function("greet", &greet);
}