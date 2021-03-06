/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityPhysicalInteraction.framework/AccessibilityPhysicalInteraction
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <AccessibilityPhysicalInteraction/AccessibilityPhysicalInteraction-Structs.h>
@class NSObject;

@interface AXPISystemActionHelper : NSObject {

	IOHIDUserDeviceRef _homeButtonUserDevice;
	unsigned long long _sysdiagnoseCancelCount;
	NSObject*<OS_dispatch_queue> _sysdiagnoseCancelCountQueue;

}
+(id)sharedInstance;
-(id)init;
-(void)toggleNotificationCenter;
-(void)rebootDevice;
-(void)takeScreenshot;
-(void)toggleReachability;
-(void)activateSOSMode;
-(void)armApplePay;
-(void)toggleDock;
-(void)toggleSpotlight;
-(void)revealSpotlight;
-(void)adjustSystemZoom:(long long)arg1 ;
-(void)increaseVolume;
-(void)decreaseVolume;
-(void)toggleMute;
-(void)warm;
-(void)pressHomeButtonDown;
-(void)liftHomeButtonUp;
-(void)_handleHomeButtonDispatch:(BOOL)arg1 ;
-(void)pressLockButtonDown;
-(void)liftLockButtonUp;
-(void)_sendButtonEvent:(unsigned)arg1 ;
-(void)pressVolumeDownButtonDown;
-(void)liftVolumeDownButtonUp;
-(void)pressVolumeUpButtonDown;
-(void)liftVolumeUpButtonUp;
-(void)_sendShakeEvent;
-(void)_sendDeviceOrientationChange:(int)arg1 ;
-(void)activateSiri;
-(void)activateVoiceControl;
-(void)activateHomeButton;
-(void)toggleCommandAndControl;
-(void)toggleAppSwitcher;
-(void)activateLockButton;
-(void)toggleRingerSwitch:(BOOL)arg1 ;
-(void)activateTripleClick;
-(void)shake;
-(void)toggleControlCenter;
-(void)rotatePortrait;
-(void)rotateUpsideDown;
-(void)rotateLeft;
-(void)rotateRight;
-(void)performSysdiagnoseWithStatusUpdateHandler:(/*^block*/id)arg1 ;
-(void)_showAlertForReboot;
@end

