//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "STDebouncerDelegate-Protocol.h"

@class NSString, STAccountState, STDebouncer, STXPCEventObserver;
@protocol STAccountStateMonitorDelegate;

@interface STAccountStateMonitor : NSObject <STDebouncerDelegate>
{
    int _TCCAccessChangedNotificationToken;	// 8 = 0x8
    STAccountState *_accountState;	// 16 = 0x10
    id <STAccountStateMonitorDelegate> _delegate;	// 24 = 0x18
    STDebouncer *_debouncer;	// 32 = 0x20
    STXPCEventObserver *_accountChangeObserver;	// 40 = 0x28
    STXPCEventObserver *_familyChangeObserver;	// 48 = 0x30
    id _cloudKitAccountChangeObserver;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100005a14
@property(retain, nonatomic) id cloudKitAccountChangeObserver; // @synthesize cloudKitAccountChangeObserver=_cloudKitAccountChangeObserver;
@property(retain, nonatomic) STXPCEventObserver *familyChangeObserver; // @synthesize familyChangeObserver=_familyChangeObserver;
@property(retain, nonatomic) STXPCEventObserver *accountChangeObserver; // @synthesize accountChangeObserver=_accountChangeObserver;
@property(retain, nonatomic) STDebouncer *debouncer; // @synthesize debouncer=_debouncer;
@property __weak id <STAccountStateMonitorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) STAccountState *accountState; // @synthesize accountState=_accountState;
- (void)reloadAccountState:(_Bool)arg1;	// IMP=0x0000000100004a04
- (void)debouncerDidDebounce:(id)arg1;	// IMP=0x00000001000049f4
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000001000042c8
- (void)dealloc;	// IMP=0x0000000100004248

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

