/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/AMSMetricsFlushStrategy.h>

@protocol AMSBagProtocol, AMSMetricsDataSource;
@class AMSURLSession, NSString, AMSPromise;

@interface AMSMetricsFigaroFlushTask : AMSTask <AMSMetricsFlushStrategy> {

	BOOL _cancelled;
	int _requestCount;
	AMSURLSession* _URLSession;
	id<AMSBagProtocol> _bag;
	id<AMSMetricsDataSource> _dataSource;
	long long _maxRequestCount;
	long long _maxBatchSize;
	NSString* _topic;
	AMSPromise* _currentCancellablePromise;

}

@property (nonatomic,retain) AMSPromise * currentCancellablePromise;              //@synthesize currentCancellablePromise=_currentCancellablePromise - In the implementation block
@property (assign,nonatomic) int requestCount;                                    //@synthesize requestCount=_requestCount - In the implementation block
@property (nonatomic,readonly) AMSURLSession * URLSession;                        //@synthesize URLSession=_URLSession - In the implementation block
@property (nonatomic,retain) id<AMSBagProtocol> bag;                              //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) id<AMSMetricsDataSource> dataSource;                 //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) long long maxRequestCount;                           //@synthesize maxRequestCount=_maxRequestCount - In the implementation block
@property (assign,nonatomic) long long maxBatchSize;                              //@synthesize maxBatchSize=_maxBatchSize - In the implementation block
@property (nonatomic,retain) NSString * topic;                                    //@synthesize topic=_topic - In the implementation block
@property (nonatomic,readonly) BOOL cancelled;                                    //@synthesize cancelled=_cancelled - In the implementation block
-(void)cancel;
-(BOOL)cancelled;
-(NSString *)topic;
-(id<AMSMetricsDataSource>)dataSource;
-(void)setDataSource:(id<AMSMetricsDataSource>)arg1 ;
-(void)setTopic:(NSString *)arg1 ;
-(int)requestCount;
-(long long)maxBatchSize;
-(AMSURLSession *)URLSession;
-(id<AMSBagProtocol>)bag;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(id)initWithDataSource:(id)arg1 bag:(id)arg2 ;
-(void)setMaxBatchSize:(long long)arg1 ;
-(long long)maxRequestCount;
-(void)setMaxRequestCount:(long long)arg1 ;
-(id)performFlush;
-(AMSPromise *)currentCancellablePromise;
-(void)setRequestCount:(int)arg1 ;
-(id)_nextBatchWithConfig:(id)arg1 error:(id*)arg2 ;
-(id)_postBatch:(id)arg1 error:(id*)arg2 ;
-(BOOL)_shouldClearEventsDespiteError:(id)arg1 result:(id)arg2 ;
-(id)_mescalSignatureWithBodyData:(id)arg1 error:(id*)arg2 ;
-(void)setCurrentCancellablePromise:(AMSPromise *)arg1 ;
@end

