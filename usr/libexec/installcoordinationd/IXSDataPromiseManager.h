//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IXSDataPromiseDelegate-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface IXSDataPromiseManager : NSObject <IXSDataPromiseDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_uuidToPromiseMap;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000100043934
+ (id)saveDir;	// IMP=0x00000001000438a8
+ (id)savePathForPromise:(id)arg1;	// IMP=0x00000001000437bc
- (void).cxx_destruct;	// IMP=0x0000000100045a14
@property(readonly, nonatomic) NSMutableDictionary *uuidToPromiseMap; // @synthesize uuidToPromiseMap=_uuidToPromiseMap;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)promise:(id)arg1 didCancelForReason:(id)arg2 client:(unsigned long long)arg3;	// IMP=0x0000000100045870
- (void)promise:(id)arg1 didUpdateProgress:(double)arg2;	// IMP=0x0000000100045780
- (void)promiseDidReset:(id)arg1;	// IMP=0x00000001000456a8
- (void)promiseDidComplete:(id)arg1;	// IMP=0x00000001000455d0
- (void)promiseDidBegin:(id)arg1;	// IMP=0x00000001000454f8
- (void)clearAllPromisesForCreator:(unsigned long long)arg1;	// IMP=0x00000001000450e8
- (void)decommissionPromise:(id)arg1;	// IMP=0x0000000100044fbc
- (void)enumeratePromises:(CDUnknownBlockType)arg1;	// IMP=0x0000000100044e10
- (void)registerPromise:(id)arg1;	// IMP=0x0000000100044b48
- (id)promiseForUUID:(id)arg1;	// IMP=0x0000000100044958
- (id)promiseForUUID:(id)arg1 ofType:(Class)arg2;	// IMP=0x0000000100044948
- (id)_promiseForUUID:(id)arg1 ofType:(Class)arg2 useQueue:(_Bool)arg3;	// IMP=0x0000000100044768
- (void)_onQueue_restoreSavedPromises;	// IMP=0x0000000100043af0
- (id)init;	// IMP=0x00000001000439e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

