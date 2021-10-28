//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionDataDelegatePrivate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"
#import "NSURLSessionTaskDelegatePrivate-Protocol.h"

@class NSMutableDictionary, NSOperationQueue, NSString, NSURLSession, NSURLSessionConfiguration;
@protocol OS_dispatch_queue;

@interface AssetSession : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate, NSURLSessionDataDelegatePrivate, NSURLSessionTaskDelegate, NSURLSessionTaskDelegatePrivate>
{
    NSOperationQueue *_delegateQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSURLSession *_session;	// 24 = 0x18
    NSMutableDictionary *_sessions;	// 32 = 0x20
}

+ (void)obliterateBackgroundSessionsAndHandleEventStream;	// IMP=0x00000001000df3b8
+ (id)defaultSession;	// IMP=0x00000001000df1e8
- (void).cxx_destruct;	// IMP=0x00000001000e5e1c
- (void)_startTaskUsingTaskInfo:(id)arg1 withRequest:(id)arg2;	// IMP=0x00000001000e4fc0
- (void)_prepareRequestUsingTaskInfo:(id)arg1;	// IMP=0x00000001000e4c08
- (void)_prepareDataConsumerUsingTaskInfo:(id)arg1;	// IMP=0x00000001000e4524
- (void)_retryTaskUsingTaskInfo:(id)arg1;	// IMP=0x00000001000e40fc
- (void)_reportMetricsForTaskInfo:(id)arg1 withCompletionError:(id)arg2;	// IMP=0x00000001000e3d24
- (void)_finishPromiseUsingTaskInfo:(id)arg1;	// IMP=0x00000001000e38d0
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000e3600
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000e2c30
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;	// IMP=0x00000001000e285c
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x00000001000e21cc
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3;	// IMP=0x00000001000e1dbc
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000e050c
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x00000001000dfdd4
- (id)assetPromiseWithRequest:(id)arg1;	// IMP=0x00000001000df5c0
@property(readonly) NSURLSessionConfiguration *configuration;
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000001000df324
- (id)init;	// IMP=0x00000001000df254

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
