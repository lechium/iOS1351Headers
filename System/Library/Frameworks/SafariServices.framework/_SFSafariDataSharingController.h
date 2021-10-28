/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:35 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface _SFSafariDataSharingController : NSObject {

	NSObject*<OS_dispatch_queue> _dataSharingQueue;
	NSMutableArray* _appBundlesWithSeparateData;

}
+(id)sharedController;
-(id)init;
-(id)systemDataContainerURLWithAppBundleID:(id)arg1 ;
-(void)checkInAppBundleIDIfNeeded:(id)arg1 ;
-(void)_loadAppBundlesWithSeparateDataIfNeeded;
-(void)clearAllWebsitesData;
@end
