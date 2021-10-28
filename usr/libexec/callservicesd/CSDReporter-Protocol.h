//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CSDCall, CSDIDSChat, CSDMessagingRelayMessage, CSDMomentsUsageReport, CSDReportingController, CXAction, CXTransactionGroup, NSArray, NSString, NSUUID, RTCSecureHierarchyToken, TUConversation, TURoute;
@protocol CSDReporterDataSource;

@protocol CSDReporter <NSObject>

@optional
- (void)reportingController:(CSDReportingController *)arg1 createMultiwayCallReportingSessionForConversation:(TUConversation *)arg2;
- (void)reportingController:(CSDReportingController *)arg1 createConversationReportingSessionForConversation:(TUConversation *)arg2;
- (void)reportingController:(CSDReportingController *)arg1 createOneToOneFTReportingSessionForCallWithUUID:(NSUUID *)arg2 withReportingHierarchyToken:(RTCSecureHierarchyToken *)arg3;
- (void)reportingController:(CSDReportingController *)arg1 voipPushDroppedOnTheFloor:(NSString *)arg2;
- (void)reportingController:(CSDReportingController *)arg1 voipAppBecameDisabledFromLaunching:(NSString *)arg2;
- (void)reportingController:(CSDReportingController *)arg1 voipAppFailedToPostIncomingCall:(NSString *)arg2;
- (void)reportingController:(CSDReportingController *)arg1 receivedReports:(NSArray *)arg2 forSessionWithUUID:(NSUUID *)arg3;
- (void)reportingController:(CSDReportingController *)arg1 receivedChat:(CSDIDSChat *)arg2;
- (void)reportingController:(CSDReportingController *)arg1 receivedReports:(NSArray *)arg2 forConversation:(TUConversation *)arg3;
- (void)reportingController:(CSDReportingController *)arg1 AVCBlobRecoveryTimedOutForConversation:(TUConversation *)arg2;
- (void)reportingController:(CSDReportingController *)arg1 AVCBlobRecoveryStartedForConversation:(TUConversation *)arg2;
- (void)reportingController:(CSDReportingController *)arg1 remoteMembersChangedForConversation:(TUConversation *)arg2;
- (void)reportingController:(CSDReportingController *)arg1 activeRemoteParticipantsChangedForConversation:(TUConversation *)arg2;
- (void)reportingController:(CSDReportingController *)arg1 removedActiveConversation:(TUConversation *)arg2;
- (void)reportingController:(CSDReportingController *)arg1 stateChangedForConversation:(TUConversation *)arg2;
- (void)reportingController:(CSDReportingController *)arg1 addedActiveConversation:(TUConversation *)arg2;
- (void)reportingController:(CSDReportingController *)arg1 timedOutPickingRoute:(TURoute *)arg2 forCall:(CSDCall *)arg3;
- (void)reportingController:(CSDReportingController *)arg1 pickedRoute:(TURoute *)arg2 forCall:(CSDCall *)arg3;
- (void)reportingController:(CSDReportingController *)arg1 capturedMomentsUsageReport:(CSDMomentsUsageReport *)arg2;
- (void)reportingController:(CSDReportingController *)arg1 providerFailedWithAction:(CXAction *)arg2 forCall:(CSDCall *)arg3;
- (void)reportingController:(CSDReportingController *)arg1 transactionGroupCompleted:(CXTransactionGroup *)arg2;
- (void)reportingController:(CSDReportingController *)arg1 relayMessageReceived:(CSDMessagingRelayMessage *)arg2 fromPairedDevice:(_Bool)arg3;
- (void)allCallsBackgroundedForReportingController:(CSDReportingController *)arg1;
- (void)reportingController:(CSDReportingController *)arg1 callEnteredForeground:(CSDCall *)arg2;
- (void)reportingController:(CSDReportingController *)arg1 statusChangedForCall:(CSDCall *)arg2 totalCallCount:(unsigned long long)arg3;
@property(nonatomic) __weak id <CSDReporterDataSource> dataSource;
@end
