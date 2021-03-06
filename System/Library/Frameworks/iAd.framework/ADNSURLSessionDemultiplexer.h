/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:26 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/iAd.framework/iAd
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSMutableDictionary, NSURLSessionConfiguration, NSURLSession, NSObject;

@interface ADNSURLSessionDemultiplexer : NSObject <NSURLSessionDataDelegate> {

	BOOL _sessionMarkedInvalid;
	NSString* _identifier;
	long long _requestCount;
	NSMutableDictionary* _taskInfoByTaskIdentifier;
	NSURLSessionConfiguration* _configuration;
	NSURLSession* _session;
	NSObject*<OS_dispatch_queue> _demuxQueue;
	long long _maximumRequestCount;
	/*^block*/id _sessionInvalidated;

}

@property (retain) NSMutableDictionary * taskInfoByTaskIdentifier;                 //@synthesize taskInfoByTaskIdentifier=_taskInfoByTaskIdentifier - In the implementation block
@property (retain) NSURLSessionConfiguration * configuration;                      //@synthesize configuration=_configuration - In the implementation block
@property (retain) NSURLSession * session;                                         //@synthesize session=_session - In the implementation block
@property (copy) NSString * identifier;                                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> demuxQueue;              //@synthesize demuxQueue=_demuxQueue - In the implementation block
@property (assign,nonatomic) long long requestCount;                               //@synthesize requestCount=_requestCount - In the implementation block
@property (assign,nonatomic) long long maximumRequestCount;                        //@synthesize maximumRequestCount=_maximumRequestCount - In the implementation block
@property (nonatomic,copy) id sessionInvalidated;                                  //@synthesize sessionInvalidated=_sessionInvalidated - In the implementation block
@property (assign,nonatomic) BOOL sessionMarkedInvalid;                            //@synthesize sessionMarkedInvalid=_sessionMarkedInvalid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSURLSession *)session;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)setConfiguration:(NSURLSessionConfiguration *)arg1 ;
-(NSURLSessionConfiguration *)configuration;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)removeTask:(id)arg1 ;
-(long long)requestCount;
-(id)sessionInvalidated;
-(id)taskInfoForTask:(id)arg1 ;
-(void)setRequestCount:(long long)arg1 ;
-(void)setMaximumRequestCount:(long long)arg1 ;
-(id)initWithConfiguration:(id)arg1 forIdentifier:(id)arg2 withMaximumRequestCount:(long long)arg3 ;
-(void)invalidateSessionWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)dataTaskWithRequest:(id)arg1 delegate:(id)arg2 modes:(id)arg3 ;
-(BOOL)sessionMarkedInvalid;
-(long long)maximumRequestCount;
-(NSObject*<OS_dispatch_queue>)demuxQueue;
-(NSMutableDictionary *)taskInfoByTaskIdentifier;
-(void)setSessionMarkedInvalid:(BOOL)arg1 ;
-(void)setSessionInvalidated:(id)arg1 ;
-(void)setTaskInfoByTaskIdentifier:(NSMutableDictionary *)arg1 ;
-(void)setDemuxQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

