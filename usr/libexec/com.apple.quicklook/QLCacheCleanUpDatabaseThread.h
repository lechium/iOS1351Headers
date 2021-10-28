//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSConditionLock, NSMutableDictionary, NSThread, _QLCacheThread;

@interface QLCacheCleanUpDatabaseThread : NSObject
{
    NSMutableDictionary *_thumbnailsHit;	// 8 = 0x8
    _QLCacheThread *_cacheThread;	// 16 = 0x10
    NSConditionLock *_threadLock;	// 24 = 0x18
    struct __CFRunLoop *_threadRunLoop;	// 32 = 0x20
    NSThread *_thread;	// 40 = 0x28
    _Bool _diskCacheCleanupDone;	// 48 = 0x30
    int _currentMode;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x00000001000368b0
@property(retain) NSMutableDictionary *thumbnailsHit; // @synthesize thumbnailsHit=_thumbnailsHit;
@property(retain) _QLCacheThread *cacheThread; // @synthesize cacheThread=_cacheThread;
@property _Bool diskCacheCleanupDone; // @synthesize diskCacheCleanupDone=_diskCacheCleanupDone;
@property(readonly, nonatomic) int currentMode; // @synthesize currentMode=_currentMode;
- (void)_threadMain;	// IMP=0x0000000100036554
- (void)cleanUpForReset;	// IMP=0x0000000100036198
- (void)_writeAndCleanUp;	// IMP=0x0000000100035cb8
- (_Bool)_updateHitCount;	// IMP=0x0000000100035b6c
- (void)_stopWriteAndCleanUpThreadRunLoop;	// IMP=0x0000000100035b18
@property(readonly, nonatomic) unsigned long long hitToSaveCount;
- (void)addHitWithThumbnailData:(id)arg1;	// IMP=0x000000010003580c
- (void)pause;	// IMP=0x0000000100035738
- (void)stop;	// IMP=0x000000010003548c
- (void)startCleanUp;	// IMP=0x0000000100035320
- (void)dealloc;	// IMP=0x00000001000352b0
- (id)initWithCacheThread:(id)arg1;	// IMP=0x0000000100035200

@end
