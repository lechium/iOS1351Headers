//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager, NSMutableSet, NSString, PLLibraryServicesManager;
@protocol OS_dispatch_queue, PLUnlocker;

@interface PLMacLibraryOpenClient : NSObject
{
    PLLibraryServicesManager *_libraryServicesManager;	// 8 = 0x8
    NSString *_clientIdentifier;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_permissionCheckQueue;	// 24 = 0x18
    NSMutableSet *_cachedReadAccessPaths;	// 32 = 0x20
    NSMutableSet *_cachedWriteAccessPaths;	// 40 = 0x28
    NSFileManager *_fileManager;	// 48 = 0x30
    _Bool _isCorruptDB;	// 56 = 0x38
    id <PLUnlocker> _bundleUnlocker;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100012200
@property(readonly) id <PLUnlocker> bundleUnlocker; // @synthesize bundleUnlocker=_bundleUnlocker;
- (long long)performMigrationWithError:(id *)arg1;	// IMP=0x00000001000121ec
- (id)initWithLibraryServiceManager:(id)arg1 clientIdentifier:(id)arg2;	// IMP=0x000000010001200c

@end

