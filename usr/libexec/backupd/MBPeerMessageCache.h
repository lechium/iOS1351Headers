//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MBPeerMessageCache : NSObject
{
    struct os_unfair_lock_s _cacheLock;	// 8 = 0x8
    NSMutableDictionary *_successResponses;	// 16 = 0x10
    NSMutableDictionary *_failureResponses;	// 24 = 0x18
    NSMutableDictionary *_mostRecentResponseHandlers;	// 32 = 0x20
    NSMutableDictionary *_currentTransactionsByTask;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010014f128
@property(readonly) NSMutableDictionary *currentTransactionsByTask; // @synthesize currentTransactionsByTask=_currentTransactionsByTask;
@property(readonly) NSMutableDictionary *mostRecentResponseHandlers; // @synthesize mostRecentResponseHandlers=_mostRecentResponseHandlers;
@property(readonly) NSMutableDictionary *failureResponses; // @synthesize failureResponses=_failureResponses;
@property(readonly) NSMutableDictionary *successResponses; // @synthesize successResponses=_successResponses;
@property struct os_unfair_lock_s cacheLock; // @synthesize cacheLock=_cacheLock;
- (void)reset;	// IMP=0x000000010014effc
- (void)finishedHandlingTask:(id)arg1 response:(id)arg2 responseError:(id)arg3;	// IMP=0x000000010014eea0
- (_Bool)shouldHandleNewRequestForTask:(id)arg1 transactionID:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010014eb28
- (id)init;	// IMP=0x000000010014ea78

@end

