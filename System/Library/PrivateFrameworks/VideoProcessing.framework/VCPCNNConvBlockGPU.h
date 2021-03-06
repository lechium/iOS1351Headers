/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPCNNConvBlock.h>

@class MPSCNNConvolution;

@interface VCPCNNConvBlockGPU : VCPCNNConvBlock {

	float* _batchNormMean;
	float* _batchNormVar;
	float* _batchNormGamma;
	float* _batchNormBeta;
	MPSCNNConvolution* _mpsConv;

}
-(void)dealloc;
-(int)forward;
-(void)releaseBatchNormMemory;
-(int)readFromDisk:(_sFILE*)arg1 quantFactor:(short)arg2 ;
-(int)readBatchNormParam:(_sFILE*)arg1 quantFactor:(short)arg2 ;
-(int)fillConvWeightsGPU;
-(int)gpuForward;
@end

