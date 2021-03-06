//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC13callservicesd17BlockedCallFilter.h"

#import "CSDCallProviderManagerDelegate-Protocol.h"

@class MISSING_TYPE;
@protocol CSDManagedDeviceMonitorDelegate;

@interface CSDScreenTimeCallFilter : _TtC13callservicesd17BlockedCallFilter <CSDCallProviderManagerDelegate>
{
    MISSING_TYPE *delegate;	// 16 = 0x10
    MISSING_TYPE *providerManager;	// 24 = 0x18
    MISSING_TYPE *conversationsForBundleIdentifier;	// 32 = 0x20
    MISSING_TYPE *synchronousConversationsForBundleIdentifier;	// 40 = 0x28
    MISSING_TYPE *contextsForCallIdentifier;	// 48 = 0x30
    MISSING_TYPE *observationForCallIdentifier;	// 56 = 0x38
    MISSING_TYPE *delegateQueue;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000001001dea60
- (id)initWithQueue:(id)arg1;	// IMP=0x00000001001deae8
- (void)conversationManager:(id)arg1 activeRemoteParticipantsChangedForConversation:(id)arg2;	// IMP=0x00000001001dd17c
- (void)handleCallRemoteParticipantsChanged:(id)arg1;	// IMP=0x00000001001dc944
- (void)providersChangedForProviderManager:(id)arg1;	// IMP=0x00000001001dc6a8
- (void)stopMonitoring:(id)arg1;	// IMP=0x00000001001dc65c
- (void)startMonitoring:(id)arg1;	// IMP=0x00000001001dc324
- (_Bool)isUnknownAddress:(id)arg1 normalizedAddress:(id)arg2 forBundleIdentifier:(id)arg3;	// IMP=0x00000001001dbac8
- (_Bool)isUnknownCall:(id)arg1;	// IMP=0x00000001001dbac0
- (_Bool)shouldRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(_Bool)arg3;	// IMP=0x00000001001db9c0
- (_Bool)willRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x00000001001db8f0
- (long long)filterStatusForAddresses:(id)arg1 withBundleIdentifier:(id)arg2;	// IMP=0x00000001001db710
- (id)policyForAddresses:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x00000001001db3b8
- (_Bool)containsRecentsRestrictedHandle:(id)arg1;	// IMP=0x00000001001db23c
- (_Bool)shouldDisconnectCall:(id)arg1;	// IMP=0x00000001001db17c
- (_Bool)shouldFilterIncomingCall:(id)arg1;	// IMP=0x00000001001db0b8
- (_Bool)containsOutgoingRestrictedHandle:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(_Bool)arg3;	// IMP=0x00000001001daf7c
- (_Bool)containsRestrictedHandle:(id)arg1;	// IMP=0x00000001001dad94
- (id)initWithCallProviderManager:(id)arg1 delegate:(id)arg2 queue:(id)arg3;	// IMP=0x00000001001dabd0
@property(nonatomic) __weak id <CSDManagedDeviceMonitorDelegate> delegate; // @synthesize delegate;

@end

