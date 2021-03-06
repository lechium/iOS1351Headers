//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface MSDPricingUpdateController : NSObject
{
    _Bool _switchModeAfterCompletion;	// 8 = 0x8
    _Bool _needUpdate;	// 9 = 0x9
    _Bool _canceled;	// 10 = 0xa
    int _state;	// 12 = 0xc
    NSTimer *_heartBeatMonitor;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000100014cc4
- (void).cxx_destruct;	// IMP=0x00000001000158cc
@property _Bool canceled; // @synthesize canceled=_canceled;
@property int state; // @synthesize state=_state;
@property(retain, nonatomic) NSTimer *heartBeatMonitor; // @synthesize heartBeatMonitor=_heartBeatMonitor;
@property _Bool needUpdate; // @synthesize needUpdate=_needUpdate;
@property _Bool switchModeAfterCompletion; // @synthesize switchModeAfterCompletion=_switchModeAfterCompletion;
- (void)pricingUpdateTimeOut:(id)arg1;	// IMP=0x000000010001568c
- (void)restartMonitor;	// IMP=0x00000001000154e0
- (void)stopMonitor;	// IMP=0x0000000100015400
@property(readonly) _Bool completed;
- (void)operationCanceled;	// IMP=0x00000001000152e8
- (void)receivedOtherMessages:(id)arg1 fromRequest:(id)arg2;	// IMP=0x0000000100015270
- (void)receivedCompletionNotice:(id)arg1 fromRequest:(id)arg2;	// IMP=0x00000001000150ec
- (void)receivedHeartBeat:(id)arg1 fromRequest:(id)arg2;	// IMP=0x0000000100014f5c
- (void)receivedUpdateRequest:(id)arg1 fromRequest:(id)arg2;	// IMP=0x0000000100014d30

@end

