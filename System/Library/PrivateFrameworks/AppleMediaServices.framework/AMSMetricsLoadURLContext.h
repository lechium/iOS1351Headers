/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AMSBagProtocol;
@class NSError, AMSProcessInfo, NSData, NSURLSession, NSURLSessionTask, NSURLSessionTaskMetrics, NSDictionary;

@interface AMSMetricsLoadURLContext : NSObject {

	id<AMSBagProtocol> _bag;
	NSError* _error;
	AMSProcessInfo* _processInfo;
	NSData* _responseBody;
	NSURLSession* _session;
	NSURLSessionTask* _task;
	NSURLSessionTaskMetrics* _taskMetrics;
	NSDictionary* _decodedResponseBody;

}

@property (nonatomic,retain) NSDictionary * decodedResponseBody;                 //@synthesize decodedResponseBody=_decodedResponseBody - In the implementation block
@property (nonatomic,retain) id<AMSBagProtocol> bag;                             //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) NSError * error;                                    //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * processInfo;                       //@synthesize processInfo=_processInfo - In the implementation block
@property (nonatomic,retain) NSData * responseBody;                              //@synthesize responseBody=_responseBody - In the implementation block
@property (nonatomic,retain) NSURLSession * session;                             //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSURLSessionTask * task;                            //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) NSURLSessionTaskMetrics * taskMetrics;              //@synthesize taskMetrics=_taskMetrics - In the implementation block
-(NSError *)error;
-(AMSProcessInfo *)processInfo;
-(void)setError:(NSError *)arg1 ;
-(NSURLSession *)session;
-(void)setSession:(NSURLSession *)arg1 ;
-(NSURLSessionTask *)task;
-(void)setTask:(NSURLSessionTask *)arg1 ;
-(NSData *)responseBody;
-(NSURLSessionTaskMetrics *)taskMetrics;
-(void)setTaskMetrics:(NSURLSessionTaskMetrics *)arg1 ;
-(void)setProcessInfo:(AMSProcessInfo *)arg1 ;
-(id<AMSBagProtocol>)bag;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(id)bagContract;
-(void)setBagContract:(id)arg1 ;
-(id)initWithTask:(id)arg1 metrics:(id)arg2 ;
-(id)initWithTaskInfo:(id)arg1 serverPayload:(id)arg2 ;
-(void)setResponseBody:(NSData *)arg1 ;
-(NSDictionary *)decodedResponseBody;
-(void)setDecodedResponseBody:(NSDictionary *)arg1 ;
@end

