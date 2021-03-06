/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:45 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class REMListChangeItem, NSString;

@interface REMListAppearanceContextChangeItem : NSObject {

	REMListChangeItem* _listChangeItem;

}

@property (nonatomic,retain) REMListChangeItem * listChangeItem;              //@synthesize listChangeItem=_listChangeItem - In the implementation block
@property (nonatomic,copy) NSString * badgeEmblem; 
-(REMListChangeItem *)listChangeItem;
-(NSString *)badgeEmblem;
-(void)setBadgeEmblem:(NSString *)arg1 ;
-(BOOL)showingLargeAttachments;
-(void)setShowingLargeAttachments:(BOOL)arg1 ;
-(id)initWithListChangeItem:(id)arg1 ;
-(void)setListChangeItem:(REMListChangeItem *)arg1 ;
@end

