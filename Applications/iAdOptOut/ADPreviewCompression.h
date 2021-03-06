//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ADPreviewCompression : NSObject
{
}

+ (int)readBit:(id)arg1;	// IMP=0x00000001000056c4
+ (unsigned short)readBits:(int)arg1 fromData:(id)arg2;	// IMP=0x0000000100005648
+ (id)decompressFromBase64Native:(id)arg1;	// IMP=0x00000001000051b0
+ (int)validFlags:(int)arg1;	// IMP=0x00000001000051a4
+ (int)validOperation:(int)arg1;	// IMP=0x0000000100005198
+ (int)validAlgorithm:(int)arg1;	// IMP=0x0000000100005174
+ (id)processData:(id)arg1 using:(int)arg2 operation:(int)arg3;	// IMP=0x0000000100004fe8
+ (id)decompressFromBase64:(id)arg1 algorithm:(int)arg2;	// IMP=0x0000000100004f44
+ (id)decompressFromBase64:(id)arg1;	// IMP=0x0000000100004f34
+ (id)compressToBase64:(id)arg1 algorithm:(int)arg2;	// IMP=0x0000000100004ec8
+ (id)compressToBase64:(id)arg1;	// IMP=0x0000000100004eb8
+ (id)decompress:(id)arg1 algorithm:(int)arg2;	// IMP=0x0000000100004ea8
+ (id)decompress:(id)arg1;	// IMP=0x0000000100004e94
+ (id)compress:(id)arg1 algorithm:(int)arg2;	// IMP=0x0000000100004e48
+ (id)compress:(id)arg1;	// IMP=0x0000000100004e00

@end

