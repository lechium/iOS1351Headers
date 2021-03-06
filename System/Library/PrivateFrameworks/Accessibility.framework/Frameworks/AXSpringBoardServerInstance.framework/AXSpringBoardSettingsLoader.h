/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXSpringBoardServerInstance.framework/AXSpringBoardServerInstance
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AXSpringBoardServerInstance/AXSpringBoardServerInstance-Structs.h>
#import <AXSpringBoardServerInstance/AXSBVoiceOverSwipeDetectorDelegate.h>
#import <libobjc.A.dylib/AVSpeechSynthesizerDelegate.h>
#import <AXSpringBoardServerInstance/AXUIClientDelegate.h>

@class UIWindow, AXAccessQueueTimer, AXDispatchTimer, NSString;

@interface AXSpringBoardSettingsLoader : NSObject <AXSBVoiceOverSwipeDetectorDelegate, AVSpeechSynthesizerDelegate, AXUIClientDelegate> {

	UIWindow* _voiceOverVibrateWindow;
	AXAccessQueueTimer* _voiceOverActivationCanceler;
	AXDispatchTimer* _managedConfigurationNotificationCoalesceTimer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)_registerForNotifications;
+(void)_setVoiceOverTouchSettings:(unsigned char)arg1 ;
+(void)_checkContrastSetting;
+(void)_checkAccessibilityOptionsSetByiTunes;
+(void)_checkVoiceOverTouchSetByiTunes;
+(void)_checkZoomTouchSetByiTunes;
+(void)_checkInvertColorsSetByiTunes;
+(void)_checkMonoAudioSetByiTunes;
+(void)_checkSpeakAutofillSetByiTunes;
+(void)_checkClosedCaptioningSetByiTunes;
+(void)_checkAssistiveTouchSetByiTunes;
+(void)_updateAXSettings;
+(void)_updateSpringBoardHelper;
+(void)_initializeDelayedSpringBoardSettings;
+(void)_checkForDataResetFile;
+(void)_findNoteFromLoginSessionWithCompletion:(/*^block*/id)arg1 ;
+(void)bootstrapGuidedAccessIfNeeded;
+(void)_registerForHomeButtonBreakage;
+(void)_performValidations;
+(void)_setRebootedGracefullyOnce;
+(BOOL)_alreadyRebootedGracefullyOnce;
+(void)_startAssistiveTouchForBrokenHomeButton;
+(void)_gracefulRebootForBrokenHomeButton;
+(void)_registerForHomeButtonBreakageNotification;
+(void)_checkForHomeButtonBreakage:(BOOL)arg1 ;
+(void)checkScreenContrast;
+(void)checkAccessibilityOptions;
-(id)init;
-(void)dealloc;
-(void)_reachabilityChanged:(id)arg1 ;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1 ;
-(void)swipeDetectorDetectedSwipe;
-(void)swipeDetectorCanceled;
-(void)_updateAXSettings;
-(void)_initializeRemoteSettingsListener;
-(void)_handleGuidedAccessManagedConfigurationDidChange:(id)arg1 ;
-(void)_bootstrapUltron;
-(void)_startupUltronUIServer;
-(void)_turnOnControlCenterModule;
-(BOOL)_isDeviceAffectedByVOActivationWorkaround;
-(void)_remoteAccessibilitySettingsChanged:(id)arg1 ;
-(void)_updateRemoteAccessibilitySettings;
-(void)_hideVoiceOverEnabler;
-(void)_playVOActivationSoundEnded;
-(void)_playVOActivationSoundStarted;
-(void)_voiceOverEnabled:(id)arg1 ;
-(void)_makeVoiceOverVibrateWindow;
-(void)_showSwipeDetectionEnablerView;
-(void)_showVibrationVoiceOverEnablerView;
-(void)_registerReachability;
@end

