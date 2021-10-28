//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CDPurgeableResultCache-Protocol.h"

@class CDRecentInfo, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CDPurgeableResultCache : NSObject <CDPurgeableResultCache>
{
    _Bool _empty;	// 8 = 0x8
    CDRecentInfo *_recentPurgeableResults;	// 16 = 0x10
    NSString *_path;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    CDUnknownBlockType _updatedBlock;	// 40 = 0x28
}

+ (id)sharedPurgeableResultsCache;	// IMP=0x0000000100027810
+ (id)defaultPath;	// IMP=0x0000000100027778
+ (id)pathForVersion:(unsigned long long)arg1;	// IMP=0x00000001000276e8
+ (unsigned long long)currentVersion;	// IMP=0x00000001000276e0
- (void).cxx_destruct;	// IMP=0x000000010002ae5c
@property(copy, nonatomic) CDUnknownBlockType updatedBlock; // @synthesize updatedBlock=_updatedBlock;
@property(readonly, nonatomic) _Bool empty; // @synthesize empty=_empty;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) CDRecentInfo *recentPurgeableResults; // @synthesize recentPurgeableResults=_recentPurgeableResults;
- (void)invalidateAll;	// IMP=0x000000010002abf8
- (void)invalidateRecentResultsForVolume:(id)arg1;	// IMP=0x000000010002aad0
- (id)copyInvalidServicesForVolume:(id)arg1 atUrgency:(id)arg2;	// IMP=0x000000010002a878
- (void)log;	// IMP=0x000000010002a7b8
- (id)diagnosticsForVolume:(id)arg1 atUrgency:(int)arg2;	// IMP=0x000000010002a7b0
- (void)updateDiagnostics:(id)arg1 onVolume:(id)arg2 atUrgency:(int)arg3;	// IMP=0x000000010002a7ac
@property(readonly, nonatomic) _Bool hasInvalids;
- (_Bool)isEmpty;	// IMP=0x000000010002a564
- (void)prune;	// IMP=0x000000010002a554
- (void)prunePreserving:(id)arg1;	// IMP=0x000000010002a3e8
- (void)removeServiceInfo:(id)arg1;	// IMP=0x000000010002a27c
- (void)setUpdateNotificationBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010002a1b4
- (void)updateRecentStateforVolume:(id)arg1;	// IMP=0x0000000100029ff8
- (void)updateRecentInfoForServiceID:(id)arg1 volume:(id)arg2 info:(id)arg3;	// IMP=0x000000010002938c
- (id)recentPurgeableTotals:(int)arg1;	// IMP=0x000000010002937c
- (id)_recentPurgeableTotals:(int)arg1 validateResults:(_Bool)arg2;	// IMP=0x0000000100028f7c
- (long long)recentStateForVolume:(id)arg1;	// IMP=0x0000000100028de0
- (id)recentInfoForVolumes:(id)arg1 atUrgency:(int)arg2;	// IMP=0x0000000100028dd0
- (id)_recentInfoForVolumes:(id)arg1 atUrgency:(int)arg2 validateResults:(_Bool)arg3;	// IMP=0x00000001000288cc
- (id)recentInfoForVolume:(id)arg1 atUrgency:(int)arg2;	// IMP=0x00000001000288bc
- (id)_recentInfoForVolume:(id)arg1 atUrgency:(int)arg2 validateResults:(_Bool)arg3;	// IMP=0x0000000100028488
- (void)save:(CDUnknownBlockType)arg1;	// IMP=0x000000010002813c
- (id)initWithPath:(id)arg1;	// IMP=0x00000001000278c0

@end
