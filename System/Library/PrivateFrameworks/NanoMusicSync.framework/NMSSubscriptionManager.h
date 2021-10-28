/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ICEnvironmentMonitorObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, ACAccount, NSString;

@interface NMSSubscriptionManager : NSObject <ICEnvironmentMonitorObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	long long _icStatusType;
	ACAccount* _activeAccount;
	unsigned long long _subscriptionStatus;
	unsigned long long _failedGetSubscriptionStatusAttempts;

}

@property (nonatomic,readonly) unsigned long long subscriptionStatus; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(unsigned long long)subscriptionStatus;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg1 ;
-(void)_handleAccountStoreDidChangeNotification:(id)arg1 ;
-(unsigned long long)_statusWithActiveAccount:(id)arg1 icStatusType:(long long)arg2 ;
-(void)_updateICSubscriptionStatusType;
-(void)_handleICSubscriptionStatusDidChangeNotification:(id)arg1 ;
-(void)_updateActiveAccount;
-(void)_updateSubscriptionStatus;
@end
