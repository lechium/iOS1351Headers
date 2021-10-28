//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface GEODiskSpaceManager : NSObject
{
    NSString *_cacheDeleteID;	// 8 = 0x8
    NSMutableArray *_diskSpaceProviders;	// 16 = 0x10
    _Bool _freePurgableInProgress;	// 24 = 0x18
    double _lastSignificantUpdate;	// 32 = 0x20
    double _cachedPurgableTime[4];	// 40 = 0x28
    unsigned long long _cachedPurgableSpace[4];	// 72 = 0x48
}

+ (id)sharedManager;	// IMP=0x000000010001e388
- (void).cxx_destruct;	// IMP=0x000000010001f4ec
@property(readonly, copy, nonatomic) NSString *cacheDeleteID; // @synthesize cacheDeleteID=_cacheDeleteID;
- (unsigned long long)freePurgableDiskSpace:(unsigned long long)arg1 urgency:(int)arg2;	// IMP=0x000000010001f310
- (unsigned long long)purgableDiskSpaceForUrgency:(int)arg1;	// IMP=0x000000010001f138
- (void)reportSignificantPurgableDiskSpaceUpdate;	// IMP=0x000000010001eec8
- (id)diskSpaceProviderForIdentifier:(id)arg1;	// IMP=0x000000010001ecf0
- (void)addDiskSpaceProvider:(id)arg1;	// IMP=0x000000010001ec4c
- (void)_registerCacheDeleteCallbacks;	// IMP=0x000000010001e51c
- (id)_validVolume:(id)arg1;	// IMP=0x000000010001e4a4
- (id)initWithCacheDeleteID:(id)arg1;	// IMP=0x000000010001e414
- (id)init;	// IMP=0x000000010001e408

@end
