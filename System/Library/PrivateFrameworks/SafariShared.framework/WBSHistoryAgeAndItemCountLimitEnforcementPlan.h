/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:53 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WBSHistoryStore;
@class NSSet, WBSHistoryDeletionPlan;

@interface WBSHistoryAgeAndItemCountLimitEnforcementPlan : NSObject {

	id<WBSHistoryStore> _store;
	NSSet* _items;
	double _ageLimit;
	unsigned long long _itemCountLimit;
	long long _reason;
	NSSet* _itemsToKeep;
	NSSet* _itemsToDiscard;
	WBSHistoryDeletionPlan* _deletionPlan;

}

@property (nonatomic,readonly) NSSet * itemsToKeep;                                //@synthesize itemsToKeep=_itemsToKeep - In the implementation block
@property (nonatomic,readonly) NSSet * itemsToDiscard;                             //@synthesize itemsToDiscard=_itemsToDiscard - In the implementation block
@property (nonatomic,readonly) WBSHistoryDeletionPlan * deletionPlan;              //@synthesize deletionPlan=_deletionPlan - In the implementation block
-(void)execute;
-(void)prepare;
-(id)_itemsToDiscard;
-(id)initWithSQLiteStore:(id)arg1 items:(id)arg2 ageLimit:(double)arg3 itemCountLimit:(unsigned long long)arg4 reason:(long long)arg5 ;
-(NSSet *)itemsToKeep;
-(NSSet *)itemsToDiscard;
-(WBSHistoryDeletionPlan *)deletionPlan;
@end

