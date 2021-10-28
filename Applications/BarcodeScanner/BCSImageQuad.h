//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface BCSImageQuad : NSObject
{
    struct CGPoint _topLeft;	// 8 = 0x8
    struct CGPoint _topRight;	// 24 = 0x18
    struct CGPoint _bottomRight;	// 40 = 0x28
    struct CGPoint _bottomLeft;	// 56 = 0x38
    struct CGRect _bounds;	// 72 = 0x48
}

@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(readonly, nonatomic) struct CGPoint bottomLeft; // @synthesize bottomLeft=_bottomLeft;
@property(readonly, nonatomic) struct CGPoint bottomRight; // @synthesize bottomRight=_bottomRight;
@property(readonly, nonatomic) struct CGPoint topRight; // @synthesize topRight=_topRight;
@property(readonly, nonatomic) struct CGPoint topLeft; // @synthesize topLeft=_topLeft;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100009510
- (void)adjustOrientationInImageSpace:(_Bool)arg1;	// IMP=0x0000000100008f9c
- (struct CGSize)perspectiveCorrectedSize;	// IMP=0x0000000100008e1c
- (struct CGPoint)_denormalizePoint:(struct CGPoint)arg1 inBounds:(struct CGRect)arg2;	// IMP=0x0000000100008e08
- (struct CGPoint)_normalizePoint:(struct CGPoint)arg1 inBounds:(struct CGRect)arg2;	// IMP=0x0000000100008df4
- (void)flip;	// IMP=0x0000000100008d9c
- (void)denormalize;	// IMP=0x0000000100008cac
- (void)normalize;	// IMP=0x0000000100008bbc
@property(readonly, nonatomic) struct CGRect boundingBox;
- (id)description;	// IMP=0x0000000100008980
- (id)initWithTopLeft:(struct CGPoint)arg1 topRight:(struct CGPoint)arg2 bottomRight:(struct CGPoint)arg3 bottomLeft:(struct CGPoint)arg4;	// IMP=0x00000001000088c8

@end
