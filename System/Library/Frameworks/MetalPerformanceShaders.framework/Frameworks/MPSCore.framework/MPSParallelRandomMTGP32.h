/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:24 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSCore/MPSParallelRandom.h>

@protocol MTLBuffer;
@interface MPSParallelRandomMTGP32 : MPSParallelRandom {

	id<MTLBuffer> _state;
	id<MTLBuffer> _pShift1;
	id<MTLBuffer> _pShift2;
	id<MTLBuffer> _pMR;
	id<MTLBuffer> _pMT;
	id<MTLBuffer> _pM;
	id<MTLBuffer> _pStateIdx;
	float _bernoulliParameter;
	float _uniformMin;
	float _uniformMax;

}
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 computeEncoder:(id)arg2 destinationBuffer:(id)arg3 destinationOffset:(unsigned long long)arg4 numEntries:(unsigned long long)arg5 ;
-(id)initWithDevice:(id)arg1 destinationDataType:(unsigned)arg2 seed:(unsigned long long)arg3 distributionDescriptor:(id)arg4 ;
-(id)initWithDevice:(id)arg1 destinationDataType:(unsigned)arg2 seed:(unsigned long long)arg3 ;
-(void)resetSeedOnCommandBuffer:(id)arg1 seed:(unsigned long long)arg2 ;
-(void)synchronizeStateOnCommandBuffer:(id)arg1 ;
@end

