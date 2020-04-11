// -----------------------------------------------------------------------------
// sys.c - MPF - 10/2013
// -----------------------------------------------------------------------------

// includes
#include "hal/halinc.h"
#include "wrapper.h"

// module structure
struct sys_struct {
    void (*handler)(void);
} sys;

// -----------------------------------------------------------------------------
// systick init
// -----------------------------------------------------------------------------
int32_t sys_tick_init(uint32_t frequency, void (*handler)(void)){
    // register handler
    sys.handler = handler;
    // return with no error
    return 0;
}

// -----------------------------------------------------------------------------
// reset
// -----------------------------------------------------------------------------
void sys_reset(void){

}

// -----------------------------------------------------------------------------
// systick handler
// -----------------------------------------------------------------------------
void sys_tick_handler(void){
    // call handler
    if (sys.handler!=0) sys.handler();
}

// -----------------------------------------------------------------------------
// tick get
// -----------------------------------------------------------------------------
uint32_t sys_tick_get(void){
    return 0;
}

// -----------------------------------------------------------------------------
// global interrupt enable
// -----------------------------------------------------------------------------
void sys_enable_interrupts(void){

}

// -----------------------------------------------------------------------------
// global interrupt disable
// -----------------------------------------------------------------------------
void sys_disable_interrupts(void){

}

