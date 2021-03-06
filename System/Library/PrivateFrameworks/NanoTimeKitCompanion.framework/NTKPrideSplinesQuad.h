/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKPrideMetalQuad.h>

@protocol MTLBuffer, MTLTexture, OS_dispatch_queue;
@class NTKPrideTouchCrownHandler, NSObject;

@interface NTKPrideSplinesQuad : NTKPrideMetalQuad {

	NTKPrideTouchCrownHandler* _touchCrownHandler;
	BOOL _paused;
	BOOL _forceRenderSticky;
	BOOL _forceRenderOnce;
	BOOL _startWavesAtNextRender;
	BOOL _controlPointsNeedUpdate;
	id<MTLBuffer> _mtlSplinesBuffers[3];
	unsigned short _currentBufferIndex;
	int _mtlSamplePositionBufferWidth;
	id<MTLTexture> _mtlSamplePositionTexture;
	id<MTLTexture> _mtlVignetteTex;
	int _mtlComputeBufferWidth;
	id<MTLBuffer> _mtlComputeInputBuffer;
	id<MTLTexture> _mtlComputeInputTexture;
	id<MTLTexture> _mtlComputeOutputTexture;
	 _size;
	NSObject*<OS_dispatch_queue> _highPriorityQueue;
	CGSize _frameBufferSize;
	BOOL _snapshotting;
	float _fadeMultiplier;
	float _amplitudeMultiplier;

}

@property (readonly) NTKPrideTouchCrownHandler * touchCrownHandler; 
@property (readonly) id<MTLBuffer> currentSplinesBuffer; 
@property (readonly) id<MTLBuffer> currentComputeBuffer; 
@property (readonly) int currentComputeBufferWidth; 
@property (readonly) NSObject*<OS_dispatch_queue> highPriorityQueue; 
@property (assign,nonatomic) float fadeMultiplier;                                //@synthesize fadeMultiplier=_fadeMultiplier - In the implementation block
@property (assign,nonatomic) float amplitudeMultiplier;                           //@synthesize amplitudeMultiplier=_amplitudeMultiplier - In the implementation block
-(void)dealloc;
-(id)snapshot;
-(void)handleSingleTap:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)highPriorityQueue;
-(int)numSplines;
-(float)computeAmplitudeForControlPoint:(int)arg1 inSpline:(int)arg2 atTime:(double)arg3 ;
-(2)noiseSamplePositionForControlPoint:(int)arg1 inSpline:(int)arg2 ;
-(int)numSplinesToDraw;
-(/*^block*/id)getNTKPrideSplineDefinitionFiller;
-(BOOL)preSemaphoreComputeForTime:(double)arg1 ;
-(id)fragmentShaderName;
-({?=}*)noiseConfiguration;
-(int)splineDrawOrder:(int)arg1 ;
-(void)renderWithEncoder:(id)arg1 ;
-(id)computeShaderName;
-(void)loadMetalTexturesAndBuffersWithDevice:(id)arg1 ;
-(void)computeWithEncoder:(id)arg1 pipelineState:(id)arg2 ;
-(BOOL)postSemaphoreComputeForTime:(double)arg1 ;
-(id)initWithDevice:(id)arg1 touchCrownHandler:(id)arg2 ;
-(void)clearWaves;
-(void)setControlPointsNeedUpdate;
-(void)startWavesAtNextRender;
-(float)combinedAmplitudeForControlPointAtPosition:(float)arg1 currentTime:(float)arg2 ;
-(NTKPrideTouchCrownHandler *)touchCrownHandler;
-(BOOL)shouldForceRender;
-(float)fadeMultiplier;
-(int)numControlPointsPerSpline;
-(int)numVertsForSpline:(int)arg1 ;
-(float)interpolationStepSizeForSpline:(int)arg1 ;
-(float)vignetteAmount;
-(id)generateVignetteTextureData;
-(void)generateControlPointsForSpline:(int)arg1 ;
-(float)globalAmplitudeForTime:(double)arg1 ;
-(void)startWavesAtTime:(double)arg1 ;
-(void)setAmplitude:(float)arg1 forControlPoint:(int)arg2 ofSpline:(int)arg3 ;
-(float)ampltiudeForControlPoint:(int)arg1 ofSpline:(int)arg2 ;
-(void)setNoise:(int)arg1 forControlPoint:(int)arg2 ;
-(BOOL)forceRender;
-(void)setFadeMultiplier:(float)arg1 ;
-(void)setIgnoresStrumAndTap:(BOOL)arg1 ;
-(void)forceRenderOnce;
-(id)snapshotWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(id)snapshotWithScale:(double)arg1 ;
-(void)strumToOffset:(double)arg1 withVelocity:(double)arg2 ;
-(void)setPreviousCrownIndex:(int)arg1 ;
-(int)maxVertsPerSpline;
-(id)_generateInterpolationPositions;
-(id<MTLBuffer>)currentSplinesBuffer;
-(id<MTLBuffer>)currentComputeBuffer;
-(int)currentComputeBufferWidth;
-(void)setAmplitudeMultiplier:(float)arg1 ;
-(float)amplitudeMultiplier;
@end

