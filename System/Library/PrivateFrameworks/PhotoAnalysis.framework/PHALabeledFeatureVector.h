/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:12 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PHAMutableFloatArray;

@interface PHALabeledFeatureVector : NSObject {

	float _label;
	float _labelForTensor;
	PHAMutableFloatArray* _featureVector;

}

@property (nonatomic,readonly) float labelForTensor;                              //@synthesize labelForTensor=_labelForTensor - In the implementation block
@property (nonatomic,readonly) PHAMutableFloatArray * featureVector;              //@synthesize featureVector=_featureVector - In the implementation block
@property (nonatomic,readonly) float label;                                       //@synthesize label=_label - In the implementation block
-(float)label;
-(id)initWithFeatureVector:(id)arg1 label:(long long)arg2 ;
-(float*)_getLabelPointer;
-(PHAMutableFloatArray *)featureVector;
-(float)labelForTensor;
@end
