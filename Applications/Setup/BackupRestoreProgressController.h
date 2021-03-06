//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SetupAssistantUI/BFFTimeRemainingController.h>

#import "BFFBackupDeviceControllerDelegate-Protocol.h"
#import "BuddyRestoreFlowItem-Protocol.h"
#import "MBManagerDelegate-Protocol.h"

@class BKSProcessAssertion, MBManager, NSDate, NSString, RestorableBackupItem, UIAlertController;
@protocol BFFFlowItemDelegate;

@interface BackupRestoreProgressController : BFFTimeRemainingController <BFFBackupDeviceControllerDelegate, MBManagerDelegate, BuddyRestoreFlowItem>
{
    _Bool _backupThenRestore;	// 8 = 0x8
    NSDate *_lastSourceDeviceSnapshotDate;	// 16 = 0x10
    _Bool _softwareUpdateDidOccur;	// 24 = 0x18
    id <BFFFlowItemDelegate> _delegate;	// 32 = 0x20
    RestorableBackupItem *_backupItem;	// 40 = 0x28
    MBManager *_backupManager;	// 48 = 0x30
    long long _restoreState;	// 56 = 0x38
    double _backupPercentComplete;	// 64 = 0x40
    double _restorePercentComplete;	// 72 = 0x48
    BKSProcessAssertion *_processAssertion;	// 80 = 0x50
    struct __MKBAssertion *_deviceLockAssertion;	// 88 = 0x58
    UIAlertController *_alert;	// 96 = 0x60
}

+ (id)cloudConfigSkipKey;	// IMP=0x0000000100018584
- (void).cxx_destruct;	// IMP=0x0000000100019ef0
@property(retain, nonatomic) UIAlertController *alert; // @synthesize alert=_alert;
@property(nonatomic) struct __MKBAssertion *deviceLockAssertion; // @synthesize deviceLockAssertion=_deviceLockAssertion;
@property(retain, nonatomic) BKSProcessAssertion *processAssertion; // @synthesize processAssertion=_processAssertion;
@property(nonatomic) double restorePercentComplete; // @synthesize restorePercentComplete=_restorePercentComplete;
@property(nonatomic) double backupPercentComplete; // @synthesize backupPercentComplete=_backupPercentComplete;
@property(nonatomic) long long restoreState; // @synthesize restoreState=_restoreState;
@property(retain, nonatomic) MBManager *backupManager; // @synthesize backupManager=_backupManager;
@property(nonatomic) _Bool softwareUpdateDidOccur; // @synthesize softwareUpdateDidOccur=_softwareUpdateDidOccur;
@property(retain, nonatomic) RestorableBackupItem *backupItem; // @synthesize backupItem=_backupItem;
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void)managerDidLoseConnectionToService:(id)arg1;	// IMP=0x0000000100019ce8
- (void)manager:(id)arg1 didFailRestoreWithError:(id)arg2;	// IMP=0x0000000100019604
- (void)managerDidFinishRestore:(id)arg1;	// IMP=0x0000000100018f48
- (void)manager:(id)arg1 didUpdateProgress:(float)arg2 estimatedTimeRemaining:(unsigned long long)arg3;	// IMP=0x0000000100018e8c
- (void)backupProgress:(double)arg1 estimatedTimeRemaining:(unsigned long long)arg2;	// IMP=0x0000000100018dd4
- (void)backupDeviceController:(id)arg1 backupCompletedWithError:(id)arg2;	// IMP=0x00000001000186f0
- (void)performExtendedInitializationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000185f0
- (void)controllerWasPopped;	// IMP=0x000000010001858c
- (id)waitForBackupToComplete;	// IMP=0x000000010001824c
- (void)restoreFailedWithError:(id)arg1;	// IMP=0x0000000100018100
- (void)_attemptRestore;	// IMP=0x0000000100016f54
- (void)_presentAlert:(id)arg1;	// IMP=0x0000000100016ce8
- (void)handleBackupFailed:(id)arg1;	// IMP=0x0000000100015e1c
- (void)reattemptBackup;	// IMP=0x0000000100015a4c
- (id)latestSnapshotForBackupUUID:(id)arg1 backupCompletedDate:(id)arg2 lastSnapshotDate:(id)arg3 error:(id *)arg4;	// IMP=0x000000010001522c
- (id)latestSnapshotForBackupUUID:(id)arg1 lastSnapshotDate:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000151bc
- (id)latestSnapshotForSourceDevice:(id *)arg1;	// IMP=0x00000001000150c4
- (void)updateProgressText;	// IMP=0x0000000100014ef8
- (void)updateProgress;	// IMP=0x0000000100014e7c
- (void)releaseAssertions;	// IMP=0x0000000100014c90
- (void)takeAssertions:(CDUnknownBlockType)arg1;	// IMP=0x00000001000147b0
- (_Bool)hasAssertions;	// IMP=0x000000010001474c
- (void)startRestore:(id)arg1;	// IMP=0x0000000100013510
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100013464
- (void)popBackFromProgress;	// IMP=0x0000000100013298
- (void)willResignActive;	// IMP=0x0000000100013174
- (void)loadView;	// IMP=0x00000001000130f0
- (void)dealloc;	// IMP=0x000000010001305c
- (id)init;	// IMP=0x0000000100012f04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

