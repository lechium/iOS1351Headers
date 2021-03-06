/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:11 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FileProvider/FPUnionCollection.h>
#import <libobjc.A.dylib/FPSearchQueryResultsProviding.h>

@class NSFileProviderSearchQuery, FPSearchCollection, FPTrashUnionCollection, NSPredicate;

@interface FPSearchTrashCollection : FPUnionCollection <FPSearchQueryResultsProviding> {

	FPSearchCollection* _searchCollection;
	FPTrashUnionCollection* _trashCollection;
	NSPredicate* _searchQueryPredicate;
	unsigned long long _selectedMembership;

}

@property (nonatomic,copy) NSFileProviderSearchQuery * searchQuery; 
-(id)init;
-(NSFileProviderSearchQuery *)searchQuery;
-(void)setSearchQuery:(NSFileProviderSearchQuery *)arg1 ;
-(BOOL)isCollectionValidForItem:(id)arg1 ;
-(id)scopedSearchQuery;
@end

