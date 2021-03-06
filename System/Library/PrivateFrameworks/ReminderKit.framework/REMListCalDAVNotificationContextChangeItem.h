/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:45 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class REMListChangeItem, NSArray;

@interface REMListCalDAVNotificationContextChangeItem : NSObject {

	REMListChangeItem* _listChangeItem;

}

@property (nonatomic,retain) REMListChangeItem * listChangeItem;              //@synthesize listChangeItem=_listChangeItem - In the implementation block
@property (nonatomic,readonly) NSArray * calDAVNotifications; 
-(REMListChangeItem *)listChangeItem;
-(NSArray *)calDAVNotifications;
-(id)initWithListChangeItem:(id)arg1 ;
-(void)setListChangeItem:(REMListChangeItem *)arg1 ;
-(void)_addCalDAVNotification:(id)arg1 ;
-(id)addCalDAVNotificationWithUUIDString:(id)arg1 hostURL:(id)arg2 externalIdentifier:(id)arg3 externalModificationTag:(id)arg4 ;
-(void)removeCalDAVNotication:(id)arg1 ;
-(void)clearCalDAVNotifications;
-(void)updateCalDAVNotification:(id)arg1 withBlock:(/*^block*/id)arg2 ;
@end

