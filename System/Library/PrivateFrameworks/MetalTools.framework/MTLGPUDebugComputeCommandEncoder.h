/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsComputeCommandEncoder.h>

@interface MTLGPUDebugComputeCommandEncoder : MTLToolsComputeCommandEncoder {

	MTLGPUDebugBufferArgumentData _buffers;
	unsigned _encoderID;
	unsigned _currentDispatchID;
	unsigned long long _currentPipelineID;

}
-(void)setComputePipelineState:(id)arg1 ;
-(void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)dispatchThreadgroups:(SCD_Struct_MT68)arg1 threadsPerThreadgroup:(SCD_Struct_MT68)arg2 ;
-(void)endEncoding;
-(void)dispatchThreadgroupsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 threadsPerThreadgroup:(SCD_Struct_MT68)arg3 ;
-(void)dispatchThreads:(SCD_Struct_MT68)arg1 threadsPerThreadgroup:(SCD_Struct_MT68)arg2 ;
-(void)setBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)dispatchThreadsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 ;
-(void)onDispatch;
-(id)initWithComputeCommandEncoder:(id)arg1 parent:(id)arg2 encoderID:(unsigned)arg3 ;
@end

