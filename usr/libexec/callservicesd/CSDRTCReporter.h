//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface CSDRTCReporter : NSObject
{
    MISSING_TYPE *queue;	// 8 = 0x8
    MISSING_TYPE *relayDeviceRouteChangesByCallUUID;	// 16 = 0x10
    MISSING_TYPE *groupUUIDToConversationReportingSessions;	// 24 = 0x18
    MISSING_TYPE *groupUUIDToConversationInfo;	// 32 = 0x20
    MISSING_TYPE *uuidToCallReportingSessions;	// 40 = 0x28
    MISSING_TYPE *idsSessionUUIDToChatUUIDs;	// 48 = 0x30
    MISSING_TYPE *appleIDUtilities;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010017fbec
- (id)init;	// IMP=0x000000010017fc74
- (void)reportingController:(id)arg1 voipPushDroppedOnTheFloor:(id)arg2;	// IMP=0x000000010017ed9c
- (void)reportingController:(id)arg1 voipAppBecameDisabledFromLaunching:(id)arg2;	// IMP=0x000000010017ecac
- (void)reportingController:(id)arg1 voipAppFailedToPostIncomingCall:(id)arg2;	// IMP=0x000000010017ec80
- (void)reportingController:(id)arg1 receivedReports:(id)arg2 forSessionWithUUID:(id)arg3;	// IMP=0x000000010017e700
- (void)reportingController:(id)arg1 receivedChat:(id)arg2;	// IMP=0x000000010017e348
- (void)reportingController:(id)arg1 receivedReports:(id)arg2 forConversation:(id)arg3;	// IMP=0x000000010017dd7c
- (void)reportingController:(id)arg1 AVCBlobRecoveryTimedOutForConversation:(id)arg2;	// IMP=0x000000010017db4c
- (void)reportingController:(id)arg1 AVCBlobRecoveryStartedForConversation:(id)arg2;	// IMP=0x000000010017d9f8
- (void)reportingController:(id)arg1 removedActiveConversation:(id)arg2;	// IMP=0x000000010017d9b8
- (void)reportingController:(id)arg1 addedActiveConversation:(id)arg2;	// IMP=0x000000010017d290
- (void)reportingController:(id)arg1 activeRemoteParticipantsChangedForConversation:(id)arg2;	// IMP=0x000000010017d25c
- (void)reportingController:(id)arg1 remoteMembersChangedForConversation:(id)arg2;	// IMP=0x000000010017d124
- (void)reportingController:(id)arg1 stateChangedForConversation:(id)arg2;	// IMP=0x000000010017cf2c
- (void)reportingController:(id)arg1 pickedRoute:(id)arg2 forCall:(id)arg3;	// IMP=0x000000010017cc6c
- (void)reportingController:(id)arg1 statusChangedForCall:(id)arg2 totalCallCount:(unsigned long long)arg3;	// IMP=0x000000010017c9c8
- (void)reportingController:(id)arg1 timedOutPickingRoute:(id)arg2 forCall:(id)arg3;	// IMP=0x000000010017b4c8
- (void)reportingController:(id)arg1 createOneToOneFTReportingSessionForCallWithUUID:(id)arg2 withReportingHierarchyToken:(id)arg3;	// IMP=0x000000010017b230
- (void)reportingController:(id)arg1 createMultiwayCallReportingSessionForConversation:(id)arg2;	// IMP=0x000000010017adec
- (void)reportingController:(id)arg1 createConversationReportingSessionForConversation:(id)arg2;	// IMP=0x000000010017a8f0
- (id)initWithQueue:(id)arg1;	// IMP=0x000000010017a354

@end

