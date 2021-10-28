/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /usr/lib/libacmobileshim.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ACFHTTPMethodInvocationDelegate.h>
#import <libobjc.A.dylib/ACFHTTPTransportProtocol.h>

@class NSString, NSArray, NSDictionary, NSData, NSMutableArray, NSTimer;

@interface ACFHTTPTransport : NSObject <ACFHTTPMethodInvocationDelegate, ACFHTTPTransportProtocol> {

	NSString* _httpMethod;
	NSDictionary* _httpHeader;
	NSDictionary* _httpGETParameters;
	NSData* _httpPOSTBody;
	double _timeout;
	BOOL _isCanceled;
	NSString* _requestURLTemplate;
	NSArray* _serverHosts;
	NSArray* _serverAttemptsDelays;
	/*^block*/id _retryCheckBlock;
	/*^block*/id _completionBlock;
	NSMutableArray* _inProgressServerInvocations;
	NSMutableArray* _queuedServerInvocations;
	NSTimer* _failoverTimer;
	unsigned long long _tryCounter;

}

@property (nonatomic,copy) id completionBlock;                                          //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) NSMutableArray * inProgressServerInvocations;              //@synthesize inProgressServerInvocations=_inProgressServerInvocations - In the implementation block
@property (nonatomic,retain) NSMutableArray * queuedServerInvocations;                  //@synthesize queuedServerInvocations=_queuedServerInvocations - In the implementation block
@property (nonatomic,retain) NSTimer * failoverTimer;                                   //@synthesize failoverTimer=_failoverTimer - In the implementation block
@property (assign,nonatomic) unsigned long long tryCounter;                             //@synthesize tryCounter=_tryCounter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * requestURLTemplate;                             //@synthesize requestURLTemplate=_requestURLTemplate - In the implementation block
@property (nonatomic,retain) NSArray * serverHosts;                                     //@synthesize serverHosts=_serverHosts - In the implementation block
@property (nonatomic,retain) NSArray * serverAttemptsDelays;                            //@synthesize serverAttemptsDelays=_serverAttemptsDelays - In the implementation block
@property (nonatomic,retain) NSString * httpMethod;                                     //@synthesize httpMethod=_httpMethod - In the implementation block
@property (nonatomic,retain) NSDictionary * httpHeader;                                 //@synthesize httpHeader=_httpHeader - In the implementation block
@property (nonatomic,retain) NSDictionary * httpGETParameters;                          //@synthesize httpGETParameters=_httpGETParameters - In the implementation block
@property (nonatomic,retain) NSData * httpPOSTBody;                                     //@synthesize httpPOSTBody=_httpPOSTBody - In the implementation block
@property (assign,nonatomic) double timeout;                                            //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) BOOL isCanceled;                                           //@synthesize isCanceled=_isCanceled - In the implementation block
@property (nonatomic,copy) id retryCheckBlock;                                          //@synthesize retryCheckBlock=_retryCheckBlock - In the implementation block
-(void)dealloc;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)didEnd;
-(double)timeout;
-(void)setTimeout:(double)arg1 ;
-(BOOL)isCanceled;
-(void)cancelRequest;
-(void)setIsCanceled:(BOOL)arg1 ;
-(NSString *)httpMethod;
-(void)setHttpMethod:(NSString *)arg1 ;
-(void)performRequest;
-(void)didStart;
-(BOOL)hasFinishedServerInvocations;
-(void)cancelAllInvocations;
-(void)setRetryCheckBlock:(id)arg1 ;
-(void)setRequestURLTemplate:(NSString *)arg1 ;
-(void)setHttpHeader:(NSDictionary *)arg1 ;
-(void)setHttpGETParameters:(NSDictionary *)arg1 ;
-(void)setHttpPOSTBody:(NSData *)arg1 ;
-(void)setServerHosts:(NSArray *)arg1 ;
-(void)setServerAttemptsDelays:(NSArray *)arg1 ;
-(NSMutableArray *)queuedServerInvocations;
-(NSMutableArray *)inProgressServerInvocations;
-(unsigned long long)tryCounter;
-(void)setTryCounter:(unsigned long long)arg1 ;
-(void)unscheduleInvocation:(id)arg1 ;
-(id)retryCheckBlock;
-(void)scheduleNextQueuedRequest;
-(NSTimer *)failoverTimer;
-(void)setFailoverTimer:(NSTimer *)arg1 ;
-(void)setInProgressServerInvocations:(NSMutableArray *)arg1 ;
-(void)removeFromQueuedServerInvocations:(id)arg1 ;
-(void)setQueuedServerInvocations:(NSMutableArray *)arg1 ;
-(id)requestString:(id)arg1 ;
-(NSArray *)serverHosts;
-(NSDictionary *)httpHeader;
-(NSData *)httpPOSTBody;
-(NSString *)requestURLTemplate;
-(NSDictionary *)httpGETParameters;
-(id)urlWithRequest:(id)arg1 address:(id)arg2 ;
-(NSArray *)serverAttemptsDelays;
-(void)scheduleInvocation:(id)arg1 ;
-(void)addToQueuedServerInvocations:(id)arg1 ;
-(void)scheduleTimerForNextAttempt;
-(void)invocation:(id)arg1 didFinishWithError:(id)arg2 response:(id)arg3 ;
-(void)httpMethodInvocation:(id)arg1 didFinishWithResult:(id)arg2 ;
-(void)httpMethodInvocation:(id)arg1 didFailWithError:(id)arg2 ;
-(void)performRequestWithCompletionBlock:(/*^block*/id)arg1 ;
@end
