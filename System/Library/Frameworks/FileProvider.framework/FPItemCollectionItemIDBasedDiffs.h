/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:11 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FileProvider/FPItemCollectionDiffs.h>

@class NSMutableArray, NSMutableDictionary;

@interface FPItemCollectionItemIDBasedDiffs : FPItemCollectionDiffs {

	NSMutableArray* _deletedItemIDs;
	NSMutableArray* _updatedItems;
	NSMutableDictionary* _replacedItemsByFormerID;

}

@property (retain) NSMutableArray * deletedItemIDs;                            //@synthesize deletedItemIDs=_deletedItemIDs - In the implementation block
@property (retain) NSMutableArray * updatedItems;                              //@synthesize updatedItems=_updatedItems - In the implementation block
@property (retain) NSMutableDictionary * replacedItemsByFormerID;              //@synthesize replacedItemsByFormerID=_replacedItemsByFormerID - In the implementation block
-(NSMutableArray *)updatedItems;
-(void)setUpdatedItems:(NSMutableArray *)arg1 ;
-(NSMutableArray *)deletedItemIDs;
-(void)setDeletedItemIDs:(NSMutableArray *)arg1 ;
-(BOOL)containsChanges;
-(NSMutableDictionary *)replacedItemsByFormerID;
-(void)setReplacedItemsByFormerID:(NSMutableDictionary *)arg1 ;
@end

