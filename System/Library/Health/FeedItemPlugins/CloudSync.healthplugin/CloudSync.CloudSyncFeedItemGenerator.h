/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Health/FeedItemPlugins/CloudSync.healthplugin/CloudSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthExperience/HealthExperience.AsyncOperation.h>

@interface CloudSync.CloudSyncFeedItemGenerator : HealthExperience.AsyncOperation {

	 $__lazy_storage_$_alertBackoffAlgorithm;
	 $__lazy_storage_$_appFirstLaunchDateProvider;
	 $__lazy_storage_$_cloudSyncResolutionInfoStore;
	 context;
	 observer;
	 cancellationLock;

}
-(id)init;
-(void)cancel;
-(void)main;
-(void)didDismissCloudSyncAlert:(id)arg1 ;
-(void)didCancelICloudStorageUpgrade:(id)arg1 ;
@end

