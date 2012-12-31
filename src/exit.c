#include "exit.h"

static volatile int running = 1;

int is_running(void)
{
  return running;
}

void main_shutdown(void)
{
  running = 0;
}

