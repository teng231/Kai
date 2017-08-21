#ifndef TIMER_H
#define TIMER_H
#include <ctime>
// code at: https://stackoverflow.com/questions/10653611/c-setting-speed-of-while-loop-per-second
class Timer {
    private:
        unsigned long startTime;
    public:
        void start() {
            startTime = clock();
        }

        unsigned long elapsedTime() {
            return ((unsigned long) clock() - startTime) / CLOCKS_PER_SEC;
        }

        bool isTimeout(unsigned long seconds) {
            return seconds >= elapsedTime();
        }
};
#endif // TIMER_H
