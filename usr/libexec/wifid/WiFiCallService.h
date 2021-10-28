//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CXCallObserverDelegate-Protocol.h"

@class CXCallObserver, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface WiFiCallService : NSObject <CXCallObserverDelegate>
{
    int _state;	// 8 = 0x8
    NSMutableArray *_clients;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_serialCallServiceActivityDispatchQ;	// 24 = 0x18
    CXCallObserver *_callObserver;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x000000010005b858
@property(retain, nonatomic) CXCallObserver *callObserver; // @synthesize callObserver=_callObserver;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialCallServiceActivityDispatchQ; // @synthesize serialCallServiceActivityDispatchQ=_serialCallServiceActivityDispatchQ;
@property int state; // @synthesize state=_state;
@property(retain, nonatomic) NSMutableArray *clients; // @synthesize clients=_clients;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;	// IMP=0x000000010005bcfc
- (int)getCurrentCallState;	// IMP=0x000000010005bcf0
- (int)getNewCallState;	// IMP=0x000000010005bb88
- (void)registerStateChangeCallback:(CDUnknownBlockType)arg1 withCallbackContext:(void *)arg2;	// IMP=0x000000010005bab4
- (void)dealloc;	// IMP=0x000000010005ba28
- (id)init;	// IMP=0x000000010005b8bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
