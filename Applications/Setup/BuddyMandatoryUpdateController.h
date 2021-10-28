//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SetupAssistantUI/BFFSplashController.h>

#import "BFFFlowItem-Protocol.h"
#import "BYEnvironmentDependencyReceiver-Protocol.h"
#import "SUManagerClientDelegate-Protocol.h"

@class NSObject, NSString, NSTimer, SUDescriptor;
@protocol BFFFlowItemDelegate, BYDeviceProvider, OS_dispatch_queue;

@interface BuddyMandatoryUpdateController : BFFSplashController <SUManagerClientDelegate, BFFFlowItem, BYEnvironmentDependencyReceiver>
{
    _Bool _isUpdateMandatory;	// 8 = 0x8
    id <BFFFlowItemDelegate> _delegate;	// 16 = 0x10
    id <BYDeviceProvider> _deviceProvider;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_updateScanQueue;	// 32 = 0x20
    SUDescriptor *_update;	// 40 = 0x28
    long long _autoInstallTimeRemaining;	// 48 = 0x30
    NSTimer *_autoInstallTimer;	// 56 = 0x38
}

+ (_Bool)hasCloudConfiguration;	// IMP=0x00000001000bd0c4
+ (id)availableUpdate;	// IMP=0x00000001000bceb0
+ (_Bool)shouldOfferUpdate:(id)arg1;	// IMP=0x00000001000bc5e8
+ (_Bool)controllerNeedsToRunForClass:(Class)arg1;	// IMP=0x00000001000bb8ec
+ (id)cloudConfigSkipKey;	// IMP=0x00000001000bb8e4
- (void).cxx_destruct;	// IMP=0x00000001000bd208
@property(retain) NSTimer *autoInstallTimer; // @synthesize autoInstallTimer=_autoInstallTimer;
@property long long autoInstallTimeRemaining; // @synthesize autoInstallTimeRemaining=_autoInstallTimeRemaining;
@property _Bool isUpdateMandatory; // @synthesize isUpdateMandatory=_isUpdateMandatory;
@property(retain) SUDescriptor *update; // @synthesize update=_update;
@property(retain) NSObject<OS_dispatch_queue> *updateScanQueue; // @synthesize updateScanQueue=_updateScanQueue;
@property(retain, nonatomic) id <BYDeviceProvider> deviceProvider; // @synthesize deviceProvider=_deviceProvider;
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void)beginInstall;	// IMP=0x00000001000bcd30
- (id)autoInstallAlertMessageForTimeRemaining:(long long)arg1;	// IMP=0x00000001000bcba4
- (void)showAutoInstallAlert;	// IMP=0x00000001000bc6c0
- (void)installNowTapped;	// IMP=0x00000001000bc5dc
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000bc4a8
- (void)loadView;	// IMP=0x00000001000bbf04
- (void)performExtendedInitializationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000bb9d8
- (id)init;	// IMP=0x00000001000bb960

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
