//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, QLCacheFragHandler, _QLCacheThread;

@interface QLCacheMMAPBlobDatabase : NSObject
{
    NSString *_path;	// 8 = 0x8
    QLCacheFragHandler *_fragHandler;	// 16 = 0x10
    int _file;	// 24 = 0x18
    unsigned long long _maxSize;	// 32 = 0x20
    void *_vmFile;	// 40 = 0x28
    NSMutableArray *_reservedBuffers;	// 48 = 0x30
    _QLCacheThread *_cacheThread;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010003c348
@property __weak _QLCacheThread *cacheThread; // @synthesize cacheThread=_cacheThread;
@property(readonly) unsigned long long maxSize; // @synthesize maxSize=_maxSize;
- (void)validateReservedBufferWithBlobInfo:(id)arg1;	// IMP=0x000000010003c258
- (void)discardReservedBufferWithBlobInfo:(id)arg1;	// IMP=0x000000010003c168
- (void *)bufferPointedToByBlobInfo:(id)arg1;	// IMP=0x000000010003c138
- (id)reserveBufferWithLength:(unsigned long long)arg1;	// IMP=0x000000010003be54
- (void)reset;	// IMP=0x000000010003bd5c
- (void)close;	// IMP=0x000000010003bb14
- (void)save;	// IMP=0x000000010003ba40
- (_Bool)isOpen;	// IMP=0x000000010003ba30
- (id)checkConsistency:(id)arg1;	// IMP=0x000000010003b30c
- (_Bool)isValid;	// IMP=0x000000010003b0b0
- (void)open;	// IMP=0x000000010003adec
@property(readonly) unsigned long long size;
- (id)cacheHolesOrderedByStart;	// IMP=0x000000010003adcc
@property(readonly) float fragmentation;
- (_Bool)doesExist;	// IMP=0x000000010003ac5c
- (void)compactFragmentation;	// IMP=0x000000010003ac24
- (_Bool)deleteBlobsWithArray:(id)arg1;	// IMP=0x000000010003aaf0
- (_Bool)deleteBlobWithInfo:(id)arg1;	// IMP=0x000000010003a990
- (id)copyBlobWithInfo:(id)arg1;	// IMP=0x000000010003a540
- (id)initWithPath:(id)arg1 cacheSize:(long long)arg2 cacheThread:(id)arg3;	// IMP=0x000000010003a458

@end

