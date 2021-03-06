/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:14 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNAutocompleteProbeProvider, OS_dispatch_queue, CNFuture;
@class CNAutocompleteFetchRequest, _CNAutocompleteUserSessionDisplayedResults, NSDate, CNAutocompleteUsageMonitor, NSObject;

@interface CNAutocompleteUserSession : NSObject {

	id<CNAutocompleteProbeProvider> _probeProvider;
	CNAutocompleteFetchRequest* _currentRequest;
	unsigned long long _currentBatch;
	_CNAutocompleteUserSessionDisplayedResults* _lastDisplayedResults;
	NSDate* _requestStartTime;
	CNAutocompleteUsageMonitor* _usageMonitor;
	NSObject*<OS_dispatch_queue> _syncQueue;
	id<CNFuture> _duetResultsFuture;

}

@property (nonatomic,readonly) id<CNAutocompleteProbeProvider> probeProvider;                                //@synthesize probeProvider=_probeProvider - In the implementation block
@property (nonatomic,retain) CNAutocompleteFetchRequest * currentRequest;                                    //@synthesize currentRequest=_currentRequest - In the implementation block
@property (assign,nonatomic) unsigned long long currentBatch;                                                //@synthesize currentBatch=_currentBatch - In the implementation block
@property (nonatomic,retain) _CNAutocompleteUserSessionDisplayedResults * lastDisplayedResults;              //@synthesize lastDisplayedResults=_lastDisplayedResults - In the implementation block
@property (nonatomic,retain) NSDate * requestStartTime;                                                      //@synthesize requestStartTime=_requestStartTime - In the implementation block
@property (nonatomic,retain) CNAutocompleteUsageMonitor * usageMonitor;                                      //@synthesize usageMonitor=_usageMonitor - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> syncQueue;                                         //@synthesize syncQueue=_syncQueue - In the implementation block
@property (nonatomic,retain) id<CNFuture> duetResultsFuture;                                                 //@synthesize duetResultsFuture=_duetResultsFuture - In the implementation block
-(CNAutocompleteFetchRequest *)currentRequest;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(void)setCurrentRequest:(CNAutocompleteFetchRequest *)arg1 ;
-(NSDate *)requestStartTime;
-(void)setRequestStartTime:(NSDate *)arg1 ;
-(void)_resetState;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(CNAutocompleteUsageMonitor *)usageMonitor;
-(void)setUsageMonitor:(CNAutocompleteUsageMonitor *)arg1 ;
-(id)initWithProbeProvider:(id)arg1 ;
-(void)setDuetResultsFuture:(id<CNFuture>)arg1 ;
-(_CNAutocompleteUserSessionDisplayedResults *)lastDisplayedResults;
-(void)setCurrentBatch:(unsigned long long)arg1 ;
-(unsigned long long)currentBatch;
-(void)setLastDisplayedResults:(_CNAutocompleteUserSessionDisplayedResults *)arg1 ;
-(id<CNFuture>)duetResultsFuture;
-(id<CNAutocompleteProbeProvider>)probeProvider;
-(void)willStartDuetRequestWithMatchingResultsFuture:(id)arg1 ;
-(void)willStartExecutingRequest:(id)arg1 ;
-(void)didReceiveResults:(id)arg1 forRequest:(id)arg2 ;
-(void)didSelectResult:(id)arg1 atSortedIndex:(unsigned long long)arg2 ;
@end

