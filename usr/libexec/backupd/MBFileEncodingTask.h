//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSData, NSError, NSNumber, NSString;
@protocol OS_dispatch_group;

@interface MBFileEncodingTask : NSObject <NSSecureCoding>
{
    _Bool _sourceIsLive;	// 8 = 0x8
    _Bool _validate;	// 9 = 0x9
    int _protectionClass;	// 12 = 0xc
    long long _type;	// 16 = 0x10
    long long _encodingMethod;	// 24 = 0x18
    NSObject<OS_dispatch_group> *_group;	// 32 = 0x20
    NSString *_sourcePath;	// 40 = 0x28
    long long _compressionMethod;	// 48 = 0x30
    NSString *_destinationPath;	// 56 = 0x38
    unsigned long long _destinationSize;	// 64 = 0x40
    NSNumber *_spaceSavingsThreshold;	// 72 = 0x48
    NSError *_error;	// 80 = 0x50
    NSData *_sourceDigest;	// 88 = 0x58
    NSData *_destinationDigest;	// 96 = 0x60
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001001d2ce8
+ (id)decodingTaskWithEncodingMethod:(long long)arg1;	// IMP=0x00000001001cf308
+ (id)encodingTaskWithEncodingMethod:(long long)arg1;	// IMP=0x00000001001cf2cc
- (void).cxx_destruct;	// IMP=0x00000001001d3214
@property(retain, nonatomic) NSData *destinationDigest; // @synthesize destinationDigest=_destinationDigest;
@property(retain, nonatomic) NSData *sourceDigest; // @synthesize sourceDigest=_sourceDigest;
@property(nonatomic) _Bool validate; // @synthesize validate=_validate;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSNumber *spaceSavingsThreshold; // @synthesize spaceSavingsThreshold=_spaceSavingsThreshold;
@property(nonatomic) unsigned long long destinationSize; // @synthesize destinationSize=_destinationSize;
@property(retain, nonatomic) NSString *destinationPath; // @synthesize destinationPath=_destinationPath;
@property(nonatomic) long long compressionMethod; // @synthesize compressionMethod=_compressionMethod;
@property(nonatomic) int protectionClass; // @synthesize protectionClass=_protectionClass;
@property(nonatomic) _Bool sourceIsLive; // @synthesize sourceIsLive=_sourceIsLive;
@property(retain, nonatomic) NSString *sourcePath; // @synthesize sourcePath=_sourcePath;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
@property(nonatomic) long long encodingMethod; // @synthesize encodingMethod=_encodingMethod;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001001d2f38
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001001d2cf0
- (id)_unarchive;	// IMP=0x00000001001d2544
- (id)_archive;	// IMP=0x00000001001d12c4
- (_Bool)_handleCompressionOperation:(int)arg1 algorithm:(int)arg2 destinationSize:(unsigned long long *)arg3 error:(id *)arg4;	// IMP=0x00000001001d04bc
- (id)_decompress;	// IMP=0x00000001001d0390
- (id)_compress;	// IMP=0x00000001001cf890
- (void)cancel;	// IMP=0x00000001001cf88c
- (void)_finishWithError:(id)arg1;	// IMP=0x00000001001cf7fc
- (void)start;	// IMP=0x00000001001cf410
- (id)initWithType:(long long)arg1 encodingMethod:(long long)arg2;	// IMP=0x00000001001cf344

@end

