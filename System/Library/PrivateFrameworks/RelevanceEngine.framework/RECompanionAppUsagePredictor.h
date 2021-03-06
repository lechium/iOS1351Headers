/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/REPredictor.h>
#import <libobjc.A.dylib/RECompanionAppUsagePredictorProperties.h>

@class NSDictionary;

@interface RECompanionAppUsagePredictor : REPredictor <RECompanionAppUsagePredictorProperties> {

	NSDictionary* _predictions;

}

@property (nonatomic,readonly) NSDictionary * predictions; 
+(double)updateInterval;
-(void)dealloc;
-(id)_init;
-(void)update;
-(NSDictionary *)predictions;
-(id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4 ;
-(void)_loadStoreIfNeeded;
@end

