//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ContentBufferCache : NSObject
{
    NSMutableArray *_bufferPool;	// 8 = 0x8
    NSMutableDictionary *_cacheBuffers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010000ce74
- (void)emptyBufferPool;	// IMP=0x000000010000cd98
- (void)populateCacheWithBuffer:(id)arg1;	// IMP=0x000000010000cd0c
- (id)getBufferAtOffset:(unsigned long long)arg1 withEmptyContent:(_Bool)arg2;	// IMP=0x000000010000cbb8
- (void)allocateBufferPool;	// IMP=0x000000010000ca90
- (id)init;	// IMP=0x000000010000ca10

@end
