#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;
int counter1 = 0;
int counter2 = 0;

void increment1() {
    for (int i = 0; i < 1000; ++i) {
        std::lock_guard<std::mutex> lock(mtx);
        ++counter1;
    }
}

void increment2() {
    for (int i = 0; i < 1000; ++i) {
        std::lock_guard<std::mutex> lock(mtx);
        ++counter2;
    }
}

int main() {
    std::thread t1(increment1);
    std::thread t2(increment2);
    t1.join();
    t2.join();
    std::cout << "Final counter = " << counter1 << std::endl;
    std::cout << "Final counter = " << counter2 << std::endl;

}
