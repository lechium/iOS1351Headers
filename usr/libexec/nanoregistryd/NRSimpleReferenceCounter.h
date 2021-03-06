//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_queue;

@interface NRSimpleReferenceCounter : NSObject
{
    CDUnknownBlockType _allocateBlock;	// 8 = 0x8
    CDUnknownBlockType _freeBlock;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    _Bool _async;	// 32 = 0x20
    struct os_unfair_lock_s _mapLock;	// 36 = 0x24
    NSMapTable *_map;	// 40 = 0x28
    CDUnknownBlockType _didAddBlock;	// 48 = 0x30
    CDUnknownBlockType _didRemoveBlock;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100096d24
@property(copy, nonatomic) CDUnknownBlockType didRemoveBlock; // @synthesize didRemoveBlock=_didRemoveBlock;
@property(copy, nonatomic) CDUnknownBlockType didAddBlock; // @synthesize didAddBlock=_didAddBlock;
- (_Bool)containsObject:(id)arg1;	// IMP=0x0000000100096c70
- (void)enumerateObjects:(CDUnknownBlockType)arg1;	// IMP=0x0000000100096a54
- (void)removeAllObjects;	// IMP=0x0000000100096a48
- (void)removeAllObjectsWithCleanupBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100096a3c
- (void)removeObject:(id)arg1;	// IMP=0x0000000100096a2c
- (void)removeObject:(id)arg1 withCleanupBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000966e8
- (void)addObject:(id)arg1 withAllocationBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000963d8
- (void)addObject:(id)arg1;	// IMP=0x00000001000963c8
- (void)clear;	// IMP=0x00000001000963b8
- (void)clearWithCleanupBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100096310
- (void)_clearWithCleanupBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100096114
- (void)_justDoItWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000960a8
- (id)initWithAllocateBlock:(CDUnknownBlockType)arg1 freeBlock:(CDUnknownBlockType)arg2 queue:(id)arg3 async:(_Bool)arg4;	// IMP=0x0000000100095f94

@end

