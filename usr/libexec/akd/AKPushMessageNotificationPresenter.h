//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AKPushMessage;

@interface AKPushMessageNotificationPresenter : NSObject
{
    AKPushMessage *_message;	// 8 = 0x8
    struct __CFUserNotification *_pendingNotification;	// 16 = 0x10
}

+ (void)populateNotificationOptionsWithCommonKeys:(id)arg1 makeNoise:(_Bool)arg2;	// IMP=0x000000010004db88
+ (struct __CFUserNotification *)createUserNotificationWithTitle:(id)arg1 body:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 makeNoise:(_Bool)arg5;	// IMP=0x000000010004d834
+ (id)createUserNotificationOptionsWithTitle:(id)arg1 body:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 makeNoise:(_Bool)arg5;	// IMP=0x000000010004d630
+ (id)_presenterQueue;	// IMP=0x000000010004bb3c
- (void).cxx_destruct;	// IMP=0x000000010004e5c0
- (void)_startChangePasswordFlowForAccount:(id)arg1;	// IMP=0x000000010004e34c
- (void)_promptForChangePasswordForAccount:(id)arg1;	// IMP=0x000000010004df40
- (unsigned long long)_notificationResultFromButtonPressed:(unsigned long long)arg1;	// IMP=0x000000010004df28
- (void)_receiveResponseFromNotification:(struct __CFUserNotification *)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010004dd54
- (void)tearDown;	// IMP=0x000000010004d980
- (id)_loginNotificationOptionsWithContext:(id)arg1 isSilent:(_Bool)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4;	// IMP=0x000000010004d31c
- (void)_locationNameWithLatitude:(id)arg1 longitude:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010004cf28
- (struct __CFUserNotification *)_loginAlertForAccount:(id)arg1 latitude:(id)arg2 longitude:(id)arg3 message:(id)arg4 resolvedBody:(id)arg5;	// IMP=0x000000010004ce3c
- (id)_loginAlertOptionsForAccount:(id)arg1 latitude:(id)arg2 longitude:(id)arg3 message:(id)arg4 resolvedBody:(id)arg5;	// IMP=0x000000010004ca7c
- (void)_waitForNotificationResponse:(struct __CFUserNotification *)arg1 withIdentifier:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010004c7dc
- (void)_showCode:(id)arg1 body:(id)arg2 notificationTitle:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010004c5f0
- (void)presentLoginNotificationWithCode:(id)arg1 piggy:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010004c308
- (void)_handleResult:(unsigned long long)arg1 forAccount:(id)arg2;	// IMP=0x000000010004c288
- (void)presentMessageWithAccount:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010004bbd4
- (id)initWithMessage:(id)arg1;	// IMP=0x000000010004bac4

@end

