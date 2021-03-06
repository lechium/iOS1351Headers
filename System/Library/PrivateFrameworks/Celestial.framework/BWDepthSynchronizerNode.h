/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:23 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class NSMutableArray, BWNodeInput, BWNodeError;

@interface BWDepthSynchronizerNode : BWNode {

	int _numEODMessagesReceived;
	NSMutableArray* _imageBufferQueue;
	NSMutableArray* _depthBufferQueue;
	int _maxQueueDepth;
	int _lastEmittedFrameCaptureID;
	int _lastReceivedImageID;
	int _lastReceivedDepthID;
	int _imageIDWrapAroundCounter;
	int _depthIDWrapAroundCounter;
	BOOL _discardsDegradedDepthBuffers;
	BOOL _separateDepthComponentsEnabled;
	BWNodeInput* _imageInput;
	BWNodeInput* _depthInput;
	BOOL _streaming;
	BWNodeError* _errorForImageInput;
	BWNodeError* _errorForDepthInput;
	os_unfair_lock_s _bufferServicingLock;

}

@property (readonly) BWNodeInput * imageInput;                               //@synthesize imageInput=_imageInput - In the implementation block
@property (readonly) BWNodeInput * depthInput;                               //@synthesize depthInput=_depthInput - In the implementation block
@property (assign,nonatomic) BOOL discardsDegradedDepthBuffers; 
+(void)initialize;
-(void)dealloc;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 forInput:(id)arg2 ;
-(void)_tryToEmitBuffers;
-(void)_setupDepthMediaConfigurationForOutput:(id)arg1 inputAttachedMediaKey:(id)arg2 outputAttachedMediaKey:(id)arg3 ;
-(BOOL)_isDepthExpectedForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)_frameCaptureID:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)_attachDepthDataToSampleBufferOrReportDepthMissing:(opaqueCMSampleBufferRef)arg1 isDepthMissing:(BOOL*)arg2 ;
-(void)_cleanupDepthBufferQueue;
-(id)initForStreaming:(BOOL)arg1 separateDepthComponentsEnabled:(BOOL)arg2 ;
-(void)setDiscardsDegradedDepthBuffers:(BOOL)arg1 ;
-(BOOL)discardsDegradedDepthBuffers;
-(id)_bufferArrayToString:(id)arg1 ;
-(BWNodeInput *)imageInput;
-(BWNodeInput *)depthInput;
@end

