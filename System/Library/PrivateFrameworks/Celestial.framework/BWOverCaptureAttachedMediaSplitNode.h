/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:23 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWAttachedMediaSplitNode.h>

@class BWNodeOutput;

@interface BWOverCaptureAttachedMediaSplitNode : BWAttachedMediaSplitNode {

	BWNodeOutput* _primaryFrameOutput;
	BWNodeOutput* _synchronizedSlaveFrameOutput;

}

@property (nonatomic,readonly) BWNodeOutput * primaryFrameOutput;                        //@synthesize primaryFrameOutput=_primaryFrameOutput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * synchronizedSlaveFrameOutput;              //@synthesize synchronizedSlaveFrameOutput=_synchronizedSlaveFrameOutput - In the implementation block
+(void)initialize;
-(void)dealloc;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)_setupAttachedMediaConfigurationForInput:(id)arg1 attachedMediaKey:(id)arg2 ;
-(void)_setupAttachedMediaConfigurationForOutput:(id)arg1 attachedMediaKey:(id)arg2 ;
-(void)_updateSynchronizedSlaveFrameEnabledWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)handleIrisReferenceMovieRequest:(id)arg1 forInput:(id)arg2 ;
-(id)initWithBackPressureExtraRetainBufferCount:(int)arg1 videoStitchingEnabled:(BOOL)arg2 ;
-(BWNodeOutput *)primaryFrameOutput;
-(BWNodeOutput *)synchronizedSlaveFrameOutput;
@end

