/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@protocol MPSNNLossCallback;
@class MPSCNNLossDescriptor;

@interface MPSNNForwardLossNode : MPSNNFilterNode {

	unsigned _lossType;
	int _reductionType;
	float _weight;
	float _labelSmoothing;
	unsigned long long _numberOfClasses;
	float _epsilon;
	float _delta;
	MPSCNNLossDescriptor* _descriptor;
	id<MPSNNLossCallback> _propertyCallBack;

}

@property (nonatomic,readonly) unsigned lossType;                                 //@synthesize lossType=_lossType - In the implementation block
@property (nonatomic,readonly) int reductionType;                                 //@synthesize reductionType=_reductionType - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfClasses;                //@synthesize numberOfClasses=_numberOfClasses - In the implementation block
@property (nonatomic,readonly) float weight;                                      //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) float labelSmoothing;                              //@synthesize labelSmoothing=_labelSmoothing - In the implementation block
@property (nonatomic,readonly) float epsilon;                                     //@synthesize epsilon=_epsilon - In the implementation block
@property (nonatomic,readonly) float delta;                                       //@synthesize delta=_delta - In the implementation block
@property (nonatomic,retain) id<MPSNNLossCallback> propertyCallBack;              //@synthesize propertyCallBack=_propertyCallBack - In the implementation block
+(id)nodeWithSource:(id)arg1 labels:(id)arg2 weights:(id)arg3 lossDescriptor:(id)arg4 ;
+(id)nodeWithSource:(id)arg1 labels:(id)arg2 lossDescriptor:(id)arg3 ;
+(id)nodeWithSources:(id)arg1 lossDescriptor:(id)arg2 ;
-(void)dealloc;
-(float)epsilon;
-(float)weight;
-(unsigned long long)numberOfClasses;
-(unsigned)lossType;
-(float)delta;
-(FilterGraphNode*)newFilterNode;
-(id)gradientFilterWithSource:(id)arg1 ;
-(Class)gradientClass;
-(id)gradientFilterWithSources:(id)arg1 ;
-(id)gradientFiltersWithSources:(id)arg1 ;
-(id)initWithSource:(id)arg1 labels:(id)arg2 weights:(id)arg3 lossDescriptor:(id)arg4 ;
-(int)reductionType;
-(float)labelSmoothing;
-(id)gradientFiltersWithSource:(id)arg1 ;
-(id)initWithSource:(id)arg1 labels:(id)arg2 lossDescriptor:(id)arg3 ;
-(id)initWithSources:(id)arg1 lossDescriptor:(id)arg2 ;
-(id<MPSNNLossCallback>)propertyCallBack;
-(void)setPropertyCallBack:(id<MPSNNLossCallback>)arg1 ;
@end

