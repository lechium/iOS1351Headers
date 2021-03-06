/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:37 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/FCOperation.h>

@protocol FCContentContext, FCFeedTransforming;
@class NSArray;

@interface FCCurrentFeaturedHeadlinesFetchOperation : FCOperation {

	BOOL _useFallbackArticleSource;
	/*^block*/id _fetchCompletionHandler;
	id<FCContentContext> _context;
	id<FCFeedTransforming> _transformation;
	NSArray* _resultHeadlines;

}

@property (nonatomic,retain) id<FCContentContext> context;                       //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id<FCFeedTransforming> transformation;              //@synthesize transformation=_transformation - In the implementation block
@property (assign,nonatomic) BOOL useFallbackArticleSource;                      //@synthesize useFallbackArticleSource=_useFallbackArticleSource - In the implementation block
@property (nonatomic,retain) NSArray * resultHeadlines;                          //@synthesize resultHeadlines=_resultHeadlines - In the implementation block
@property (nonatomic,copy) id fetchCompletionHandler;                            //@synthesize fetchCompletionHandler=_fetchCompletionHandler - In the implementation block
-(id)init;
-(id<FCContentContext>)context;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(id<FCFeedTransforming>)transformation;
-(void)setTransformation:(id<FCFeedTransforming>)arg1 ;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(id)fetchCompletionHandler;
-(id)initWithContext:(id)arg1 transformation:(id)arg2 ;
-(void)setFetchCompletionHandler:(id)arg1 ;
-(BOOL)useFallbackArticleSource;
-(id)_promiseConfiguration;
-(id)_promiseTemporaryFallbackFeedItemsWithConfiguration:(id)arg1 ;
-(id)_promiseTemporaryFallbackHeadlinesForFeedItems:(id)arg1 ;
-(void)setResultHeadlines:(NSArray *)arg1 ;
-(id)_promiseArticleRecordsWithConfiguration:(id)arg1 ;
-(id)_promiseFilteredArticleIDsFromArticleRecords:(id)arg1 ;
-(id)_promiseHeadlinesForArticleIDs:(id)arg1 ;
-(NSArray *)resultHeadlines;
-(id)initWithContext:(id)arg1 transformation:(id)arg2 useFallbackArticleSource:(BOOL)arg3 ;
-(void)setUseFallbackArticleSource:(BOOL)arg1 ;
@end

