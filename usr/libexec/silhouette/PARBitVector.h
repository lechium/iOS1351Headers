//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PARBitVector : NSObject
{
    char *_data;	// 8 = 0x8
    unsigned long long _numBytes;	// 16 = 0x10
    unsigned long long _bitShift;	// 24 = 0x18
    unsigned long long _numBits;	// 32 = 0x20
}

@property(readonly) unsigned long long numBits; // @synthesize numBits=_numBits;
- (id)hexData;	// IMP=0x0000000100001b90
- (id)data;	// IMP=0x0000000100001b58
- (_Bool)checkAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100001b30
- (void)clearAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100001b08
- (void)setAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100001ae0
- (id)initWithNumBits:(unsigned long long)arg1 setWithData:(id)arg2;	// IMP=0x00000001000019dc
- (id)initWithNumBits:(unsigned long long)arg1;	// IMP=0x00000001000019cc
- (void)freeData;	// IMP=0x00000001000019c4

@end

