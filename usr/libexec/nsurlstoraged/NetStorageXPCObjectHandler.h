//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NetworkStorageXPCProtocol-Protocol.h"

@class NSString, NSURLReadStorageTaskManager, NSURLWriteStorageTaskManager, NSXPCConnection;
@protocol OS_dispatch_source;

@interface NetStorageXPCObjectHandler : NSObject <NetworkStorageXPCProtocol>
{
    NSURLReadStorageTaskManager *_readTaskManager;	// 8 = 0x8
    NSURLWriteStorageTaskManager *_writeTaskManager;	// 16 = 0x10
    NSXPCConnection *_xpcConnection;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_memoryPressureSource;	// 32 = 0x20
    unsigned long long _lastMemoryPressureEvent;	// 40 = 0x28
    double _idleTime;	// 48 = 0x30
    NSString *_clientBundleID;	// 56 = 0x38
}

+ (void)unlock;	// IMP=0x0000000100006ec8
+ (void)lock;	// IMP=0x0000000100006ebc
+ (void)touchIdleExitTimer;	// IMP=0x0000000100006e60
+ (void)_resetIdleExitTimer;	// IMP=0x0000000100006e18
- (void).cxx_destruct;	// IMP=0x0000000100006a0c
@property(retain, nonatomic) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property double idleTime; // @synthesize idleTime=_idleTime;
@property unsigned long long lastMemoryPressureEvent; // @synthesize lastMemoryPressureEvent=_lastMemoryPressureEvent;
@property(retain) NSObject<OS_dispatch_source> *memoryPressureSource; // @synthesize memoryPressureSource=_memoryPressureSource;
@property(readonly) __weak NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)flushWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000067ec
- (void)totalBytesWrittenToDiskWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100006734
- (void)performSchemaCheckAndUpdate;	// IMP=0x000000010000667c
- (void)setMinSizeForVMCachedResource:(long long)arg1;	// IMP=0x00000001000065f8
- (void)currentDiskUsageWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100006510
- (void)setMaxSize:(long long)arg1;	// IMP=0x000000010000648c
- (void)copyAllPartitionNamesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100006350
- (void)copyAllHostNamesForOptionalPartition:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000061f0
- (void)deleteAllHostNames:(id)arg1 forOptionalPartition:(id)arg2;	// IMP=0x0000000100006110
- (void)deleteResponsesSinceDate:(id)arg1;	// IMP=0x0000000100006054
- (void)deleteAllResponses;	// IMP=0x0000000100005fa0
- (void)deleteResponseForRequestWithKey:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005e54
- (void)addCachedResponseWithDictionary:(id)arg1 key:(id)arg2;	// IMP=0x0000000100005adc
- (void)createStorageTaskManagerForPath:(id)arg1 maxSize:(long long)arg2 extension:(id)arg3;	// IMP=0x000000010000575c
- (void)setupMemoryPressureHandler;	// IMP=0x0000000100005664
- (void)touchTimers;	// IMP=0x00000001000055e8
- (void)cleanupTaskManagers;	// IMP=0x0000000100005580
- (void)dealloc;	// IMP=0x00000001000054f8
- (id)initWithConnection:(id)arg1;	// IMP=0x00000001000053d8

@end

