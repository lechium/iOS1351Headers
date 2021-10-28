/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:09 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ContextKit.framework/ContextKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CKContextResponse, NSString, NSLocale, NSDate, NSMutableArray;

@interface CKContextCompleter : NSObject {

	CKContextResponse* _response;
	NSString* _ignorePrefix;
	NSLocale* _searchLocale;
	AB _discarded;
	unsigned long long _couldHaveShown;
	NSString* _input;
	NSDate* _hideCompletionsAfterDate;
	BOOL _hideZKW;
	BOOL _hideCompletions;
	unsigned long long _mustPrefixMatchLength;
	NSMutableArray* _zkwResults;

}
-(void)dealloc;
-(id)initWithResponse:(id)arg1 ;
-(void)discard;
-(id)_resultsMatching:(id)arg1 ;
-(id)resultsMatching:(id)arg1 ;
-(void)logResultsShown:(unsigned long long)arg1 serverOverride:(BOOL)arg2 forInput:(id)arg3 ;
-(void)logEngagement:(id)arg1 forInput:(id)arg2 completion:(id)arg3 ;
-(void)logTransactionSuccessfulForInput:(id)arg1 completion:(id)arg2 ;
-(id)queriesMatching:(id)arg1 ;
-(void)logResultsShown:(unsigned long long)arg1 serverOverride:(BOOL)arg2 ;
-(void)logEngagement:(id)arg1 forInput:(id)arg2 ;
-(void)logTransactionSuccessfulForInput:(id)arg1 ;
@end
