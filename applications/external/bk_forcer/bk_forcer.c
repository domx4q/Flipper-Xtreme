#include <furi.h>
#include <gui/gui.h>
#include <input/input.h>
#include <stdlib.h>
#include <counter_icons.h>

typedef struct {
    FuriMessageQueue* input_queue;
    ViewPort* view_port;
    Gui* gui;
    FuriMutex** mutex;

    int length;
    char* chars;
    bool needToPressEnter;
    bool running;
    bool stopped;
} BkForcer;

// more coming soon