/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UserNotificationsKit/UserNotificationsKit-Structs.h>
#import <UserNotificationsKit/NCNotificationRequest.h>

@class NSString, NSSet, NSArray, NSDate, NCNotificationContent, NCNotificationOptions, NSDictionary, NCNotificationSound, NCNotificationAction, UNNotification;

@interface NCMutableNotificationRequest : NCNotificationRequest

@property (nonatomic,copy) NSString * sectionIdentifier; 
@property (nonatomic,copy) NSString * notificationIdentifier; 
@property (nonatomic,copy) NSString * threadIdentifier; 
@property (nonatomic,copy) NSString * categoryIdentifier; 
@property (nonatomic,copy) NSSet * subSectionIdentifiers; 
@property (nonatomic,copy) NSString * highestPrioritySubSectionIdentifier; 
@property (nonatomic,copy) NSArray * intentIdentifiers; 
@property (nonatomic,copy) NSArray * peopleIdentifiers; 
@property (nonatomic,copy) NSString * parentSectionIdentifier; 
@property (assign,getter=isUniqueThreadIdentifier,nonatomic) BOOL uniqueThreadIdentifier; 
@property (nonatomic,retain) NSDate * timestamp; 
@property (nonatomic,copy) NSSet * requestDestinations; 
@property (nonatomic,retain) NCNotificationContent * content; 
@property (nonatomic,retain) NCNotificationOptions * options; 
@property (nonatomic,copy) NSDictionary * context; 
@property (nonatomic,copy) NSSet * settingsSections; 
@property (nonatomic,retain) NCNotificationSound * sound; 
@property (nonatomic,retain) NCNotificationAction * clearAction; 
@property (nonatomic,retain) NCNotificationAction * closeAction; 
@property (nonatomic,retain) NCNotificationAction * defaultAction; 
@property (nonatomic,retain) NCNotificationAction * silenceAction; 
@property (nonatomic,copy) NSDictionary * supplementaryActions; 
@property (nonatomic,retain) UNNotification * userNotification; 
@property (assign,nonatomic) BOOL isCollapsedNotification; 
@property (assign,nonatomic) unsigned long long collapsedNotificationsCount; 
@property (nonatomic,copy) NSDictionary * sourceInfo; 
@property (assign,getter=isCriticalAlert,nonatomic) BOOL criticalAlert; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOptions:(NCNotificationOptions *)arg1 ;
-(void)setContext:(NSDictionary *)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)setPeopleIdentifiers:(NSArray *)arg1 ;
-(void)setContent:(NCNotificationContent *)arg1 ;
-(void)setCategoryIdentifier:(NSString *)arg1 ;
-(void)setSound:(NCNotificationSound *)arg1 ;
-(void)setSourceInfo:(NSDictionary *)arg1 ;
-(void)setThreadIdentifier:(NSString *)arg1 ;
-(void)setIntentIdentifiers:(NSArray *)arg1 ;
-(void)setClearAction:(NCNotificationAction *)arg1 ;
-(void)setNotificationIdentifier:(NSString *)arg1 ;
-(void)setDefaultAction:(NCNotificationAction *)arg1 ;
-(void)setSectionIdentifier:(NSString *)arg1 ;
-(void)setUserNotification:(UNNotification *)arg1 ;
-(void)setSilenceAction:(NCNotificationAction *)arg1 ;
-(void)setSupplementaryActions:(NSDictionary *)arg1 ;
-(void)setParentSectionIdentifier:(NSString *)arg1 ;
-(void)setCriticalAlert:(BOOL)arg1 ;
-(void)setRequestDestinations:(NSSet *)arg1 ;
-(void)setSettingsSections:(NSSet *)arg1 ;
-(void)setCloseAction:(NCNotificationAction *)arg1 ;
-(void)setIsCollapsedNotification:(BOOL)arg1 ;
-(void)setCollapsedNotificationsCount:(unsigned long long)arg1 ;
-(void)setSubSectionIdentifiers:(NSSet *)arg1 ;
-(void)setHighestPrioritySubSectionIdentifier:(NSString *)arg1 ;
-(void)setUniqueThreadIdentifier:(BOOL)arg1 ;
@end

