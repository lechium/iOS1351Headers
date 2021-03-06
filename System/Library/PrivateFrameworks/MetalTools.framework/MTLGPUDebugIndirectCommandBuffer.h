/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsIndirectCommandBuffer.h>

@protocol MTLBuffer, MTLArgumentEncoder;
@interface MTLGPUDebugIndirectCommandBuffer : MTLToolsIndirectCommandBuffer {

	id<MTLBuffer> argumentBuffersStorage;
	id<MTLBuffer> argumentLengthsStorage;
	id<MTLBuffer> argumentGPUVAsStorage;
	BOOL _hasRender;
	BOOL _hasCompute;
	unsigned long long _argumentStride;
	unsigned long long _lengthStride;
	unsigned long long _virtualAddressStride;
	mutex _setBufferMutex;
	id<MTLArgumentEncoder> _argumentEncoder;

}
-(void)dealloc;
-(id)indirectRenderCommandAtIndex:(unsigned long long)arg1 ;
-(id)indirectComputeCommandAtIndex:(unsigned long long)arg1 ;
-(void)onExecuteWithRenderEncoder:(id)arg1 ;
-(id)initWithIndirectCommandBuffer:(id)arg1 descriptor:(id)arg2 maxCommandCount:(unsigned long long)arg3 resourceOptions:(unsigned long long)arg4 device:(id)arg5 ;
-(void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 forStage:(unsigned long long)arg4 commandIndex:(unsigned long long)arg5 ;
-(void)onExecuteWithComputeEncoder:(id)arg1 ;
@end

