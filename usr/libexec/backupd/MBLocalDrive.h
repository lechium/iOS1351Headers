//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MBDrive.h"

#import "MBFileHandleFactory-Protocol.h"

@class NSString;

@interface MBLocalDrive : MBDrive <MBFileHandleFactory>
{
    NSString *_path;	// 8 = 0x8
}

@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (id)fileHandleWithPath:(id)arg1 flags:(int)arg2 mode:(unsigned short)arg3 error:(id *)arg4;	// IMP=0x00000001001b6028
- (_Bool)freeSpace:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x00000001001b5ffc
- (_Bool)removeItemsAtPaths:(id)arg1 options:(id)arg2 results:(id *)arg3 error:(id *)arg4;	// IMP=0x00000001001b5e30
- (_Bool)removeItemAtPath:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000001001b5d74
- (_Bool)moveItemsAtPaths:(id)arg1 options:(id)arg2 results:(id *)arg3 error:(id *)arg4;	// IMP=0x00000001001b5b84
- (_Bool)moveItemAtPath:(id)arg1 toPath:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x00000001001b5a10
- (_Bool)downloadFilesAtPaths:(id)arg1 options:(id)arg2 results:(id *)arg3 error:(id *)arg4;	// IMP=0x00000001001b5820
- (_Bool)downloadFileAtPath:(id)arg1 toPath:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x00000001001b5568
- (_Bool)uploadFilesAtPaths:(id)arg1 options:(id)arg2 results:(id *)arg3 error:(id *)arg4;	// IMP=0x00000001001b5388
- (_Bool)uploadFileAtPath:(id)arg1 toPath:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x00000001001b50b0
- (_Bool)copyItemAtPath:(id)arg1 toPath:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x00000001001b4f9c
- (id)contentsOfDirectoryAtPath:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000001001b4d68
- (_Bool)createDirectoryAtPath:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000001001b4cdc
- (id)_resolveRelativePath:(id)arg1 error:(id *)arg2;	// IMP=0x00000001001b4be4
- (void)dealloc;	// IMP=0x00000001001b4b94
- (id)initWithPath:(id)arg1;	// IMP=0x00000001001b4b34

@end

