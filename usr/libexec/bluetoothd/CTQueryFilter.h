//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CTQueryFilter : NSObject
{
    char *_filterBuffer;	// 8 = 0x8
    unsigned long long *_hashSalts;	// 16 = 0x10
    unsigned long long _bufferSize;	// 24 = 0x18
    unsigned long long _hashCount;	// 32 = 0x20
}

@property(readonly, nonatomic) unsigned long long hashCount; // @synthesize hashCount=_hashCount;
@property(readonly, nonatomic) unsigned long long bufferSize; // @synthesize bufferSize=_bufferSize;
- (_Bool)shouldIgnoreRPI:(const void *)arg1;	// IMP=0x00000001003aa614
- (void)addPossibleRPI:(const void *)arg1;	// IMP=0x00000001003aa5b4
- (void)dealloc;	// IMP=0x00000001003aa564
- (id)initWithBufferSize:(unsigned long long)arg1 hashCount:(unsigned long long)arg2;	// IMP=0x00000001003aa358
- (id)init;	// IMP=0x00000001003aa334

@end
