//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface MIWatchKitAppSnapshot : NSObject
{
    _Bool _onlyV1;	// 8 = 0x8
    _Bool _placeholderOnly;	// 9 = 0x9
    _Bool _identifierLocked;	// 10 = 0xa
    NSDictionary *_resultDict;	// 16 = 0x10
    NSString *_bundleID;	// 24 = 0x18
    NSString *_watchKitAppBundleID;	// 32 = 0x20
    NSURL *_destURL;	// 40 = 0x28
    unsigned long long _diskUsage;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100022530
@property(nonatomic) _Bool identifierLocked; // @synthesize identifierLocked=_identifierLocked;
@property(nonatomic) unsigned long long diskUsage; // @synthesize diskUsage=_diskUsage;
@property(readonly, nonatomic) NSURL *destURL; // @synthesize destURL=_destURL;
@property(readonly, nonatomic) _Bool placeholderOnly; // @synthesize placeholderOnly=_placeholderOnly;
@property(readonly, nonatomic) _Bool onlyV1; // @synthesize onlyV1=_onlyV1;
@property(copy, nonatomic) NSString *watchKitAppBundleID; // @synthesize watchKitAppBundleID=_watchKitAppBundleID;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSDictionary *resultDict; // @synthesize resultDict=_resultDict;
- (_Bool)createSnapshotWithError:(id *)arg1;	// IMP=0x00000001000222c0
- (void)dealloc;	// IMP=0x0000000100022248
- (id)initWithBundleID:(id)arg1 snapshotTo:(id)arg2 onlyV1AppIfPresent:(_Bool)arg3 placeholderOnly:(_Bool)arg4;	// IMP=0x0000000100022188

@end

