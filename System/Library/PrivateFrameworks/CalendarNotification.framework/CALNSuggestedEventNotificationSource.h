/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CALNNotificationSource.h>

@protocol CALNSuggestedEventNotificationDataSource, CALNNotificationManager, CALNCalendarIconIdentifierProvider;
@class NSString, NSArray;

@interface CALNSuggestedEventNotificationSource : NSObject <CALNNotificationSource> {

	id<CALNSuggestedEventNotificationDataSource> _dataSource;
	id<CALNNotificationManager> _notificationManager;
	id<CALNCalendarIconIdentifierProvider> _iconIdentifierProvider;

}

@property (nonatomic,readonly) id<CALNSuggestedEventNotificationDataSource> dataSource;                    //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,__weak,readonly) id<CALNNotificationManager> notificationManager;                     //@synthesize notificationManager=_notificationManager - In the implementation block
@property (nonatomic,readonly) id<CALNCalendarIconIdentifierProvider> iconIdentifierProvider;              //@synthesize iconIdentifierProvider=_iconIdentifierProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * sourceIdentifier; 
@property (nonatomic,readonly) NSArray * categories; 
+(id)_bundle;
+(id)deleteActionIdentifier;
+(id)defaultSuggestedEventCategoryIdentifier;
+(id)coalescedSuggestedEventCategoryIdentifier;
+(id)suggestedEventCanceledCategoryIdentifier;
+(id)confirmActionIdentifier;
+(id)ignoreActionIdentifier;
-(id<CALNSuggestedEventNotificationDataSource>)dataSource;
-(NSArray *)categories;
-(NSString *)sourceIdentifier;
-(id<CALNNotificationManager>)notificationManager;
-(void)didReceiveResponse:(id)arg1 ;
-(id)contentForNotificationWithSourceClientIdentifier:(id)arg1 ;
-(id<CALNCalendarIconIdentifierProvider>)iconIdentifierProvider;
-(void)refreshNotifications:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 notificationManager:(id)arg2 iconIdentifierProvider:(id)arg3 ;
-(id)_sourceClientIdentifiersForObjectIDs:(id)arg1 ;
@end

