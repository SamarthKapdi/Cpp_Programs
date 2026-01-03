// Advanced Concepts: smart pointers and simple thread example
#include <iostream>
#include <memory>
#include <thread>

void threadFunc(){ std::cout<<"Hello from thread\n"; }

int main(){
    // smart pointers
    auto up = std::make_unique<int>(42);
    std::cout<<"unique_ptr value: "<<*up<<'\n';
    auto sp = std::make_shared<int>(100);
    std::cout<<"shared_ptr use_count: "<<sp.use_count()<<'\n';

    // thread
    std::thread t(threadFunc);
    t.join();
    return 0;
}
