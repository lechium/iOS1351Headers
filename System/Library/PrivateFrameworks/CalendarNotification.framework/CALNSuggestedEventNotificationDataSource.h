/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CALNSuggestedEventNotificationDataSource <NSObject>
@required
-(id)fetchSuggestedEventNotificationsWithSourceClientIdentifier:(id)arg1;
-(id)fetchSuggestedEventNotificationObjectIDs;
-(id)fetchSuggestedEventNotificationWithObjectID:(id)arg1;
-(void)clearSuggestedEventNotificationWithSourceClientIdentifier:(id)arg1;
-(void)confirmSuggestedEventWithSourceClientIdentifier:(id)arg1;
-(void)ignoreSuggestedEventWithSourceClientIdentifier:(id)arg1;
-(void)deleteCanceledSuggestedEventWithSourceClientIdentifier:(id)arg1;
-(id)fetchSuggestedEventNotifications;

@end
