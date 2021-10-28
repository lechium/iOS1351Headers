/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:23 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface BWInferenceScalingRequirement : NSObject {

	NSArray* _orderedVideoRequirements;

}

@property (nonatomic,readonly) NSArray * orderedVideoRequirements;              //@synthesize orderedVideoRequirements=_orderedVideoRequirements - In the implementation block
-(void)dealloc;
-(void)_appendIntermediateRequirementsToList:(id)arg1 forSatisfyingOutputRequirement:(id)arg2 ;
-(id)initWithInputVideoRequirement:(id)arg1 requestedOutputVideoRequirements:(id)arg2 ;
-(NSArray *)orderedVideoRequirements;
@end
