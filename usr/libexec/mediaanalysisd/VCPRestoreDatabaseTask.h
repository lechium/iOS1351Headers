//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VCPTask.h"

__attribute__((visibility("hidden")))
@interface VCPRestoreDatabaseTask : VCPTask
{
}

+ (id)taskWithPhotoLibrary:(id)arg1;	// IMP=0x00000001000321cc
- (int)mainInternal;	// IMP=0x0000000100032ab8
- (int)restoreDatabaseToFilepath:(id)arg1 fromBackupFilepath:(id)arg2;	// IMP=0x00000001000323c8
- (_Bool)removeTemporaryFilesForDatabaseFilepath:(id)arg1;	// IMP=0x0000000100032240

@end

