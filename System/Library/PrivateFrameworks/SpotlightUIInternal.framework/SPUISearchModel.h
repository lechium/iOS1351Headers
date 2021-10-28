/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SPQueryTaskDelegate.h>

@protocol SPSearchAgentDelegate;
@class NSString, SFResultSection, NSObject, SPQueryTask, SPQueryResponse, NSArray;

@interface SPUISearchModel : NSObject <SPQueryTaskDelegate> {

	long long _updatesDisabled;
	NSString* _lastQueryString;
	BOOL _springBoardIsActive;
	BOOL _infinitePatience;
	BOOL _queryComplete;
	BOOL _queryDelayedFinished;
	BOOL _queryDidFinish;
	BOOL _forceStableResults;
	SFResultSection* _searchThroughSection;
	NSObject*<SPSearchAgentDelegate> _delegate;
	SPQueryTask* _queryTask;
	SPQueryResponse* _lastResponse;

}

@property (retain) SPQueryTask * queryTask;                                //@synthesize queryTask=_queryTask - In the implementation block
@property (retain) SPQueryResponse * lastResponse;                         //@synthesize lastResponse=_lastResponse - In the implementation block
@property (assign) BOOL springBoardIsActive;                               //@synthesize springBoardIsActive=_springBoardIsActive - In the implementation block
@property (assign) BOOL infinitePatience;                                  //@synthesize infinitePatience=_infinitePatience - In the implementation block
@property (assign) BOOL queryComplete;                                     //@synthesize queryComplete=_queryComplete - In the implementation block
@property (assign) BOOL queryDelayedFinished;                              //@synthesize queryDelayedFinished=_queryDelayedFinished - In the implementation block
@property (assign) BOOL queryDidFinish;                                    //@synthesize queryDidFinish=_queryDidFinish - In the implementation block
@property (assign) BOOL forceStableResults;                                //@synthesize forceStableResults=_forceStableResults - In the implementation block
@property (readonly) BOOL wantsCompletions; 
@property (readonly) NSArray * sections; 
@property (readonly) SFResultSection * searchThroughSection;               //@synthesize searchThroughSection=_searchThroughSection - In the implementation block
@property (retain) NSObject*<SPSearchAgentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
+(void)preheat;
+(void)retrieveFirstTimeExperienceTextWithReply:(/*^block*/id)arg1 ;
+(id)sharedGeneralInstance;
+(id)sharedFullZWKInstance;
-(void)invalidate;
-(void)clear;
-(NSObject*<SPSearchAgentDelegate>)delegate;
-(void)setDelegate:(NSObject*<SPSearchAgentDelegate>)arg1 ;
-(void)disableUpdates;
-(void)enableUpdates;
-(SPQueryResponse *)lastResponse;
-(void)setLastResponse:(SPQueryResponse *)arg1 ;
-(void)activate;
-(NSArray *)sections;
-(void)deactivate;
-(void)didReceiveResponse:(id)arg1 ;
-(BOOL)queryComplete;
-(BOOL)infinitePatience;
-(void)setInfinitePatience:(BOOL)arg1 ;
-(void)resultsDidBecomeInvalid:(id)arg1 ;
-(BOOL)forceStableResults;
-(void)setForceStableResults:(BOOL)arg1 ;
-(SFResultSection *)searchThroughSection;
-(void)updatesEnabled;
-(BOOL)queryInProgress;
-(void)updateWithQueryContext:(id)arg1 ;
-(BOOL)queryDidFinish;
-(BOOL)queryDelayedFinished;
-(BOOL)wantsCompletions;
-(void)updatesDisabled;
-(SPQueryTask *)queryTask;
-(void)setQueryDelayedFinished:(BOOL)arg1 ;
-(void)setQueryDidFinish:(BOOL)arg1 ;
-(void)setQueryComplete:(BOOL)arg1 ;
-(void)updateWithResponse:(id)arg1 ;
-(void)invalidateQuery:(id)arg1 ;
-(void)setQueryTask:(SPQueryTask *)arg1 ;
-(void)invalidateCurrentQuery;
-(BOOL)_suggestionsReadyForDisplay;
-(BOOL)springBoardIsActive;
-(void)setSpringBoardIsActive:(BOOL)arg1 ;
@end
