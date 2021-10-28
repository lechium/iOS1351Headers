/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AMSUserNotificationStrategy;
@interface AMSUserNotificationCenter : NSObject {

	id<AMSUserNotificationStrategy> _strategy;

}

@property (nonatomic,readonly) id<AMSUserNotificationStrategy> strategy;              //@synthesize strategy=_strategy - In the implementation block
+(id)postNotification:(id)arg1 bag:(id)arg2 centerBundleId:(id)arg3 ;
+(id)removeNotificationWithIdentifier:(id)arg1 centerBundleId:(id)arg2 logKey:(id)arg3 scheduledOnly:(BOOL)arg4 ;
+(Class)_determineStrategyForBundleId:(id)arg1 ;
+(id)activeNotificationsWithCenterBundleId:(id)arg1 ;
+(id)removeNotification:(id)arg1 centerBundleId:(id)arg2 ;
-(id<AMSUserNotificationStrategy>)strategy;
@end
