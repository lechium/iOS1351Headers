/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:16 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface MTCFUserNotificationPoster : NSObject {

	NSMutableDictionary* _notifications;

}

@property (nonatomic,retain) NSMutableDictionary * notifications;              //@synthesize notifications=_notifications - In the implementation block
+(id)sharedInstance;
+(void)cancelNotificationsWithIdentifiers:(id)arg1 ;
+(void)postNotificationWithIdentifier:(id)arg1 title:(id)arg2 message:(id)arg3 defaultButtonTitle:(id)arg4 otherButtonTitle:(id)arg5 bypassDND:(BOOL)arg6 handler:(/*^block*/id)arg7 ;
-(id)init;
-(NSMutableDictionary *)notifications;
-(void)setNotifications:(NSMutableDictionary *)arg1 ;
@end

