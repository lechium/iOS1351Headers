/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:16 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFAudio/AVFAudio-Structs.h>
@interface AVVCSessionManager : NSObject {

	BOOL mShouldDuckOthers;
	BOOL mIsMiniDuckingEnabled;
	BOOL mShouldEnableMiniDucking;
	BOOL mShouldDisableMiniDucking;
	BOOL mSessionNeedsVolumeControl;
	BOOL mSessionNeedsRoutingControl;
	BOOL mSessionOutputIsWirelessSplitter;
	BOOL mIsOtherAudioPlaying;
	BOOL mRouteHasDoAPSupport;
	BOOL mOutputSupportsSWVolume;
	BOOL mDeviceIsIOSAccessory;
	BOOL mDeviceIsOlderWatch;
	unsigned mSessionActivationOptions;
	long long mPreviousActivationMode;

}
-(id)init;
-(int)setupOneTimeSessionSettings;
-(int)setSessionActivationContext:(id)arg1 ;
-(void)shouldEnableMiniDucking:(BOOL)arg1 ;
-(BOOL)isMiniDuckingEnabled;
-(void)getHypotheticalRouteAndUpdateStates;
-(int)setSessionCategoryModeOptionsForActivationMode:(long long)arg1 ;
-(int)setSessionAudioHWControlFlagsForActivationMode:(long long)arg1 ;
-(int)setSessionSampleRateForActivationMode:(long long)arg1 ;
-(int)setSessionBufferSizeForRecordingEngine:(AVVCRecordingEngine*)arg1 ;
-(void)changeDuckOthersOption:(BOOL)arg1 ;
-(BOOL)isSessionOutputInWirelessSplitterMode;
-(unsigned)getSessionActivationOptions;
-(void)setSessionActivationOptions:(unsigned)arg1 ;
-(BOOL)isAirplayOneOfTheOutputRoutes:(id)arg1 ;
@end

