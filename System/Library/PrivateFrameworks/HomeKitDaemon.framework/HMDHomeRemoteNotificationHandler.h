/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface HMDHomeRemoteNotificationHandler : HMFObject <HMFLogging> {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSString* _logID;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSString * logID;                                    //@synthesize logID=_logID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)logIdentifier;
-(id)initWithHome:(id)arg1 ;
-(NSString *)logID;
-(void)sendNotifications:(id)arg1 notificationUpdateIdentifier:(id)arg2 ;
-(void)_sendNotifications:(id)arg1 notificationUpdateIdentifier:(id)arg2 ;
-(void)sendConfigureBulletinNotification:(id)arg1 ;
@end

