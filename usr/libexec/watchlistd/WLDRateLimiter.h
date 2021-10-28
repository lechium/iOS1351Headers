//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface WLDRateLimiter : NSObject
{
    unsigned long long _rate;	// 8 = 0x8
    unsigned long long _burst;	// 16 = 0x10
    unsigned long long _tokens;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_timer;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_accessQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100018038
- (_Bool)_claimToken;	// IMP=0x0000000100017f80
- (void)_addToken;	// IMP=0x0000000100017f0c
@property unsigned long long burst;
@property unsigned long long rate;
- (_Bool)doOperation;	// IMP=0x0000000100017cb0
- (id)initWithRate:(unsigned long long)arg1 burst:(unsigned long long)arg2;	// IMP=0x0000000100017b38
- (id)init;	// IMP=0x0000000100017aec

@end
