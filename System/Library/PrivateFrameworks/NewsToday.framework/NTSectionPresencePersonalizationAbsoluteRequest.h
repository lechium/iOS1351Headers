/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:04 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NTAbsolutePersonalizedSectionPresenceConfig;
@class FCPersonalizationFeature, NSObject;

@interface NTSectionPresencePersonalizationAbsoluteRequest : NSObject <NSCopying> {

	FCPersonalizationFeature* _feature;
	double _featureClickPrior;
	double _featureImpressionPrior;
	NSObject*<NTAbsolutePersonalizedSectionPresenceConfig> _absolutePresenceConfig;

}

@property (nonatomic,copy) FCPersonalizationFeature * feature;                                                         //@synthesize feature=_feature - In the implementation block
@property (assign,nonatomic) double featureClickPrior;                                                                 //@synthesize featureClickPrior=_featureClickPrior - In the implementation block
@property (assign,nonatomic) double featureImpressionPrior;                                                            //@synthesize featureImpressionPrior=_featureImpressionPrior - In the implementation block
@property (nonatomic,copy) NSObject*<NTAbsolutePersonalizedSectionPresenceConfig> absolutePresenceConfig;              //@synthesize absolutePresenceConfig=_absolutePresenceConfig - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FCPersonalizationFeature *)feature;
-(void)setFeature:(FCPersonalizationFeature *)arg1 ;
-(double)featureImpressionPrior;
-(void)setFeatureImpressionPrior:(double)arg1 ;
-(void)setFeatureClickPrior:(double)arg1 ;
-(void)setAbsolutePresenceConfig:(NSObject*<NTAbsolutePersonalizedSectionPresenceConfig>)arg1 ;
-(double)featureClickPrior;
-(NSObject*<NTAbsolutePersonalizedSectionPresenceConfig>)absolutePresenceConfig;
@end

