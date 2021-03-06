/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:20 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ReminderMigration.framework/ReminderMigration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class REMListChangeItem;

@interface CalOrderedListChangeItem : NSObject {

	REMListChangeItem* _listChangeItem;
	long long _order;

}

@property (nonatomic,retain) REMListChangeItem * listChangeItem;              //@synthesize listChangeItem=_listChangeItem - In the implementation block
@property (assign,nonatomic) long long order;                                 //@synthesize order=_order - In the implementation block
-(long long)order;
-(void)setOrder:(long long)arg1 ;
-(REMListChangeItem *)listChangeItem;
-(void)setListChangeItem:(REMListChangeItem *)arg1 ;
@end

