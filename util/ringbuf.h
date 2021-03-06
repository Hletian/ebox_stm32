/*
file   : ringbuf.cpp
author : shentq
version: V1.0
date   : 2016/1/28

Copyright 2015 shentq. All Rights Reserved.

Copyright Notice
No part of this software may be used for any commercial activities by any form or means, without the prior written consent of shentq.

Disclaimer
This specification is preliminary and is subject to change at any time without notice. shentq assumes no responsibility for any errors contained herein.
*/


#ifndef __RING_H
#define __RING_H
/**
使用方法：
用户创建一个自定义的unsigned char/uint8_t类型的缓冲区.例如：uint8_t buf[512];
使用RINGBUF ringbuf(buf,512);创建一个对象；
用户可以调用ringbuf.write(c);填入数据；返回true成功。
调用ringbuf.available()。可获得缓冲区可用数据的长度，0表示空；
如果不为空，可以调用ringbuf.read()读取一个字节，
也可以调用ringbuf.read(userbuf,length);将读取特定长度的数据，输出到userbuf中。
*/
class RINGBUF
{

 
    public:
    RINGBUF(unsigned char *buf,int lenght);
    bool write(unsigned char c);
    unsigned char read(void);
    int read(unsigned char *buf,int lenght);
    int available();
    void clear();
    
    private:
    int head;
    int tail;
    int num;
    int max;
    unsigned char *buf;

    
    
    
    
};
#endif
