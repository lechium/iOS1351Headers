//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSArray, NSMapTable;

@interface BKMousePointerRegionArrangement : NSObject <NSCopying, NSMutableCopying>
{
    struct CGPoint _baseTranslation;	// 8 = 0x8
    struct CGRect _globalBounds;	// 24 = 0x18
    NSMapTable *_regionToComputedFrame;	// 56 = 0x38
    NSMapTable *_regionToLayoutDescriptor;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000001000876f0
@property(readonly, nonatomic) struct CGRect globalBounds; // @synthesize globalBounds=_globalBounds;
- (id)_layoutDescriptorForRegion:(id)arg1;	// IMP=0x00000001000875f0
- (struct CGRect)_frameForRegion:(id)arg1;	// IMP=0x00000001000874bc
- (id)_copyMousePointerRegionArrangementWithClass:(Class)arg1;	// IMP=0x0000000100087418
- (struct CGPoint)convertFromGlobalPoint:(struct CGPoint)arg1 toRegion:(id)arg2;	// IMP=0x00000001000873e4
- (struct CGPoint)convertToGlobalPoint:(struct CGPoint)arg1 fromRegion:(id)arg2;	// IMP=0x00000001000873b0
- (id)closestRegionForGlobalPoint:(struct CGPoint)arg1 returningClosestContainingPoint:(out struct CGPoint *)arg2;	// IMP=0x0000000100086fd4
@property(readonly, copy, nonatomic) NSArray *regions;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100086f18
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100086f14

@end

