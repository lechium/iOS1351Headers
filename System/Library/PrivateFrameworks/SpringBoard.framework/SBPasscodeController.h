/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class SBPasscodeAlertItem, NSString, SBPasscodeComplianceAlertItem, NSDate, NSObject;

@interface SBPasscodeController : NSObject {

	SBPasscodeAlertItem* _passcodeAlertItem;
	int _mode;
	NSString* _previousPasscode;
	NSString* _newPasscode;
	int _unlockScreenType;
	int _simplePasscodeType;
	SBPasscodeComplianceAlertItem* _complianceAlertItem;
	NSDate* _forcedComplianceDate;
	id _manageConfigurationEffectiveSettingsObserver;
	id _telephonyNotificationObserver;
	int _restoreCompletedAlertStateChangedToken;
	BOOL _delayedComplianceAlertUntilAfterRestoreCompletedAlert;
	NSObject*<OS_dispatch_queue> _passcodeComplianceQueue;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_passwordEntered:(id)arg1 ;
-(void)_abort;
-(void)_userWantsToComplyNow:(BOOL)arg1 ;
-(void)_startListeningToManagedConfigurationNotification;
-(void)_stopListeningToManagedConfigurationNotification;
-(void)_fetchAndSetUnlockScreenTypeForNewPasscode:(BOOL)arg1 ;
-(void)_presentPasscodeAlertItemWithMode:(int)arg1 alertItemErrorString:(id)arg2 unlockScreenType:(int)arg3 ;
-(void)_stopListeningToRestoreCompletedAlertStateChangedNotifications;
-(void)checkPasscodeCompliance;
-(void)forceUserToChangePasscode;
-(void)_stopListeningToTelephonyNotifications;
-(void)_didEndCall;
-(BOOL)_isRestoreCompletedAlertActive;
-(void)_activateComplianceAlert;
-(void)_startListeningToTelephonyNotifications;
-(void)_startListeningToRestoreCompletedAlertStateChangedNotifications;
@end

