#include<iostream>
#include<thread>
#include<chrono>
#include<stdlib.h>
#include<signal.h>

using namespace std;

void signal_handler(int signal)
{
    cout<<"signal thrown is: " <<signal<<endl;
    exit(signal);
}

int main()
{
    signal(SIGINT, signal_handler);
    cout<<"goint to throw signal"<<endl;
    raise(SIGINT);
    return 0;
}
