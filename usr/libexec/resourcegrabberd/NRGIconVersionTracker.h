//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol NRGIconVersionTracking;

@interface NRGIconVersionTracker : NSObject
{
    int _appConduitNotifyToken;	// 8 = 0x8
    NSMutableDictionary *_iconVersionDictionary;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 24 = 0x18
    _Bool _dirty;	// 28 = 0x1c
    NSObject<NRGIconVersionTracking> *_delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000085c4
@property(readonly, nonatomic) __weak NSObject<NRGIconVersionTracking> *delegate; // @synthesize delegate=_delegate;
- (void)_removeActiveIconVersions;	// IMP=0x00000001000083c4
- (void)_writeActiveIconVersions;	// IMP=0x0000000100008150
- (id)_readActiveIconVersions;	// IMP=0x0000000100007ed8
- (id)_activeVersionHistoryURL;	// IMP=0x0000000100007d8c
- (_Bool)_appVersionChanged:(id)arg1;	// IMP=0x000000010000799c
- (id)_noLongerTrackedBundleIDs:(id)arg1;	// IMP=0x000000010000785c
- (void)_appConduitUpdated;	// IMP=0x0000000100007130
- (void)reset;	// IMP=0x0000000100007090
- (void)commit;	// IMP=0x0000000100006ffc
- (void)setVersion:(id)arg1 forBundleID:(id)arg2;	// IMP=0x0000000100006e58
- (void)deviceSwitched;	// IMP=0x0000000100006d60
- (void)suspend;	// IMP=0x0000000100006c70
- (void)start;	// IMP=0x0000000100006954
- (void)_withLock:(CDUnknownBlockType)arg1;	// IMP=0x000000010000690c
- (void)dealloc;	// IMP=0x00000001000068c0
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000010000676c

@end
