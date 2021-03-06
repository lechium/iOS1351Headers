/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsCommandBuffer.h>

@class MTLTelemetryDevice;

@interface MTLTelemetryCommandBuffer : MTLToolsCommandBuffer {

	MTLTelemetryEncoderCountRec* encoderCount;
	MTLTelemetryStatisticUIRec* attachmentCount;
	MTLTelemetryStatisticUIRec* textureBindCount;
	MTLTelemetryStatisticUIRec* parallellRenderEncoderDistribution;
	MTLTelemetryStatisticUIRec* renderTargetArrayLengthDistribution;
	MTLTelemetryViewportDistributionRec* viewportDistribution;
	MTLTelemetryScissorRectDistributionRec* scissorRectDistribution;
	MTLTelemetryDrawDistributionRec* drawDistribution;
	MTLTelemetryDispatchDistributionRec* dispatchDistribution;
	unsigned cbDraws;
	unsigned cbDispatches;
	unsigned cbBlits;
	unsigned cbMemoryBarriers;
	MTLTelemetryStatisticUIRec* renderEncoderDrawCallDistribution;
	MTLTelemetryStatisticUIRec* computeEncoderDispatchDistribution;
	MTLTelemetryStatisticUIRec* blitEncoderBlitDistribution;
	unordered_map<MTLPixelFormat, MTLTelemetryRenderTargetDistribution, std::__1::hash<unsigned long long>, std::__1::equal_to<MTLPixelFormat>, std::__1::allocator<std::__1::pair<const MTLPixelFormat, MTLTelemetryRenderTargetDistribution> > >* renderTargetMap;
	unordered_map<MTLPixelFormat, MTLTelemetryBlitDistribution, std::__1::hash<unsigned long long>, std::__1::equal_to<MTLPixelFormat>, std::__1::allocator<std::__1::pair<const MTLPixelFormat, MTLTelemetryBlitDistribution> > >* blitMap;
	MTLTelemetryAnisoClippedCountsRec* anisoClippedCounts;
	unsigned depthClipModeClampCount;
	MTLTelemetryDevice* _telemetryDevice;
	MTLTelemetryKernelStateRec _initKernelState;

}
-(void)dealloc;
-(id)computeCommandEncoder;
-(void)commit;
-(id)blitCommandEncoder;
-(id)renderCommandEncoderWithDescriptor:(id)arg1 ;
-(id)parallelRenderCommandEncoderWithDescriptor:(id)arg1 ;
-(id)initWithCommandBuffer:(id)arg1 commandQueue:(id)arg2 ;
-(void)initDistributions;
-(void)mergeDistributions;
@end

