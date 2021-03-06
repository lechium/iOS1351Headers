/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:25 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWStillImageProcessorInput.h>

@protocol BWStillImageOverCaptureProcessorInputDelegate;
@interface BWStillImageOverCaptureProcessorInput : BWStillImageProcessorInput {

	id<BWStillImageOverCaptureProcessorInputDelegate> _delegate;
	opaqueCMSampleBufferRef _wideFieldOfViewFrame;
	opaqueCMSampleBufferRef _narrowFieldOfViewFrame;
	int _overCaptureMode;
	BOOL _receivedAllFrames;
	int _receivedFrames;

}

@property (nonatomic,retain) id<BWStillImageOverCaptureProcessorInputDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) opaqueCMSampleBufferRef wideFieldOfViewFrame;                          //@synthesize wideFieldOfViewFrame=_wideFieldOfViewFrame - In the implementation block
@property (nonatomic,readonly) opaqueCMSampleBufferRef narrowFieldOfViewFrame;                        //@synthesize narrowFieldOfViewFrame=_narrowFieldOfViewFrame - In the implementation block
@property (nonatomic,readonly) int receivedFrames;                                                    //@synthesize receivedFrames=_receivedFrames - In the implementation block
@property (nonatomic,readonly) BOOL receivedAllFrames;                                                //@synthesize receivedAllFrames=_receivedAllFrames - In the implementation block
@property (nonatomic,readonly) int overCaptureMode;                                                   //@synthesize overCaptureMode=_overCaptureMode - In the implementation block
-(void)dealloc;
-(id<BWStillImageOverCaptureProcessorInputDelegate>)delegate;
-(void)setDelegate:(id<BWStillImageOverCaptureProcessorInputDelegate>)arg1 ;
-(int)receivedFrames;
-(void)addFrame:(opaqueCMSampleBufferRef)arg1 ;
-(int)overCaptureMode;
-(BOOL)receivedAllFrames;
-(id)initWithSettings:(id)arg1 captureSettings:(id)arg2 ;
-(opaqueCMSampleBufferRef)wideFieldOfViewFrame;
-(opaqueCMSampleBufferRef)narrowFieldOfViewFrame;
@end

