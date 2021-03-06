/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CSSearchableItem;

@interface SGDHarvestQueueItem : NSObject {

	long long _itemId;
	CSSearchableItem* _item;
	unsigned long long _fails;

}

@property (nonatomic,readonly) long long itemId;                      //@synthesize itemId=_itemId - In the implementation block
@property (readonly) CSSearchableItem * item;                         //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) unsigned long long fails;              //@synthesize fails=_fails - In the implementation block
@property (nonatomic,readonly) BOOL highPriority; 
-(CSSearchableItem *)item;
-(void)finish;
-(BOOL)highPriority;
-(void)markAsFailed;
-(unsigned long long)fails;
-(long long)itemId;
-(id)initWithItemId:(long long)arg1 item:(id)arg2 fails:(int)arg3 ;
@end

