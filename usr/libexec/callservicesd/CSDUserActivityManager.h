//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSDUserActivityCommunicatorDelegate-Protocol.h"
#import "TUCallProviderManagerDelegate-Protocol.h"

@class CSDUserActivity, CSDUserActivityCommunicator, NSString;
@protocol OS_dispatch_queue;

@interface CSDUserActivityManager : NSObject <TUCallProviderManagerDelegate, CSDUserActivityCommunicatorDelegate>
{
    CSDUserActivityCommunicator *_activityCommunicator;	// 8 = 0x8
    CSDUserActivity *_handoffActivity;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

+ (id)sharedInstanceWithQueue:(id)arg1;	// IMP=0x000000010000f154
+ (id)sharedInstance;	// IMP=0x000000010000f138
- (void).cxx_destruct;	// IMP=0x0000000100011164
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CSDUserActivity *handoffActivity; // @synthesize handoffActivity=_handoffActivity;
@property(retain, nonatomic) CSDUserActivityCommunicator *activityCommunicator; // @synthesize activityCommunicator=_activityCommunicator;
- (void)receivedBroadcastedActivityType:(unsigned int)arg1 dynamicIdentifier:(id)arg2;	// IMP=0x0000000100010d28
- (void)providersChangedForProviderManager:(id)arg1;	// IMP=0x0000000100010cdc
- (void)callConnected:(id)arg1;	// IMP=0x0000000100010c90
- (void)callStartedConnecting:(id)arg1;	// IMP=0x0000000100010b54
- (void)shouldSuppressRingtoneChanged:(id)arg1;	// IMP=0x00000001000109f4
- (void)callContinuityChanged:(id)arg1;	// IMP=0x00000001000109a8
- (void)callStatusChanged:(id)arg1;	// IMP=0x00000001000108e0
- (void)updateAppHistoryActivityForCall;	// IMP=0x00000001000102a4
- (void)updateSuppressRingtoneActivityListeningState;	// IMP=0x0000000100010114
- (void)startSuppressRingtoneActivityBroadcastingForCall:(id)arg1;	// IMP=0x000000010000fff4
- (void)startSuppressRingtoneActivityBroadcastingIfNecessaryForCallWithStatusChange:(id)arg1;	// IMP=0x000000010000fec4
- (void)endHandoffActivity;	// IMP=0x000000010000fd3c
- (void)updateHandoffActivityState;	// IMP=0x000000010000f854
- (void)updateCallHandoffRegistration;	// IMP=0x000000010000f540
- (void)dealloc;	// IMP=0x000000010000f4c0
- (id)initWithQueue:(id)arg1;	// IMP=0x000000010000f258

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

