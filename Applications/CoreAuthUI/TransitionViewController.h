//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

#import "LARemoteUI-Protocol.h"
#import "LAUIMechanism-Protocol.h"
#import "LAUITransition-Protocol.h"

@class LACachedExternalizedContext, NSDictionary, NSString;
@protocol LABackoffCounter, LARemoteUIHost, LAUIMechanism;

@interface TransitionViewController : SBUIRemoteAlertServiceViewController <LARemoteUI, LAUIMechanism, LAUITransition>
{
    TransitionViewController *_childController;	// 8 = 0x8
    long long _resetUiEvent;	// 16 = 0x10
    _Bool _callerNameOverride;	// 24 = 0x18
    _Bool _awaitingDissappear;	// 25 = 0x19
    _Bool _disappeared;	// 26 = 0x1a
    _Bool _appeared;	// 27 = 0x1b
    unsigned int _instanceId;	// 28 = 0x1c
    id <LAUIMechanism> _mechanism;	// 32 = 0x20
    id <LARemoteUIHost> _remoteUIHost;	// 40 = 0x28
    long long _policy;	// 48 = 0x30
    NSDictionary *_options;	// 56 = 0x38
    id <LABackoffCounter> _backoffCounter;	// 64 = 0x40
    NSString *_callerName;	// 72 = 0x48
    NSString *_callerBundleId;	// 80 = 0x50
    LACachedExternalizedContext *_cachedExternalizedContext;	// 88 = 0x58
    NSDictionary *_internalInfo;	// 96 = 0x60
    NSString *_authenticationTitle;	// 104 = 0x68
    NSString *_authenticationSubtitle;	// 112 = 0x70
    CDUnknownBlockType _disappearedNotification;	// 120 = 0x78
    CDUnknownBlockType _appearedNotification;	// 128 = 0x80
}

+ (id)rootController;	// IMP=0x000000010000cb48
+ (unsigned int)newTaskId;	// IMP=0x000000010000b560
+ (unsigned int)newInstanceId;	// IMP=0x000000010000b54c
+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x000000010000a528
- (void).cxx_destruct;	// IMP=0x000000010000d97c
@property(readonly, nonatomic) unsigned int instanceId; // @synthesize instanceId=_instanceId;
@property(copy, nonatomic) CDUnknownBlockType appearedNotification; // @synthesize appearedNotification=_appearedNotification;
@property(copy, nonatomic) CDUnknownBlockType disappearedNotification; // @synthesize disappearedNotification=_disappearedNotification;
@property(nonatomic) _Bool appeared; // @synthesize appeared=_appeared;
@property(nonatomic) _Bool disappeared; // @synthesize disappeared=_disappeared;
@property(nonatomic) _Bool awaitingDissappear; // @synthesize awaitingDissappear=_awaitingDissappear;
@property(retain, nonatomic) NSString *authenticationSubtitle; // @synthesize authenticationSubtitle=_authenticationSubtitle;
@property(retain, nonatomic) NSString *authenticationTitle; // @synthesize authenticationTitle=_authenticationTitle;
@property(readonly, nonatomic) NSDictionary *internalInfo; // @synthesize internalInfo=_internalInfo;
@property(readonly, nonatomic) LACachedExternalizedContext *cachedExternalizedContext; // @synthesize cachedExternalizedContext=_cachedExternalizedContext;
@property(readonly, nonatomic) NSString *callerBundleId; // @synthesize callerBundleId=_callerBundleId;
@property(readonly, nonatomic) _Bool callerNameOverride; // @synthesize callerNameOverride=_callerNameOverride;
@property(readonly, nonatomic) NSString *callerName; // @synthesize callerName=_callerName;
@property(retain, nonatomic) id <LABackoffCounter> backoffCounter; // @synthesize backoffCounter=_backoffCounter;
@property(readonly, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(readonly, nonatomic) long long policy; // @synthesize policy=_policy;
@property(readonly, nonatomic) id <LARemoteUIHost> remoteUIHost; // @synthesize remoteUIHost=_remoteUIHost;
@property(readonly, nonatomic) id <LAUIMechanism> mechanism; // @synthesize mechanism=_mechanism;
- (_Bool)_canShowWhileLocked;	// IMP=0x000000010000d7d0
- (long long)preferredStatusBarStyle;	// IMP=0x000000010000d740
- (int)_preferredStatusBarVisibility;	// IMP=0x000000010000d718
- (void)handleButtonActions:(id)arg1;	// IMP=0x000000010000d70c
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000010000d6ac
- (void)dismissChildWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000d530
- (void)mechanismEvent:(long long)arg1 value:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000d3a8
- (void)mechanismEvent:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000d394
- (void)internalInfoWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010000d37c
- (void)_setActivityWatchdog;	// IMP=0x000000010000d268
- (void)authMethodWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010000d1e8
- (void)externalizedContextWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010000d1d0
- (void)uiFailureWithError:(id)arg1;	// IMP=0x000000010000d0d0
- (void)uiSuccessWithResult:(id)arg1;	// IMP=0x000000010000cfdc
- (void)uiFallback;	// IMP=0x000000010000cfa0
- (void)uiCancel;	// IMP=0x000000010000cf64
- (void)uiEvent:(long long)arg1 options:(id)arg2;	// IMP=0x000000010000ce38
- (_Bool)isRemoteViewController;	// IMP=0x000000010000ce30
- (_Bool)isFullScreenController;	// IMP=0x000000010000ce28
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000010000cb64
- (void)idleTimerDisable:(_Bool)arg1;	// IMP=0x000000010000cadc
- (_Bool)prefersStatusBarHidden;	// IMP=0x000000010000cad0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010000c954
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010000c7f8
- (void)viewDidLoad;	// IMP=0x000000010000c730
- (void)_performOnMainQueueWhenAppeared:(CDUnknownBlockType)arg1;	// IMP=0x000000010000c13c
- (void)transitionToController:(long long)arg1 internalInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000b99c
- (void)dismissRemoteUIWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000b574
- (id)localizedCallerName;	// IMP=0x000000010000b3fc
@property(readonly, copy) NSString *description;
- (void)didReceiveAuthenticationData;	// IMP=0x000000010000af48
- (id)initWithInternalInfo:(id)arg1 parent:(id)arg2;	// IMP=0x000000010000ad4c
- (void)_setupConnection;	// IMP=0x000000010000a6b8
- (void)_resetUI;	// IMP=0x000000010000a664
- (id)init;	// IMP=0x000000010000a530

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
