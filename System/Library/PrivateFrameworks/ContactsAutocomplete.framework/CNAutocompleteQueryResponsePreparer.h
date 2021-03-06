/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:14 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNAutocompleteFetchDelegate, CNFuture, CNPromise;
@class NSMutableOrderedSet, CNAutocompleteFetchRequest;

@interface CNAutocompleteQueryResponsePreparer : NSObject {

	NSMutableOrderedSet* _previouslyReturnedResults;
	id<CNAutocompleteFetchDelegate> _delegate;
	CNAutocompleteFetchRequest* _fetchRequest;
	id<CNFuture> _priorityResultsFuture;
	id<CNPromise> _matchingPriorityResultsPromise;

}

@property (nonatomic,__weak,readonly) id<CNAutocompleteFetchDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CNAutocompleteFetchRequest * fetchRequest;                    //@synthesize fetchRequest=_fetchRequest - In the implementation block
@property (nonatomic,retain) id<CNFuture> priorityResultsFuture;                             //@synthesize priorityResultsFuture=_priorityResultsFuture - In the implementation block
@property (nonatomic,retain) id<CNPromise> matchingPriorityResultsPromise;                   //@synthesize matchingPriorityResultsPromise=_matchingPriorityResultsPromise - In the implementation block
+(id)bundleIdentifierOfCurrentProcess;
+(id)makeBundleIdentifierOfCurrentProcess;
-(id)init;
-(id<CNAutocompleteFetchDelegate>)delegate;
-(CNAutocompleteFetchRequest *)fetchRequest;
-(id)initWithDelegate:(id)arg1 ;
-(id)sortResults;
-(id)initWithDelegate:(id)arg1 fetchRequest:(id)arg2 ;
-(id)addDiagnosticLog:(/*^block*/id)arg1 ;
-(id)askDelegateToAdjustResults;
-(id)suppressResultsWithAddresses:(id)arg1 ;
-(id)prepareResults:(id)arg1 ;
-(void)setPriorityResultsFuture:(id<CNFuture>)arg1 ;
-(void)setMatchingPriorityResultsPromise:(id<CNPromise>)arg1 ;
-(id)findUniqueResults:(id)arg1 ;
-(id)resultsNotPreviouslyReturned:(id)arg1 ;
-(id)applyPriorityResultsOrder:(id)arg1 ;
-(id)partitionCandidatesForRanking:(id)arg1 ;
-(BOOL)resultIdentifierIsValidMessagesChatGuid:(id)arg1 ;
-(id<CNPromise>)matchingPriorityResultsPromise;
-(BOOL)resultMatchesPrefix:(id)arg1 inNameComponentsOfResult:(id)arg2 ;
-(id<CNFuture>)priorityResultsFuture;
@end

