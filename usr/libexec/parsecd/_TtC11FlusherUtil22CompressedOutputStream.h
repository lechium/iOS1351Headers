//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOutputStream.h>

@class MISSING_TYPE, NSError, NSString;

@interface _TtC11FlusherUtil22CompressedOutputStream : NSOutputStream
{
    MISSING_TYPE *outputStream;	// 8 = 0x8
    MISSING_TYPE *stream;	// 16 = 0x10
    MISSING_TYPE *status;	// 56 = 0x38
    MISSING_TYPE *destBuffer;	// 64 = 0x40
    MISSING_TYPE *shaContext;	// 72 = 0x48
    MISSING_TYPE *digest;	// 280 = 0x118
    MISSING_TYPE *_uncompressedBytesWritten;	// 288 = 0x120
    MISSING_TYPE *_compressedBytesWritten;	// 296 = 0x128
}

- (void).cxx_destruct;	// IMP=0x000000010017d548
- (id)initWithURL:(id)arg1 append:(_Bool)arg2;	// IMP=0x000000010017d704
- (id)initToBuffer:(char *)arg1 capacity:(long long)arg2;	// IMP=0x000000010017d658
- (id)initToMemory;	// IMP=0x000000010017d5e8
- (void)close;	// IMP=0x000000010017d4ec
- (void)open;	// IMP=0x000000010017d17c
@property(nonatomic, readonly) NSError *streamError;
@property(nonatomic, readonly) unsigned long long streamStatus;
@property(nonatomic, readonly) _Bool hasSpaceAvailable;
- (long long)write:(const char *)arg1 maxLength:(long long)arg2;	// IMP=0x000000010017cfb4
@property(nonatomic, readonly) NSString *dataDigestForStream;
- (id)initWithOutputStream:(id)arg1;	// IMP=0x000000010017ca98
- (id)init;	// IMP=0x000000010017c774
@property(nonatomic, readonly) long long compressedBytesWritten;
@property(nonatomic, readonly) long long uncompressedBytesWritten;
@property(nonatomic, readonly) NSOutputStream *outputStream; // @synthesize outputStream;

@end

