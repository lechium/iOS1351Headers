/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SPUISearchViewController, NSString;

@interface SPUIPPTTypingHelper : NSObject {

	double _timeSinceLastFire;
	SPUISearchViewController* _searchViewController;
	NSString* _queryString;
	NSString* _currentQueryString;
	/*^block*/id _completion;

}

@property (assign) double timeSinceLastFire;                                     //@synthesize timeSinceLastFire=_timeSinceLastFire - In the implementation block
@property (retain) SPUISearchViewController * searchViewController;              //@synthesize searchViewController=_searchViewController - In the implementation block
@property (retain) NSString * queryString;                                       //@synthesize queryString=_queryString - In the implementation block
@property (retain) NSString * currentQueryString;                                //@synthesize currentQueryString=_currentQueryString - In the implementation block
@property (copy) id completion;                                                  //@synthesize completion=_completion - In the implementation block
-(void)fire:(id)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(NSString *)queryString;
-(void)setQueryString:(NSString *)arg1 ;
-(SPUISearchViewController *)searchViewController;
-(void)setSearchViewController:(SPUISearchViewController *)arg1 ;
-(void)setCurrentQueryString:(NSString *)arg1 ;
-(void)setTimeSinceLastFire:(double)arg1 ;
-(double)timeSinceLastFire;
-(NSString *)currentQueryString;
-(id)initWithString:(id)arg1 viewController:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

