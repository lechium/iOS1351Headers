/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:03 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/FCOperation.h>

@protocol FCNewsAppConfiguration, FCContentContext, FCFeedPersonalizing;
@class NSDictionary, NTCatchUpOperationForYouRequest, NTCatchUpOperationResults, NTCatchUpOperationForYouFetchInfo, NSDate, NSMutableArray;

@interface NTCatchUpOperation : FCOperation {

	BOOL _forYouEnabled;
	id<FCNewsAppConfiguration> _appConfiguration;
	id<FCContentContext> _contentContext;
	id<FCFeedPersonalizing> _feedPersonalizer;
	NSDictionary* _todayConfigOperationHeldRecordsByType;
	unsigned long long _maximumCachedAgeForForYou;
	NTCatchUpOperationForYouRequest* _forYouRequest;
	/*^block*/id _sessionProvider;
	NSDictionary* _resultsByArticleListID;
	NSDictionary* _resultsByArticleIDsRequestID;
	NTCatchUpOperationResults* _forYouResults;
	NTCatchUpOperationForYouFetchInfo* _forYouFetchInfo;
	/*^block*/id _catchUpCompletionHandler;
	NSDate* _fetchDate;
	NSMutableArray* _articleListRequests;
	NSMutableArray* _articleIDsRequests;

}

@property (nonatomic,copy) NSDate * fetchDate;                                                  //@synthesize fetchDate=_fetchDate - In the implementation block
@property (nonatomic,retain) NSMutableArray * articleListRequests;                              //@synthesize articleListRequests=_articleListRequests - In the implementation block
@property (nonatomic,retain) NSMutableArray * articleIDsRequests;                               //@synthesize articleIDsRequests=_articleIDsRequests - In the implementation block
@property (nonatomic,copy) NSDictionary * resultsByArticleListID;                               //@synthesize resultsByArticleListID=_resultsByArticleListID - In the implementation block
@property (nonatomic,copy) NSDictionary * resultsByArticleIDsRequestID;                         //@synthesize resultsByArticleIDsRequestID=_resultsByArticleIDsRequestID - In the implementation block
@property (nonatomic,copy) NTCatchUpOperationForYouFetchInfo * forYouFetchInfo;                 //@synthesize forYouFetchInfo=_forYouFetchInfo - In the implementation block
@property (nonatomic,copy) NTCatchUpOperationResults * forYouResults;                           //@synthesize forYouResults=_forYouResults - In the implementation block
@property (nonatomic,copy) id<FCNewsAppConfiguration> appConfiguration;                         //@synthesize appConfiguration=_appConfiguration - In the implementation block
@property (nonatomic,retain) id<FCContentContext> contentContext;                               //@synthesize contentContext=_contentContext - In the implementation block
@property (nonatomic,retain) id<FCFeedPersonalizing> feedPersonalizer;                          //@synthesize feedPersonalizer=_feedPersonalizer - In the implementation block
@property (nonatomic,retain) NSDictionary * todayConfigOperationHeldRecordsByType;              //@synthesize todayConfigOperationHeldRecordsByType=_todayConfigOperationHeldRecordsByType - In the implementation block
@property (assign,nonatomic) unsigned long long maximumCachedAgeForForYou;                      //@synthesize maximumCachedAgeForForYou=_maximumCachedAgeForForYou - In the implementation block
@property (nonatomic,copy) NTCatchUpOperationForYouRequest * forYouRequest;                     //@synthesize forYouRequest=_forYouRequest - In the implementation block
@property (assign,getter=isForYouEnabled,nonatomic) BOOL forYouEnabled;                         //@synthesize forYouEnabled=_forYouEnabled - In the implementation block
@property (nonatomic,copy) id sessionProvider;                                                  //@synthesize sessionProvider=_sessionProvider - In the implementation block
@property (nonatomic,copy) id catchUpCompletionHandler;                                         //@synthesize catchUpCompletionHandler=_catchUpCompletionHandler - In the implementation block
-(id)init;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)prepareOperation;
-(id<FCNewsAppConfiguration>)appConfiguration;
-(id<FCFeedPersonalizing>)feedPersonalizer;
-(NSDate *)fetchDate;
-(void)setFetchDate:(NSDate *)arg1 ;
-(void)setFeedPersonalizer:(id<FCFeedPersonalizing>)arg1 ;
-(void)setContentContext:(id<FCContentContext>)arg1 ;
-(id<FCContentContext>)contentContext;
-(id)catchUpCompletionHandler;
-(void)setCatchUpCompletionHandler:(id)arg1 ;
-(void)setSessionProvider:(id)arg1 ;
-(id)sessionProvider;
-(NTCatchUpOperationForYouFetchInfo *)forYouFetchInfo;
-(void)setAppConfiguration:(id<FCNewsAppConfiguration>)arg1 ;
-(void)setForYouFetchInfo:(NTCatchUpOperationForYouFetchInfo *)arg1 ;
-(NTCatchUpOperationForYouRequest *)forYouRequest;
-(void)setForYouRequest:(NTCatchUpOperationForYouRequest *)arg1 ;
-(void)setForYouEnabled:(BOOL)arg1 ;
-(NTCatchUpOperationResults *)forYouResults;
-(void)addArticleIDsRequest:(id)arg1 ;
-(NSDictionary *)resultsByArticleIDsRequestID;
-(NSMutableArray *)articleListRequests;
-(NSMutableArray *)articleIDsRequests;
-(NSDictionary *)todayConfigOperationHeldRecordsByType;
-(BOOL)isForYouEnabled;
-(void)_fetchForYouResultsIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchArticleListAndArticleIDsResultsIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)setResultsByArticleListID:(NSDictionary *)arg1 ;
-(void)setResultsByArticleIDsRequestID:(NSDictionary *)arg1 ;
-(void)setForYouResults:(NTCatchUpOperationResults *)arg1 ;
-(unsigned long long)maximumCachedAgeForForYou;
-(void)addArticleListRequest:(id)arg1 ;
-(void)setTodayConfigOperationHeldRecordsByType:(NSDictionary *)arg1 ;
-(void)setMaximumCachedAgeForForYou:(unsigned long long)arg1 ;
-(NSDictionary *)resultsByArticleListID;
-(void)setArticleListRequests:(NSMutableArray *)arg1 ;
-(void)setArticleIDsRequests:(NSMutableArray *)arg1 ;
@end
