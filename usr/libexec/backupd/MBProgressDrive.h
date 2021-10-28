//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MBDrive.h"

@class MBDriveScript;

@interface MBProgressDrive : MBDrive
{
    MBDriveScript *_script;	// 8 = 0x8
    MBDrive *_delegate;	// 16 = 0x10
}

- (_Bool)freeSpace:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x00000001001157cc
- (_Bool)removeItemsAtPaths:(id)arg1 options:(id)arg2 results:(id *)arg3 error:(id *)arg4;	// IMP=0x0000000100115718
- (_Bool)moveItemsAtPaths:(id)arg1 options:(id)arg2 results:(id *)arg3 error:(id *)arg4;	// IMP=0x0000000100115664
- (_Bool)downloadFilesAtPaths:(id)arg1 options:(id)arg2 results:(id *)arg3 error:(id *)arg4;	// IMP=0x00000001001155ac
- (void)finishBatchUploadsWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100115594
- (void)uploadBatch:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001154e0
- (_Bool)uploadFilesAtPaths:(id)arg1 options:(id)arg2 results:(id *)arg3 error:(id *)arg4;	// IMP=0x0000000100115428
- (_Bool)copyItemAtPath:(id)arg1 toPath:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x000000010011538c
- (id)contentsOfDirectoryAtPath:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100115300
- (_Bool)createDirectoryAtPath:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100115274
- (void)dealloc;	// IMP=0x0000000100115214
- (id)initWithScript:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000100115194

@end
