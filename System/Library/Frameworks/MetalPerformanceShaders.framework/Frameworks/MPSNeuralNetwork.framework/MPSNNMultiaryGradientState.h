/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSCore/MPSState.h>

@protocol MPSNNPadding;
@interface MPSNNMultiaryGradientState : MPSState {

	unsigned long long _srcCount;
	NNKernelSourceParams* _srcInfo;
	MPSImageCoordinate* _srcSizes;
	SCD_Struct_MP4 _clipRect;
	MPSImageCoordinate _destSize;
	unsigned long long _destFeatureChannels;
	unsigned long long _destinationFeatureChannelOffset;
	id<MPSNNPadding> _padding;
	unsigned long long _maxBatchSize;
	BOOL _isBackwards;
	BOOL _initOnce;
	unsigned _provenance;

}
-(void)dealloc;
-(id)initWithSourceCount:(unsigned long long)arg1 ;
@end

