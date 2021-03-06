/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:01 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PSITable.h>

@class PSIStatement;

@interface PSIWordEmbeddingTable : PSITable {

	PSIStatement* _insertStatement;
	PSIStatement* _insertPrefixStatement;
	PSIStatement* _deleteStatement;
	PSIStatement* _deletePrefixStatement;
	PSIStatement* _checkStatement;
	PSIStatement* _selectMatchesStatement;
	PSIStatement* _selectStatement;
	CFLocaleRef _locale;
	BOOL _localeIsGerman;

}
-(void)clear;
-(id)wordEmbeddingVersion;
-(void)finalizze;
-(id)initWithDelegate:(id)arg1 searchable:(BOOL)arg2 writable:(BOOL)arg3 locale:(id)arg4 ;
-(void)cacheWritableStatements;
-(void)cacheSearchableStatements;
-(id)dumpWordEmbeddingTable;
-(id)matchesForToken:(id)arg1 ;
-(id)wordEmbeddingsForToken:(id)arg1 ;
-(BOOL)isInsertedWithWord:(id)arg1 ;
-(void)insertWord:(id)arg1 synonyms:(id)arg2 ;
-(void)removeWord:(id)arg1 ;
@end

