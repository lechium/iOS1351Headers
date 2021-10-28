/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:03 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CNUIDataCollectionSearchSession : NSObject {

	BOOL _pendingResults;
	BOOL _pendingSuggestionsResults;

}

@property (assign,nonatomic) BOOL pendingResults;                         //@synthesize pendingResults=_pendingResults - In the implementation block
@property (assign,nonatomic) BOOL pendingSuggestionsResults;              //@synthesize pendingSuggestionsResults=_pendingSuggestionsResults - In the implementation block
+(void)end;
+(void)begin;
+(id)currentSession;
-(void)searchStringDidChange;
-(void)didFetchResultSuggested:(BOOL)arg1 ;
-(void)didSelectResult:(id)arg1 ;
-(BOOL)pendingResults;
-(void)setPendingResults:(BOOL)arg1 ;
-(BOOL)pendingSuggestionsResults;
-(void)setPendingSuggestionsResults:(BOOL)arg1 ;
@end
