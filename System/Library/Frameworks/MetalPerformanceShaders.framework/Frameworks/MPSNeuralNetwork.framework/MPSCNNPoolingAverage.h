/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNPooling.h>

@interface MPSCNNPoolingAverage : MPSCNNPooling {

	unsigned long long _zeroPadSizeX;
	unsigned long long _zeroPadSizeY;

}

@property (assign,nonatomic) unsigned long long zeroPadSizeX;              //@synthesize zeroPadSizeX=_zeroPadSizeX - In the implementation block
@property (assign,nonatomic) unsigned long long zeroPadSizeY;              //@synthesize zeroPadSizeY=_zeroPadSizeY - In the implementation block
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 strideInPixelsX:(unsigned long long)arg4 strideInPixelsY:(unsigned long long)arg5 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(BOOL)isResultStateReusedAcrossBatch;
-(unsigned long long)zeroPadSizeX;
-(void)setZeroPadSizeX:(unsigned long long)arg1 ;
-(unsigned long long)zeroPadSizeY;
-(void)setZeroPadSizeY:(unsigned long long)arg1 ;
-(id)newPlugin;
-(BOOL)pluginSupportsBatchEncode;
@end

