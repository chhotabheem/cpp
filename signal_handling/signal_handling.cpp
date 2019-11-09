#include<iostream>
#include<signal.h>
#include<stdlib.h>
#include<thread>
#include<chrono>
using namespace std;
void signal_handler_fn(int sig)
{
    std::cout<<"signal received is: " <<sig<<std::endl;
    this_thread::sleep_for(chrono::seconds(1));
    exit(sig);
}

int main()
{
    signal(SIGINT, signal_handler_fn);
    while(true)
    {
        this_thread::sleep_for(chrono::seconds(1));
    }
    return 0;
}
