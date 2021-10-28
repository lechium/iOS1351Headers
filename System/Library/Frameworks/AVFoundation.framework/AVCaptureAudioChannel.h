/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:52 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AVCaptureAudioChannelInternal;

@interface AVCaptureAudioChannel : NSObject {

	AVCaptureAudioChannelInternal* _internal;
	BOOL _enabled;
	float _volume;

}

@property (nonatomic,readonly) float averagePowerLevel; 
@property (nonatomic,readonly) float peakHoldLevel; 
@property (assign,nonatomic) float volume;                               //@synthesize volume=_volume - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)initWithConnection:(id)arg1 ;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(float)averagePowerLevel;
-(float)peakHoldLevel;
@end
