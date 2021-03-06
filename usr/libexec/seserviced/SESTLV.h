//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData;

@interface SESTLV : NSObject
{
    unsigned int _tag;	// 8 = 0x8
    NSData *_value;	// 16 = 0x10
    NSArray *_children;	// 24 = 0x18
}

+ (id)_parseTLVs:(const char **)arg1 end:(const char *)arg2 simple:(_Bool)arg3;	// IMP=0x0000000100079db0
+ (id)_intToData:(unsigned int)arg1;	// IMP=0x0000000100079a48
+ (id)TLVWithTag:(unsigned int)arg1 unsignedShort:(unsigned short)arg2;	// IMP=0x0000000100079290
+ (id)TLVWithTag:(unsigned int)arg1 unsignedChar:(unsigned char)arg2;	// IMP=0x000000010007920c
+ (id)TLVWithTag:(unsigned int)arg1 unsignedLongValue:(unsigned int)arg2;	// IMP=0x0000000100079188
+ (id)TLVWithTag:(unsigned int)arg1 value:(id)arg2;	// IMP=0x0000000100079134
+ (id)TLVWithTag:(unsigned int)arg1 children:(id)arg2;	// IMP=0x0000000100078f70
+ (id)simpleTLVsWithTag:(unsigned int)arg1 fromData:(id)arg2;	// IMP=0x0000000100078dd4
+ (id)TLVWithTag:(unsigned int)arg1 fromData:(id)arg2;	// IMP=0x0000000100078c7c
+ (id)TLVWithData:(id)arg1;	// IMP=0x0000000100078bbc
+ (id)simpleTLVsWithData:(id)arg1;	// IMP=0x0000000100078b34
+ (id)TLVsWithData:(id)arg1;	// IMP=0x0000000100078aac
- (void).cxx_destruct;	// IMP=0x000000010007a1d0
- (id)asData;	// IMP=0x0000000100079b14
- (id)childWithTag:(unsigned int)arg1;	// IMP=0x00000001000798fc
- (id)childrenWithTag:(unsigned int)arg1;	// IMP=0x0000000100079784
@property(readonly, nonatomic) NSArray *children;
- (unsigned long long)valueAsUnsignedLongLong;	// IMP=0x00000001000796a4
- (unsigned short)valueAsUnsignedShort;	// IMP=0x00000001000795cc
- (unsigned int)valueAsUnsignedLong;	// IMP=0x00000001000794f4
- (id)valueAsString;	// IMP=0x00000001000794a8
@property(readonly, nonatomic) NSData *value;
@property(readonly, nonatomic) unsigned int tag;
- (id)description;	// IMP=0x0000000100079314

@end

