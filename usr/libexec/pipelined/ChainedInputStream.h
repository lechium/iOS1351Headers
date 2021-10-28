//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSInputStream.h>

@interface ChainedInputStream : NSInputStream
{
    struct vector<NSInputStream *, std::__1::allocator<NSInputStream *>> fStreams;	// 8 = 0x8
    unsigned long long fCurrentStream;	// 32 = 0x20
    unsigned long long fLength;	// 40 = 0x28
    _Bool fDone;	// 48 = 0x30
}

- (id).cxx_construct;	// IMP=0x000000010035d04c
- (void).cxx_destruct;	// IMP=0x000000010035cfdc
- (_Bool)_setCFClientFlags:(unsigned long long)arg1 callback:(CDUnknownFunctionPointerType)arg2 context:(CDStruct_e097db04)arg3;	// IMP=0x000000010035cfd4
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;	// IMP=0x000000010035cfd0
- (void)_scheduleInCFRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x000000010035cfcc
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;	// IMP=0x000000010035cfc4
- (unsigned long long)streamStatus;	// IMP=0x000000010035cf88
- (id)streamError;	// IMP=0x000000010035cf34
- (_Bool)hasBytesAvailable;	// IMP=0x000000010035cf1c
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x000000010035cd8c
- (void)close;	// IMP=0x000000010035cd0c
- (void)open;	// IMP=0x000000010035cce4
- (void)addStream:(pair_2b0ed7ca)arg1;	// IMP=0x000000010035cc64
- (unsigned long long)length;	// IMP=0x000000010035cc54
- (id)init;	// IMP=0x000000010035cc04

@end
