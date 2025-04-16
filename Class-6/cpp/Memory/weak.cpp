#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> sp = std::make_shared<int>(42);
    std::weak_ptr<int> wp = sp;  // weak_ptr observes sp, doesn't increase use count

    std::cout << "Use count (shared_ptr): " << sp.use_count() << std::endl;

    if (auto temp = wp.lock()) {  // try to get a shared_ptr
        std::cout << "Value: " << *temp << std::endl;
    } else {
        std::cout << "Object has been deleted." << std::endl;
    }

    sp.reset();  // deletes the memory

    if (auto temp = wp.lock()) {
        std::cout << "Value: " << *temp << std::endl;
    } else {
        std::cout << "Object has been deleted." << std::endl;
    }

    return 0;
}

/*
Example 2: Avoiding Circular Reference (❗ The Real Power)

#include <iostream>
#include <memory>

struct B;  // Forward declaration

struct A {
    std::shared_ptr<B> b_ptr;
    ~A() { std::cout << "A destroyed\n"; }
};

struct B {
    std::weak_ptr<A> a_ptr;  // weak_ptr to avoid circular reference
    ~B() { std::cout << "B destroyed\n"; }
};

int main() {
    std::shared_ptr<A> a = std::make_shared<A>();
    std::shared_ptr<B> b = std::make_shared<B>();

    a->b_ptr = b;
    b->a_ptr = a;  // no memory leak due to weak_ptr

    return 0;  // A and B both destroyed
}


*/