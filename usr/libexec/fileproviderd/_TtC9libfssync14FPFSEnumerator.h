//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC9libfssync14FPFSEnumerator : NSObject
{
    MISSING_TYPE *observer;	// 8 = 0x8
    MISSING_TYPE *backend;	// 16 = 0x10
    MISSING_TYPE *vfsItemID;	// 24 = 0x18
    MISSING_TYPE *wantsTrashEnumeration;	// 33 = 0x21
    MISSING_TYPE *unionEnumerator;	// 40 = 0x28
    MISSING_TYPE *extensionObserver;	// 56 = 0x38
    MISSING_TYPE *lifetimeExtender;	// 64 = 0x40
    MISSING_TYPE *keepAlive;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000100039128
- (id)init;	// IMP=0x0000000100039a5c
- (void)keepAliveConnectionForRegisteredObserver:(CDUnknownBlockType)arg1;	// IMP=0x00000001000399fc
- (void)enumerateChangesFromToken:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100039940
- (void)enumerateItemsFromPage:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100039890
- (void)currentSyncAnchorWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100039804
- (void)invalidate;	// IMP=0x00000001000397d8
- (void)dealloc;	// IMP=0x00000001000390e0

@end
