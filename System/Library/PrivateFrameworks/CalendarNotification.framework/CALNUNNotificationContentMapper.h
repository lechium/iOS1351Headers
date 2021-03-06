/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CALNUNNotificationIconMapper;

@interface CALNUNNotificationContentMapper : NSObject {

	CALNUNNotificationIconMapper* _notificationIconMapper;

}

@property (nonatomic,readonly) CALNUNNotificationIconMapper * notificationIconMapper;              //@synthesize notificationIconMapper=_notificationIconMapper - In the implementation block
+(void)_setBodyForUNMutableNotificationContent:(id)arg1 usingCALNNotificationContent:(id)arg2 ;
+(void)_setPeopleIdentifiersForUNMutableNotificationContent:(id)arg1 usingCALNNotificationContent:(id)arg2 ;
+(void)_setSoundForUNMutableNotificationContent:(id)arg1 usingCALNNotificationContent:(id)arg2 ;
+(void)_setSubtitleForUNMutableNotificationContent:(id)arg1 usingCALNNotificationContent:(id)arg2 ;
+(void)_setSummaryArgumentForUNMutableNotificationContent:(id)arg1 usingCALNNotificationContent:(id)arg2 ;
+(void)_setThreadIdentifierForUNMutableNotificationContent:(id)arg1 usingCALNNotificationContent:(id)arg2 ;
+(void)_setTitleForUNMutableNotificationContent:(id)arg1 usingCALNNotificationContent:(id)arg2 ;
+(void)_setTopicIdentifiersForUNMutableNotificationContent:(id)arg1 usingCALNNotificationContent:(id)arg2 ;
+(void)_setUserInfoForUNMutableNotificationContent:(id)arg1 usingCALNNotificationContent:(id)arg2 ;
+(id)_sectionIdentifierFromTopicIdentifiers:(id)arg1 ;
+(id)_calnNotificationSoundFromUNNotificationContent:(id)arg1 ;
-(id)initWithNotificationIconMapper:(id)arg1 ;
-(id)unNotificationContentFromCALNNotificationContent:(id)arg1 ;
-(id)_unNotificationIconFromCALNNotificationContent:(id)arg1 ;
-(id)_iconIdentifierFromUNNotificationContent:(id)arg1 ;
-(CALNUNNotificationIconMapper *)notificationIconMapper;
-(id)calnNotificationContentFromUNNotificationContent:(id)arg1 ;
@end

