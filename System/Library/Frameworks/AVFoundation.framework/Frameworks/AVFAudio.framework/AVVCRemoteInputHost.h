/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:16 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFAudio/AVAudioRemoteInputPluginDelegate.h>

@protocol AVAudioRemoteInputPlugin;
@class NSMutableArray, AVVoiceController;

@interface AVVCRemoteInputHost : NSObject <AVAudioRemoteInputPluginDelegate> {

	NSMutableArray*<AVAudioRemoteInputPlugin> mPlugins;
	AVVoiceController* mMotherController;

}
-(void)dealloc;
-(void)inputPlugin:(id)arg1 didPublishDevice:(id)arg2 ;
-(void)inputPlugin:(id)arg1 didUnpublishDevice:(id)arg2 ;
-(id)initializePlugins;
-(void)invalidatePlugins;
-(id)allBundles:(id*)arg1 ;
-(id)findDeviceWithIdentifier:(id)arg1 ;
-(id)findFirstBluetoothDevice;
-(void)setParentVoiceController:(id)arg1 ;
@end
