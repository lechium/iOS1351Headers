//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LocationSupport/CLIntersiloService.h>

#import "CLPrivacyManagerProtocol-Protocol.h"

@class CLDispatchSilo, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_source;

@interface CLPrivacyManager : CLIntersiloService <CLPrivacyManagerProtocol>
{
    struct unique_ptr<CLClientManager_Type::Client, std::__1::default_delete<CLClientManager_Type::Client>> _clientManagerClient;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_deferVacuum;	// 16 = 0x10
    NSMutableDictionary *_activities;	// 24 = 0x18
    _Bool _disabled;	// 32 = 0x20
    unsigned long long _timeStarted;	// 40 = 0x28
}

+ (id)getSilo;	// IMP=0x0000000100c9ace4
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0000000100c9acc0
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100c9ac3c
- (id).cxx_construct;	// IMP=0x0000000100c9c814
- (void).cxx_destruct;	// IMP=0x0000000100c9c7ec
- (void)onActivity:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x0000000100c9c288
- (void)retryActivityForEncryptionClass:(id)arg1 reason:(int)arg2;	// IMP=0x0000000100c9bfd0
- (_Bool)isReadyToVacuumEncryptionClass:(id)arg1;	// IMP=0x0000000100c9be20
- (void)checkInForActivityWithIdentifier:(id)arg1;	// IMP=0x0000000100c9bcfc
- (void)vacuumAll;	// IMP=0x0000000100c9b6f0
- (void)scheduleVacuumWithReason:(id)arg1;	// IMP=0x0000000100c9b340
- (void)onClientManagerNotification:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x0000000100c9b1c4
- (void)beginService;	// IMP=0x0000000100c9ae20
- (void)dealloc;	// IMP=0x0000000100c9adcc
- (id)init;	// IMP=0x0000000100c9ad5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, retain, nonatomic) CLDispatchSilo *silo; // @dynamic silo;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

