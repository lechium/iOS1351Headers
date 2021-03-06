/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:39 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface FCNotificationsConfiguration : NSObject {

	NSArray* _preSubscribedNotificationsChannelIDs;
	NSArray* _recommendedNotificationChannelIDs;

}

@property (nonatomic,copy,readonly) NSArray * preSubscribedNotificationsChannelIDs;              //@synthesize preSubscribedNotificationsChannelIDs=_preSubscribedNotificationsChannelIDs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * recommendedNotificationChannelIDs;                 //@synthesize recommendedNotificationChannelIDs=_recommendedNotificationChannelIDs - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithPresubscribedChannelIDs:(id)arg1 recommendedNotificationChannelIDs:(id)arg2 ;
-(NSArray *)preSubscribedNotificationsChannelIDs;
-(NSArray *)recommendedNotificationChannelIDs;
@end

