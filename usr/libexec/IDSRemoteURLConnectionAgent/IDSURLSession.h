//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"

@class NSMutableDictionary, NSString, NSURLSession;
@protocol OS_dispatch_queue;

@interface IDSURLSession : NSObject <NSURLSessionDataDelegate>
{
    NSURLSession *_session;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_sessionQueue;	// 16 = 0x10
    NSMutableDictionary *_pendingSessionOperations;	// 24 = 0x18
    _Bool _requireIDSHost;	// 32 = 0x20
}

+ (id)sharedSessionRequiringIDSHost;	// IMP=0x0000000100005c74
+ (id)sharedSession;	// IMP=0x0000000100005c08
+ (id)sharedQueue;	// IMP=0x0000000100005b70
- (void).cxx_destruct;	// IMP=0x0000000100008170
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0000000100007e2c
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100006fb8
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;	// IMP=0x0000000100006cd0
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x0000000100006a04
- (void)_sessionQueue_dequeueTask:(id)arg1 withResponse:(id)arg2 error:(id)arg3;	// IMP=0x00000001000067d8
- (void)_sessionQueue_updateTask:(id)arg1 withData:(id)arg2;	// IMP=0x00000001000065e0
- (void)_sessionQueue_enqueueTask:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000063e0
- (id)dataTaskWithRequest:(id)arg1 completionBlockWithTimingData:(CDUnknownBlockType)arg2;	// IMP=0x00000001000061fc
- (id)dataTaskWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000060a0
- (id)initWithRequiresIdsHost;	// IMP=0x0000000100006078
- (id)init;	// IMP=0x0000000100005cec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
