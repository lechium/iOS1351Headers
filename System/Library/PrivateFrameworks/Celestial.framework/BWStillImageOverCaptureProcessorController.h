/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:25 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWStillImageProcessorController.h>
#import <libobjc.A.dylib/BWStillImageOverCaptureProcessorInputDelegate.h>

@class BWStillImageOverCaptureProcessorControllerConfiguration, NSSet, FigStateMachine, FigStillStereoStitchingProcessor, NSMutableArray, BWStillImageOverCaptureProcessorRequest, NSString;

@interface BWStillImageOverCaptureProcessorController : BWStillImageProcessorController <BWStillImageOverCaptureProcessorInputDelegate> {

	BWStillImageOverCaptureProcessorControllerConfiguration* _configuration;
	NSSet* _supportedPortTypes;
	FigStateMachine* _stateMachine;
	FigStillStereoStitchingProcessor* _processor;
	OpaqueVTPixelTransferSessionRef _pixelTransferSession;
	opaqueCMFormatDescriptionRef _outputSbufFormatDescription;
	NSMutableArray* _requestQueue;
	BWStillImageOverCaptureProcessorRequest* _currentRequest;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(unsigned long long)type;
-(id)initWithConfiguration:(id)arg1 ;
-(void)_process;
-(void)cancelProcessing;
-(int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2 ;
-(id)_processorOptions;
-(void)_resetProcessor;
-(void)_updateStateIfNeeded;
-(void)_serviceNextRequest;
-(void)_setupProcessor;
-(void)input:(id)arg1 addFrame:(opaqueCMSampleBufferRef)arg2 ;
-(int)_loadAndConfigureStereoStitcherProcessor;
-(int)_processDualCameraStereoStitchingWithOutputSampleBuffer:(opaqueCMSampleBufferRef)arg1 primaryImageZoomCropRect:(CGRect)arg2 overCaptureImageTypeOut:(int*)arg3 overCaptureImageConfidenceScoreOut:(unsigned*)arg4 ;
-(int)_processSingleCameraOverCaptureWithOutputSampleBuffer:(opaqueCMSampleBufferRef)arg1 primaryImageZoomCropRect:(CGRect)arg2 overCaptureImageTypeOut:(int*)arg3 overCaptureImageConfidenceScoreOut:(unsigned*)arg4 ;
-(BOOL)_horizonLinePresentInSampleBuffer:(opaqueCMSampleBufferRef)arg1 horizonLineAngleInDegreesOut:(float*)arg2 horizonLineVerticalCenterlineIntersectionOut:(float*)arg3 ;
-(void)_addOverCaptureImageMetadataToSampleBuffer:(opaqueCMSampleBufferRef)arg1 metadata:(id)arg2 ;
-(int)_scaleInputPixelBuffer:(CVBufferRef)arg1 inputRect:(CGRect)arg2 outputPixelBuffer:(CVBufferRef)arg3 outputDimensions:(SCD_Struct_BW19)arg4 ;
-(int)_generatePartialOverCaptureImageFromInputPixelBuffer:(CVBufferRef)arg1 outputPixelBuffer:(CVBufferRef)arg2 primaryImageZoomCropRect:(CGRect)arg3 validBufferRect:(CGRect)arg4 ;
-(int)_generateFallbackOverCaptureImageWithWide:(opaqueCMSampleBufferRef)arg1 narrowSbuf:(opaqueCMSampleBufferRef)arg2 outputSbuf:(opaqueCMSampleBufferRef)arg3 primaryImageZoomCropRect:(CGRect)arg4 onlyCrop:(BOOL)arg5 ;
-(float)_zoomAdjustedHorizonLineVerticalCenterlineIntersection:(float)arg1 finalCropRect:(CGRect)arg2 ;
@end

