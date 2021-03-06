//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, _QLCacheThread;

@interface QLCacheFragHandler : NSObject
{
    unsigned long long _totalLen;	// 8 = 0x8
    unsigned long long _holesLen;	// 16 = 0x10
    NSArray *_sizeRanks;	// 24 = 0x18
    NSMutableArray *_orderedByStart;	// 32 = 0x20
    NSString *_path;	// 40 = 0x28
    _Bool _isDirty;	// 48 = 0x30
    _Bool _needsCompact;	// 49 = 0x31
    _QLCacheThread *_cacheThread;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100032f30
@property __weak _QLCacheThread *cacheThread; // @synthesize cacheThread=_cacheThread;
- (id)orderedByStart;	// IMP=0x0000000100032f04
- (void)assertSpaceIsRetainedAtPos:(unsigned long long)arg1 withLen:(unsigned long long)arg2;	// IMP=0x0000000100032d10
- (_Bool)checkConsistency;	// IMP=0x0000000100032b8c
- (_Bool)checkHolesLenConsistency;	// IMP=0x0000000100032a94
- (_Bool)save;	// IMP=0x0000000100032900
- (void)compact;	// IMP=0x00000001000325a4
- (id)dataToSave;	// IMP=0x00000001000322e8
- (_Bool)isDirty;	// IMP=0x00000001000322e0
- (float)frag;	// IMP=0x00000001000322bc
- (unsigned long long)totalLen;	// IMP=0x00000001000322b4
- (void)truncateFromPosition:(unsigned long long)arg1;	// IMP=0x000000010003219c
- (void)truncateUselessSpaceAtEndOfFile;	// IMP=0x00000001000320fc
- (id)lastHole;	// IMP=0x00000001000320b4
- (_Bool)canFindHoleForLen:(unsigned long long)arg1;	// IMP=0x0000000100031f98
- (void)releaseSpaceAtPos:(unsigned long long)arg1 withLen:(unsigned long long)arg2;	// IMP=0x0000000100031c5c
- (unsigned long long)allocateSpaceForLength:(unsigned long long)arg1 added:(_Bool *)arg2;	// IMP=0x000000010003190c
- (void)clear;	// IMP=0x000000010003187c
- (void)_insertHoleInRanks:(id)arg1;	// IMP=0x000000010003174c
- (void)_removeHoleFromRanks:(id)arg1;	// IMP=0x00000001000316ac
- (id)initWithCacheThread:(id)arg1;	// IMP=0x0000000100031674
- (id)initWithDictionary:(id)arg1 cacheThread:(id)arg2;	// IMP=0x0000000100031500
- (id)initWithFilePath:(id)arg1 cacheThread:(id)arg2;	// IMP=0x0000000100031430
- (id)initWithHolePositions:(id)arg1 holeLengths:(id)arg2 totalLength:(long long)arg3 holesLength:(long long)arg4 cacheThread:(id)arg5;	// IMP=0x0000000100031170

@end

