/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SNVGGFeatureExtractorConfiguration, MLModel, NSArray;

@interface SNVGGBasedDetectorConfiguration : NSObject {

	SNVGGFeatureExtractorConfiguration* _featureExtractorConfiguration;
	MLModel* _model;
	Class _observationClass;
	NSArray* _outputLabels;

}

@property (nonatomic,readonly) SNVGGFeatureExtractorConfiguration * featureExtractorConfiguration;              //@synthesize featureExtractorConfiguration=_featureExtractorConfiguration - In the implementation block
@property (nonatomic,readonly) MLModel * model;                                                                 //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) Class observationClass;                                                          //@synthesize observationClass=_observationClass - In the implementation block
@property (nonatomic,readonly) NSArray * outputLabels;                                                          //@synthesize outputLabels=_outputLabels - In the implementation block
-(MLModel *)model;
-(NSArray *)outputLabels;
-(SNVGGFeatureExtractorConfiguration *)featureExtractorConfiguration;
-(id)initWithMLModel:(id)arg1 observationClass:(Class)arg2 outputLabels:(id)arg3 ;
-(Class)observationClass;
@end

