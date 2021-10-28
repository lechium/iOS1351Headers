/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ClockKitUI/CLKUIQuad.h>

@protocol MTLRenderPipelineState, MTLComputePipelineState;
@class CLKDevice;

@interface NTKPrideMetalQuad : CLKUIQuad {

	double _currentTime;
	double _renderUntil;
	id<MTLRenderPipelineState> _mtlPipelineState;
	id<MTLComputePipelineState> _mtlComputePipelineState;
	CLKDevice* _clkDevice;
	double _startTime;
	float _timeScale;

}

@property (assign,nonatomic) float timeScale;              //@synthesize timeScale=_timeScale - In the implementation block
-(void)dealloc;
-(double)currentTime;
-(float)timeScale;
-(void)setTimeScale:(float)arg1 ;
-(void)setupForQuadView:(id)arg1 ;
-(BOOL)prepareForTime:(double)arg1 ;
-(void)performOffscreenPassesWithCommandBuffer:(id)arg1 ;
-(void)renderForDisplayWithEncoder:(id)arg1 ;
-(id)clkDevice;
-(BOOL)preSemaphoreComputeForTime:(double)arg1 ;
-(id)renderPipelineManager;
-(id)vertexShaderName;
-(id)fragmentShaderName;
-(id)renderPipelineName;
-(BOOL)additiveBlendingEnabled;
-(void)renderWithEncoder:(id)arg1 ;
-(id)computePipelineManager;
-(id)computeShaderName;
-(void)loadMetalTexturesAndBuffersWithDevice:(id)arg1 ;
-(void)computeWithEncoder:(id)arg1 pipelineState:(id)arg2 ;
-(BOOL)postSemaphoreComputeForTime:(double)arg1 ;
-(id)initWithDevice:(id)arg1 initialSemaphoreCount:(int)arg2 ;
-(void)handleScreenOff;
@end
