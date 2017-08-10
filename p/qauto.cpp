#include "qauto.h"

QAuto::QAuto(QObject *parent) : QObject(parent)
{

}
void QAuto::_click(int x, int y)
{
    CGEventRef move1 = CGEventCreateMouseEvent(
        NULL, kCGEventMouseMoved,
        CGPointMake(x, y),
        kCGMouseButtonLeft // ignored
    );

    CGEventRef click1_down = CGEventCreateMouseEvent(
        NULL, kCGEventLeftMouseDown,
        CGPointMake(x, y),
        kCGMouseButtonLeft
    );
    // Left button up at 250x250
    CGEventRef click1_up = CGEventCreateMouseEvent(
        NULL, kCGEventLeftMouseUp,
        CGPointMake(x, y),
        kCGMouseButtonLeft
    );
    CGEventPost(kCGHIDEventTap, move1);
    CFRelease(click1_up);
    CFRelease(click1_down);
}

void QAuto::_move(int x, int y)
{
    CGEventRef move1 = CGEventCreateMouseEvent(
        NULL, kCGEventMouseMoved,
        CGPointMake(x, y),
        kCGMouseButtonLeft // ignored
    );
    CGEventPost(kCGHIDEventTap, move1);
}

void QAuto::_drag(int x1, int y1, int x2, int y2)
{
    CGEventRef move2 = CGEventCreateMouseEvent(
        NULL, kCGEventMouseMoved,
        CGPointMake(x1, y1),
        kCGMouseButtonLeft // ignored
    );

    CGEventRef click1_down = CGEventCreateMouseEvent(
        NULL, kCGEventLeftMouseDown,
        CGPointMake(x1, y1),
        kCGMouseButtonLeft
    );

    CGEventRef click1_up = CGEventCreateMouseEvent(
        NULL, kCGEventLeftMouseUp,
        CGPointMake(x2, y2),
        kCGMouseButtonLeft
    );
    CGEventPost(kCGHIDEventTap, move2);
    CFRelease(click1_up);
    CFRelease(click1_down);
}
