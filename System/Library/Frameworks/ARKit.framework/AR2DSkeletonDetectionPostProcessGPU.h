/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTLDevice, MTLCommandQueue, MTLComputePipelineState, MTLBuffer;
#import <ARKit/ARKit-Structs.h>
@interface AR2DSkeletonDetectionPostProcessGPU : NSObject {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	id<MTLComputePipelineState> _pipelineStateInterpolate;
	id<MTLComputePipelineState> _pipelineStateMaxFilter;
	id<MTLBuffer> _input;
	id<MTLBuffer> _intermediate;
	id<MTLBuffer> _output;

}
-(id)init;
-(void)dealloc;
-(float*)process:(float*)arg1 counter:(unsigned*)arg2 shape:(CGSize)arg3 ;
-(void)_copyToInputAsFloat16:(float*)arg1 shape:(CGSize)arg2 ;
@end
