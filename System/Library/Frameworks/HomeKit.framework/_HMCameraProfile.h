/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:29 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/_HMAccessoryProfile.h>

@class _HMCameraStreamControl, _HMCameraSnapshotControl, _HMCameraSettingsControl, _HMCameraAudioControl, HMCameraUserSettings, HMCameraClipManager, NSArray;

@interface _HMCameraProfile : _HMAccessoryProfile {

	_HMCameraStreamControl* _streamControlInternal;
	_HMCameraSnapshotControl* _snapshotControlInternal;
	_HMCameraSettingsControl* _settingsControl;
	_HMCameraAudioControl* _speakerControl;
	_HMCameraAudioControl* _microphoneControl;
	HMCameraUserSettings* _userSettings;
	HMCameraClipManager* _clipManager;

}

@property (copy,readonly) NSArray * controls; 
@property (retain) HMCameraUserSettings * userSettings;                               //@synthesize userSettings=_userSettings - In the implementation block
@property (retain) HMCameraClipManager * clipManager;                                 //@synthesize clipManager=_clipManager - In the implementation block
@property (readonly) _HMCameraStreamControl * streamControlInternal;                  //@synthesize streamControlInternal=_streamControlInternal - In the implementation block
@property (readonly) _HMCameraSnapshotControl * snapshotControlInternal;              //@synthesize snapshotControlInternal=_snapshotControlInternal - In the implementation block
@property (readonly) _HMCameraSettingsControl * settingsControl;                      //@synthesize settingsControl=_settingsControl - In the implementation block
@property (readonly) _HMCameraAudioControl * speakerControl;                          //@synthesize speakerControl=_speakerControl - In the implementation block
@property (readonly) _HMCameraAudioControl * microphoneControl;                       //@synthesize microphoneControl=_microphoneControl - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HMCameraUserSettings *)userSettings;
-(NSArray *)controls;
-(void)_registerNotificationHandlers;
-(_HMCameraSettingsControl *)settingsControl;
-(HMCameraClipManager *)clipManager;
-(void)_createControls:(id)arg1 ;
-(_HMCameraStreamControl *)streamControlInternal;
-(_HMCameraSnapshotControl *)snapshotControlInternal;
-(_HMCameraAudioControl *)microphoneControl;
-(_HMCameraAudioControl *)speakerControl;
-(void)__configureWithContext:(id)arg1 accessory:(id)arg2 ;
-(void)setClipManager:(HMCameraClipManager *)arg1 ;
-(void)setUserSettings:(HMCameraUserSettings *)arg1 ;
-(void)addUserSettings:(id)arg1 ;
-(void)deleteAllClipsWithCompletionHandler:(/*^block*/id)arg1 ;
@end

