//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "STPersistenceOperation.h"

@interface STCoreDataCloudKitMirroringSyncOperation : STPersistenceOperation
{
}

- (void)main;	// IMP=0x0000000100011f78
- (void)_exportWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100011984
- (void)_migrateWithExportNeeded:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000117bc
- (void)_reconcileWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100011588
- (void)_importWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100010f94
- (void)synchronizeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100010ce0

@end

