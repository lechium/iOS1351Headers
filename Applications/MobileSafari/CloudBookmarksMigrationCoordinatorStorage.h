//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBSCloudBookmarksMigrationCoordinatorStorage-Protocol.h"

@class NSDictionary, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface CloudBookmarksMigrationCoordinatorStorage : NSObject <WBSCloudBookmarksMigrationCoordinatorStorage>
{
    NSObject<OS_dispatch_queue> *_fileAccessQueue;	// 8 = 0x8
    NSURL *_directoryURL;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010007f098
@property(readonly, copy, nonatomic) NSURL *directoryURL; // @synthesize directoryURL=_directoryURL;
@property(nonatomic) _Bool migrationReadinessDataInvalidated;
- (id)_migrationReadinessDeciderURL;	// IMP=0x000000010007efbc
@property(copy, nonatomic) NSDictionary *migrationReadinessDeciderDictionaryRepresentation;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010007ec70
- (void)dealloc;	// IMP=0x000000010007ebe8
- (id)initWithDirectoryURL:(id)arg1;	// IMP=0x000000010007eb04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

