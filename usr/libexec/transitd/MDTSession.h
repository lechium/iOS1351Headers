//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class Copier;

@interface MDTSession : NSObject
{
    unsigned int _server;	// 8 = 0x8
    unsigned int _client;	// 12 = 0xc
    int _pid;	// 16 = 0x10
    _Bool _valid;	// 20 = 0x14
    Copier *_copier;	// 24 = 0x18
}

+ (long long)sessionCount;	// IMP=0x0000000100005c1c
+ (void)removeSession:(id)arg1;	// IMP=0x0000000100005b88
+ (id)sessionWithServerPort:(unsigned int)arg1 clientPort:(unsigned int)arg2 pid:(int)arg3;	// IMP=0x0000000100005adc
+ (id)lookupSessionForPort:(unsigned int)arg1;	// IMP=0x0000000100005a78
+ (void)initialize;	// IMP=0x0000000100005a34
- (void)returnStatusWithDestURL:(id)arg1 error:(id)arg2;	// IMP=0x0000000100005db0
- (unsigned int)serverPort;	// IMP=0x0000000100005da8
- (unsigned int)clientPort;	// IMP=0x0000000100005da0
- (void)invalidate;	// IMP=0x0000000100005d2c
- (void)finalize;	// IMP=0x0000000100005ce0
- (void)dealloc;	// IMP=0x0000000100005c88
- (id)initWithServerPort:(unsigned int)arg1 clientPort:(unsigned int)arg2 pid:(int)arg3;	// IMP=0x0000000100005c28

@end

