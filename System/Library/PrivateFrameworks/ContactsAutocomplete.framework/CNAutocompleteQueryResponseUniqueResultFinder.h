/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:14 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSDictionary, NSIndexSet, NSMutableIndexSet;

@interface CNAutocompleteQueryResponseUniqueResultFinder : NSObject {

	NSMutableArray* _uniqueResults;
	NSMutableArray* _hashes;
	NSDictionary* _hashIndex;
	NSIndexSet* _firstIndexes;
	NSMutableIndexSet* _uniqueResultIndexes;
	/*^block*/id _duplicateResultHandler;

}
+(id)findUniqueResults:(id)arg1 duplicateResultHandler:(/*^block*/id)arg2 ;
-(void)removeDuplicateResults;
-(id)initWithResults:(id)arg1 duplicateResultHandler:(/*^block*/id)arg2 ;
-(id)findUniqueResults;
-(void)generateHashes;
-(void)indexHashes;
-(void)resolveDuplicatesWithinIndexes:(id)arg1 ;
@end
