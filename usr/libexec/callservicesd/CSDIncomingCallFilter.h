//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSDCallCenterObserverDelegate-Protocol.h"

@class CSDIncomingCallFilterDataSource, CXCallDirectorySanitizer, CXCallDirectoryStore, NSString, TUCallProviderManager;
@protocol CSDCallCenterObserver, CSDDeviceLockStateObserver, OS_dispatch_queue;

@interface CSDIncomingCallFilter : NSObject <CSDCallCenterObserverDelegate>
{
    _Bool _onCall;	// 8 = 0x8
    _Bool _onEmergencyCall;	// 9 = 0x9
    double _twoTimeCallthroughInterval;	// 16 = 0x10
    CXCallDirectoryStore *_callDirectoryStore;	// 24 = 0x18
    CSDIncomingCallFilterDataSource *_dataSource;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSString *_emergencyProviderIdentifier;	// 48 = 0x30
    TUCallProviderManager *_callProviderManager;	// 56 = 0x38
    id <CSDDeviceLockStateObserver> _deviceLockObserver;	// 64 = 0x40
    id <CSDCallCenterObserver> _callCenterObserver;	// 72 = 0x48
    CXCallDirectorySanitizer *_callDirectorySanitizer;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000001000c0f9c
@property(readonly, nonatomic) CXCallDirectorySanitizer *callDirectorySanitizer; // @synthesize callDirectorySanitizer=_callDirectorySanitizer;
@property(readonly, nonatomic) id <CSDCallCenterObserver> callCenterObserver; // @synthesize callCenterObserver=_callCenterObserver;
@property(readonly, nonatomic) id <CSDDeviceLockStateObserver> deviceLockObserver; // @synthesize deviceLockObserver=_deviceLockObserver;
@property(readonly, nonatomic) TUCallProviderManager *callProviderManager; // @synthesize callProviderManager=_callProviderManager;
@property(readonly, copy, nonatomic) NSString *emergencyProviderIdentifier; // @synthesize emergencyProviderIdentifier=_emergencyProviderIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CSDIncomingCallFilterDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) CXCallDirectoryStore *callDirectoryStore; // @synthesize callDirectoryStore=_callDirectoryStore;
@property(nonatomic) double twoTimeCallthroughInterval; // @synthesize twoTimeCallthroughInterval=_twoTimeCallthroughInterval;
- (void)callsChangedForCallCenterObserver:(id)arg1;	// IMP=0x00000001000c0d04
@property(nonatomic, getter=isOnEmergencyCall) _Bool onEmergencyCall; // @synthesize onEmergencyCall=_onEmergencyCall;
@property(nonatomic, getter=isOnCall) _Bool onCall; // @synthesize onCall=_onCall;
- (id)_callDirectoryPhoneNumberVariantsForSourceAddress:(id)arg1 countryCode:(id)arg2;	// IMP=0x00000001000c0974
- (_Bool)callDirectoryAllowsCallFromSourceAddress:(id)arg1 countryCode:(id)arg2;	// IMP=0x00000001000c0708
- (_Bool)callDirectoryAllowsCallFromSourceAddress:(id)arg1;	// IMP=0x00000001000c0668
- (_Bool)_doNotDisturbAllowsCallFromSourceAddress:(id)arg1 providerIdentifier:(id)arg2;	// IMP=0x00000001000c032c
- (id)_callFilterIdentifier;	// IMP=0x00000001000c02c8
- (CDUnknownBlockType)_callFilterBlock;	// IMP=0x00000001000bffec
- (id)initWithDataSource:(id)arg1 deviceLockObserver:(id)arg2 callCenterObserver:(id)arg3 callDirectoryStoreBuilder:(CDUnknownBlockType)arg4 queue:(id)arg5;	// IMP=0x00000001000bfc3c
- (id)init;	// IMP=0x00000001000bf984

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

