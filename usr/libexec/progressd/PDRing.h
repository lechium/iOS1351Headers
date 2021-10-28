//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface PDRing : NSObject
{
    NSMutableArray *_buffer;	// 8 = 0x8
    unsigned long long _head;	// 16 = 0x10
    unsigned long long _size;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000a0b8c
@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;
@property(readonly, nonatomic) NSArray *allObjects;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000001000a0948
- (unsigned long long)_ringIndexPlusOne:(unsigned long long)arg1;	// IMP=0x00000001000a0934
- (unsigned long long)_ringIndexForIndex:(unsigned long long)arg1;	// IMP=0x00000001000a08e0
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x00000001000a08d4
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000a089c
- (_Bool)containsObject:(id)arg1;	// IMP=0x00000001000a088c
- (void)addObject:(id)arg1;	// IMP=0x00000001000a07ec
@property(readonly, nonatomic) id top;
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithSize:(unsigned long long)arg1;	// IMP=0x00000001000a0718

@end
