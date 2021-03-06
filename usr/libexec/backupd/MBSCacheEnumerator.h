//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class MBSCacheStmt;

@interface MBSCacheEnumerator : NSEnumerator
{
    MBSCacheStmt *_stmt;	// 8 = 0x8
    CDUnknownBlockType _block;	// 16 = 0x10
    _Bool _closed;	// 24 = 0x18
}

+ (id)enumeratorWithStmt:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000010018ae08
- (void)close;	// IMP=0x000000010018afec
- (id)nextObject;	// IMP=0x000000010018af1c
- (void)dealloc;	// IMP=0x000000010018aed0
- (id)initWithStmt:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000010018ae48

@end

