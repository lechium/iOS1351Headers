/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:30 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlaybackCore/MPCReportingController.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, SSVPlayActivityController;

@interface MPCJinglePlayActivityReportingController : MPCReportingController {

	NSObject*<OS_dispatch_queue> _accessSerialQueue;
	double _nonCatalogAggregatePlayDuration;
	double _nonCatalogAggregateStartTime;
	NSString* _nonCatalogDeviceName;
	BOOL _nonCatalogOffline;
	BOOL _nonCatalogSBEnabled;
	unsigned long long _nonCatalogStoreAccountID;
	NSString* _nonCatalogBuildVersion;
	NSString* _nonCatalogStoreFrontID;
	unsigned long long _nonCatalogSourceType;
	BOOL _shouldReportAggregateTimePlayActivityEvents;
	BOOL _shouldReportPlayActivityEvents;
	SSVPlayActivityController* _playActivityController;

}

@property (nonatomic,readonly) SSVPlayActivityController * playActivityController;              //@synthesize playActivityController=_playActivityController - In the implementation block
@property (assign,nonatomic) BOOL shouldReportAggregateTimePlayActivityEvents;                  //@synthesize shouldReportAggregateTimePlayActivityEvents=_shouldReportAggregateTimePlayActivityEvents - In the implementation block
@property (assign,nonatomic) BOOL shouldReportPlayActivityEvents;                               //@synthesize shouldReportPlayActivityEvents=_shouldReportPlayActivityEvents - In the implementation block
-(id)init;
-(void)dealloc;
-(id)initWithWritingStyle:(unsigned long long)arg1 ;
-(void)completePendingPlayActivityEvents:(id)arg1 forSessionToken:(unsigned long long)arg2 withResult:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(SSVPlayActivityController *)playActivityController;
-(void)setShouldReportPlayActivityEvents:(BOOL)arg1 ;
-(void)_recordReportingEvents:(id)arg1 ;
-(void)_applicationWillTerminateNotification:(id)arg1 ;
-(id)_captureNonCatalogAggregatePlayActivityEventWithNonCatalogAggregateEndTime:(double)arg1 ;
-(void)_clearNonCatalogAggregatePlayActivityEventData;
-(void)acquirePendingPlayActivityEventsForStoreAccountID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)shouldReportAggregateTimePlayActivityEvents;
-(void)setShouldReportAggregateTimePlayActivityEvents:(BOOL)arg1 ;
-(BOOL)shouldReportPlayActivityEvents;
@end

