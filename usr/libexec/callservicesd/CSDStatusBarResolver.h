//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSDCallCenterObserverDelegate-Protocol.h"
#import "CSDStatusBarResolver-Protocol.h"

@class CSDStatusBarDescriptor, NSString, NSTimer, TUCallCenter;
@protocol CSDCallCenterObserver, CSDProcessObserverProtocol, CSDStatusBarResolverDelegate, OS_dispatch_queue;

@interface CSDStatusBarResolver : NSObject <CSDCallCenterObserverDelegate, CSDStatusBarResolver>
{
    unsigned int _inCallServiceApplicationState;	// 8 = 0x8
    id <CSDStatusBarResolverDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    id <CSDCallCenterObserver> _callCenterObserver;	// 32 = 0x20
    id <CSDProcessObserverProtocol> _processObserver;	// 40 = 0x28
    NSTimer *_callDurationUpdateTimer;	// 48 = 0x30
    CSDStatusBarDescriptor *_resolvedDescriptor;	// 56 = 0x38
    unsigned long long _inCallServiceWantsStatusBarSuppressionState;	// 64 = 0x40
    TUCallCenter *_callCenter;	// 72 = 0x48
}

+ (_Bool)isRunningForApplicationState:(unsigned int)arg1;	// IMP=0x000000010008f6e8
- (void).cxx_destruct;	// IMP=0x0000000100090a18
@property(readonly, nonatomic) TUCallCenter *callCenter; // @synthesize callCenter=_callCenter;
@property(nonatomic) unsigned int inCallServiceApplicationState; // @synthesize inCallServiceApplicationState=_inCallServiceApplicationState;
@property(nonatomic) unsigned long long inCallServiceWantsStatusBarSuppressionState; // @synthesize inCallServiceWantsStatusBarSuppressionState=_inCallServiceWantsStatusBarSuppressionState;
@property(retain, nonatomic) CSDStatusBarDescriptor *resolvedDescriptor; // @synthesize resolvedDescriptor=_resolvedDescriptor;
@property(retain, nonatomic) NSTimer *callDurationUpdateTimer; // @synthesize callDurationUpdateTimer=_callDurationUpdateTimer;
@property(readonly, nonatomic) id <CSDProcessObserverProtocol> processObserver; // @synthesize processObserver=_processObserver;
@property(readonly, nonatomic) id <CSDCallCenterObserver> callCenterObserver; // @synthesize callCenterObserver=_callCenterObserver;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSDStatusBarResolverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)callsChangedForCallCenterObserver:(id)arg1;	// IMP=0x0000000100090900
- (int)_processIdentifierForCall:(id)arg1;	// IMP=0x00000001000907f8
- (int)_statusBarStyleOverrideForCall:(id)arg1;	// IMP=0x0000000100090798
- (id)_statusBarStringForCall:(id)arg1;	// IMP=0x00000001000905dc
@property(readonly, nonatomic) _Bool inCallServiceWantsStatusBarSuppression;
- (_Bool)currentCallsHaveMixedProviders;	// IMP=0x0000000100090184
- (id)resolvedCall;	// IMP=0x000000010008fbd4
- (void)updateResolvedDescriptor;	// IMP=0x000000010008f944
- (void)updateStatusBarSuppressionState:(id)arg1;	// IMP=0x000000010008f750
- (void)dealloc;	// IMP=0x000000010008f700
- (id)initWithCallCenterObserver:(id)arg1 processObserver:(id)arg2 callCenter:(id)arg3 queue:(id)arg4;	// IMP=0x000000010008f11c
- (id)initWithQueue:(id)arg1;	// IMP=0x000000010008f048
- (id)init;	// IMP=0x000000010008f034

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
