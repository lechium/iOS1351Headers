/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Health/FeedItemPlugins/AppRecommendations.healthplugin/AppRecommendations
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthExperience/HealthExperience.ComposableAsyncOperation.h>

@interface AppRecommendations.AppRecommendationsFeedItemGenerator : HealthExperience.ComposableAsyncOperation {

	 context;
	 storeDataProvider;
	 managedProfileConnection;
	 isEnqueued;
	 minimumDaysBetweenRuns;
	 isUnitTest;

}
-(id)init;
-(void)cancel;
-(void)main;
-(void)assetDataIsNowAvailable:(id)arg1 ;
@end

