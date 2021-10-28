//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MBFileHandle.h"

@class NSString;

@interface MBBasicFileHandle : MBFileHandle
{
    NSString *_path;	// 8 = 0x8
    int _fd;	// 16 = 0x10
}

+ (id)basicFileHandleWithPath:(id)arg1 flags:(int)arg2 mode:(unsigned short)arg3 error:(id *)arg4;	// IMP=0x000000010018c1b8
- (_Bool)closeWithError:(id *)arg1;	// IMP=0x000000010018c6a4
- (long long)writeWithBytes:(const void *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000010018c644
- (long long)readWithBytes:(void *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000010018c5b4
- (_Bool)statWithBuffer:(struct stat *)arg1 error:(id *)arg2;	// IMP=0x000000010018c544
- (id)encryptionKeyWithError:(id *)arg1;	// IMP=0x000000010018c4fc
- (int)fd;	// IMP=0x000000010018c4ec
- (id)path;	// IMP=0x000000010018c4dc
- (void)dealloc;	// IMP=0x000000010018c48c
- (id)initWithPath:(id)arg1 fd:(int)arg2;	// IMP=0x000000010018c370

@end
