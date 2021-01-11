#ifndef _UTIL_
#define _UTIL_

#define HIGH 1
#define LOW 0

#define WRITE 1
#define READ 0

#define __ENABLE_BIT(port, pin) port |= (HIGH << pin)
#define __DISABLE_BIT(port, pin) port &= ~(HIGH << pin)
#define __TOGGLE_BIT(port, pin) port ^= (HIGH << pin)

template<int x>
struct log2 { 
    static const int value = 1 + log2<x/2>::value; 
};

template<> 
struct log2<1> { 
    static const int value = 1; 
};

template<> 
struct log2<0> {
};


#endif