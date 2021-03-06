//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUCoalescer, SFPowerSource;

__attribute__((visibility("hidden")))
@interface SDBLEPowerSourceContainer : NSObject
{
    struct LogCategory *_ucat;	// 8 = 0x8
    CUCoalescer *_powerSourceIdleCoalescer;	// 16 = 0x10
    _Bool _invalidateCalled;	// 24 = 0x18
    SFPowerSource *_powerSource;	// 32 = 0x20
    CDUnknownBlockType _invalidationHandler;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010006394c
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(readonly, nonatomic) SFPowerSource *powerSource; // @synthesize powerSource=_powerSource;
- (void)_invalidate;	// IMP=0x00000001000637a4
- (void)invalidate;	// IMP=0x00000001000636f8
- (int)publish;	// IMP=0x0000000100063594
- (void)trigger;	// IMP=0x00000001000634cc
- (id)description;	// IMP=0x00000001000633ac
- (unsigned long long)hash;	// IMP=0x000000010006339c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100063288
- (void)dealloc;	// IMP=0x00000001000631a4
- (id)initWithPowerSource:(id)arg1;	// IMP=0x0000000100062e3c

@end

