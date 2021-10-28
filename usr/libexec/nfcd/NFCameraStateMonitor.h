//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NFTimer, NSString;
@protocol NFCameraStateMonitorDelegate, OS_dispatch_queue;

@interface NFCameraStateMonitor : NSObject
{
    int _cameraStates;	// 8 = 0x8
    id <NFCameraStateMonitorDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    NSString *_sbActionHandlerIdentifer;	// 32 = 0x20
    _Bool _visualAlertInProgress;	// 40 = 0x28
    struct IONotificationPort *_ioNotifyPort;	// 48 = 0x30
    unsigned int _notificationObj;	// 56 = 0x38
    NFTimer *_debounceCameraNotificationTimer;	// 64 = 0x40
}

+ (id)sharedMonitor;	// IMP=0x0000000100003fdc
- (_Bool)listenForCameraNotificationFromPort:(struct IONotificationPort *)arg1;	// IMP=0x0000000100004b0c
- (unsigned int)_getService;	// IMP=0x0000000100004ae0
- (void)_updateCameraStateValue:(unsigned char)arg1;	// IMP=0x0000000100004934
- (_Bool)isRegistered;	// IMP=0x0000000100004924
- (_Bool)isCameraOn;	// IMP=0x00000001000048ec
- (void)_registerForCameradNotifications;	// IMP=0x0000000100004364
- (void)_unregisterCameraNotifications;	// IMP=0x0000000100004134
- (void)unregisterStateChange;	// IMP=0x0000000100004080
- (void)registerStateChangeWithDelegate:(id)arg1;	// IMP=0x0000000100004040
- (void)dealloc;	// IMP=0x0000000100003f5c
- (id)init;	// IMP=0x0000000100003ee0

@end
