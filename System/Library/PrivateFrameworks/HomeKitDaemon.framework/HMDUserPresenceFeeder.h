/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:22 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDHomePresenceBase.h>
#import <libobjc.A.dylib/HMDUserPresenceFeedSessionDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDBackgroundTaskAgentTimer, HMDUserPresenceFeedSession, HMDUserPresenceFeed, NSString;

@interface HMDUserPresenceFeeder : HMDHomePresenceBase <HMDUserPresenceFeedSessionDelegate, HMFLogging> {

	unsigned long long _presenceRegionStatus;
	HMDBackgroundTaskAgentTimer* _btaUpdateTimer;
	HMDUserPresenceFeedSession* _currentFeedSession;
	HMDUserPresenceFeed* _lastSentFeed;

}

@property (assign,nonatomic) unsigned long long presenceRegionStatus;                      //@synthesize presenceRegionStatus=_presenceRegionStatus - In the implementation block
@property (nonatomic,readonly) HMDBackgroundTaskAgentTimer * btaUpdateTimer;               //@synthesize btaUpdateTimer=_btaUpdateTimer - In the implementation block
@property (nonatomic,retain) HMDUserPresenceFeedSession * currentFeedSession;              //@synthesize currentFeedSession=_currentFeedSession - In the implementation block
@property (nonatomic,retain) HMDUserPresenceFeed * lastSentFeed;                           //@synthesize lastSentFeed=_lastSentFeed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(void)submitPresenceReportMetricWithPresenceAuth:(id)arg1 presenceCompute:(id)arg2 reason:(id)arg3 error:(id)arg4 ;
-(id)init;
-(void)timerFired:(id)arg1 ;
-(void)_startRefreshTimer;
-(void)_registerForMessages;
-(void)configure:(id)arg1 messageDispatcher:(id)arg2 ;
-(void)notifyDidLeaveHomeRegion;
-(void)notifyDidEnterHomeRegion;
-(void)residentChanged;
-(void)notifyDidArriveHome;
-(void)notifyDidLeaveHome;
-(void)presenceAuthChanged;
-(void)presenceAuthStatusChangedForUser:(id)arg1 presenceAuthStatus:(id)arg2 ;
-(void)registerQueriableAwdMetrics;
-(unsigned long long)presenceRegionStatus;
-(void)setPresenceRegionStatus:(unsigned long long)arg1 ;
-(void)handleHomeDataLoadedNotification:(id)arg1 ;
-(void)fmfStatusUpdateNotification:(id)arg1 ;
-(void)_handleLocationAuthorizationChangedNotification:(id)arg1 ;
-(void)accountAvailabilityChanged:(id)arg1 ;
-(void)_sendPresenceReport:(unsigned long long)arg1 ;
-(void)_submitPresenceAuthMetric:(id)arg1 ;
-(void)_submitPresenceComputeMetric:(id)arg1 ;
-(void)_sendPresenceUpdateToResident:(id)arg1 ;
-(HMDBackgroundTaskAgentTimer *)btaUpdateTimer;
-(void)_sendPresenceUpdateToResidentForUser:(id)arg1 presenceAuthStatus:(id)arg2 authChanging:(BOOL)arg3 reason:(id)arg4 ;
-(void)_sendPresenceUpdateToResidentForUser:(id)arg1 presenceAuthStatus:(id)arg2 authChanging:(BOOL)arg3 reason:(id)arg4 fmfStatus:(id)arg5 ;
-(BOOL)_updatePresenceToResidentForUser:(id)arg1 presenceAuthStatus:(id)arg2 authChanging:(BOOL)arg3 reason:(id)arg4 fmfStatus:(id)arg5 ;
-(void)setCurrentFeedSession:(HMDUserPresenceFeedSession *)arg1 ;
-(void)_upgradePresenceAuth;
-(id)_sendPresenceAuthStatusForUser:(id)arg1 presenceAuthStatus:(id)arg2 presenceRegionStatus:(id)arg3 presenceComputeStatus:(id)arg4 reason:(id)arg5 ;
-(void)_updatePresenceComputeStatus:(id)arg1 ;
-(HMDUserPresenceFeedSession *)currentFeedSession;
-(HMDUserPresenceFeed *)lastSentFeed;
-(void)setLastSentFeed:(HMDUserPresenceFeed *)arg1 ;
-(void)didEndFeedSession:(id)arg1 ;
-(void)homeDataProcessed;
@end

