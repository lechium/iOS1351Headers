//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSDisplayLayoutObserver-Protocol.h"
#import "MSDDemoUpdateStatusDelegate-Protocol.h"
#import "SBSRemoteAlertHandleObserver-Protocol.h"

@class BKSApplicationStateMonitor, FBSDisplayLayoutMonitor, MSDProgress, NSConditionLock, NSError, NSString, SBSRemoteAlertHandle;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface MSDUIHelper : NSObject <SBSRemoteAlertHandleObserver, FBSDisplayLayoutObserver, MSDDemoUpdateStatusDelegate>
{
    _Bool _allowCancel;	// 8 = 0x8
    int _fullScreenState;	// 12 = 0xc
    NSObject<OS_xpc_object> *_connection;	// 16 = 0x10
    NSString *_fullScreenUIAppId;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_uiHelperQueue;	// 32 = 0x20
    BKSApplicationStateMonitor *_fullScreenUIAppMonitor;	// 40 = 0x28
    NSString *_message;	// 48 = 0x30
    NSObject<OS_xpc_object> *_pendingMessage;	// 56 = 0x38
    MSDProgress *_currentProgress;	// 64 = 0x40
    SBSRemoteAlertHandle *_remoteAlertHandle;	// 72 = 0x48
    NSConditionLock *_conditionLock;	// 80 = 0x50
    NSError *_fullScreenUILaunchError_iOS;	// 88 = 0x58
    long long _backlightStatus;	// 96 = 0x60
    FBSDisplayLayoutMonitor *_displayLayoutMonitor;	// 104 = 0x68
}

+ (id)sharedInstance;	// IMP=0x0000000100072564
- (void).cxx_destruct;	// IMP=0x00000001000752ac
@property(retain) FBSDisplayLayoutMonitor *displayLayoutMonitor; // @synthesize displayLayoutMonitor=_displayLayoutMonitor;
@property long long backlightStatus; // @synthesize backlightStatus=_backlightStatus;
@property(retain) NSError *fullScreenUILaunchError_iOS; // @synthesize fullScreenUILaunchError_iOS=_fullScreenUILaunchError_iOS;
@property(retain) NSConditionLock *conditionLock; // @synthesize conditionLock=_conditionLock;
@property(retain) SBSRemoteAlertHandle *remoteAlertHandle; // @synthesize remoteAlertHandle=_remoteAlertHandle;
@property(retain) MSDProgress *currentProgress; // @synthesize currentProgress=_currentProgress;
@property(retain) NSObject<OS_xpc_object> *pendingMessage; // @synthesize pendingMessage=_pendingMessage;
@property int fullScreenState; // @synthesize fullScreenState=_fullScreenState;
@property _Bool allowCancel; // @synthesize allowCancel=_allowCancel;
@property(retain) NSString *message; // @synthesize message=_message;
@property(retain) BKSApplicationStateMonitor *fullScreenUIAppMonitor; // @synthesize fullScreenUIAppMonitor=_fullScreenUIAppMonitor;
@property(retain) NSObject<OS_dispatch_queue> *uiHelperQueue; // @synthesize uiHelperQueue=_uiHelperQueue;
@property(retain) NSString *fullScreenUIAppId; // @synthesize fullScreenUIAppId=_fullScreenUIAppId;
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2;	// IMP=0x0000000100074dfc
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;	// IMP=0x0000000100074c84
- (void)remoteAlertHandleDidDeactivate:(id)arg1;	// IMP=0x0000000100074be0
- (void)remoteAlertHandleDidActivate:(id)arg1;	// IMP=0x0000000100074ad8
- (_Bool)launchFullScreenUI_ios;	// IMP=0x00000001000745c8
- (void)handleFullScreenUIAppStateChange:(unsigned int)arg1;	// IMP=0x00000001000741ac
- (void)deactivateFullScreenUIAppMonitor;	// IMP=0x00000001000740e4
- (void)activateFullScreenUIAppMonitor;	// IMP=0x0000000100073eac
- (_Bool)launchFullScreenUI;	// IMP=0x0000000100073e34
- (void)requestFullScreenUI;	// IMP=0x0000000100073bf4
- (void)demoUpdateCompleted:(id)arg1;	// IMP=0x0000000100073be4
- (void)demoUpdateProgress:(id)arg1;	// IMP=0x0000000100073894
- (void)demoUpdateFailed:(id)arg1;	// IMP=0x00000001000732c8
- (void)fullScreenUICanceledByUser;	// IMP=0x0000000100073184
- (void)stopFullScreenUI:(id)arg1;	// IMP=0x0000000100072bc8
- (void)startFullScreenUIWith:(id)arg1 allowCancel:(_Bool)arg2;	// IMP=0x00000001000729d8
@property(retain) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
- (id)init;	// IMP=0x00000001000725d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

