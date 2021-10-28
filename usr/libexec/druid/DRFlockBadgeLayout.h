//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DRFlockAnimatable;

@interface DRFlockBadgeLayout : NSObject
{
    _Bool _visible;	// 8 = 0x8
    _Bool _justBecameVisible;	// 9 = 0x9
    DRFlockAnimatable *_position;	// 16 = 0x10
    DRFlockAnimatable *_offset;	// 24 = 0x18
    DRFlockAnimatable *_size;	// 32 = 0x20
    DRFlockAnimatable *_alpha;	// 40 = 0x28
    DRFlockAnimatable *_offsetAdjustment;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000160a4
@property(nonatomic) _Bool justBecameVisible; // @synthesize justBecameVisible=_justBecameVisible;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(retain, nonatomic) DRFlockAnimatable *offsetAdjustment; // @synthesize offsetAdjustment=_offsetAdjustment;
@property(retain, nonatomic) DRFlockAnimatable *alpha; // @synthesize alpha=_alpha;
@property(retain, nonatomic) DRFlockAnimatable *size; // @synthesize size=_size;
@property(retain, nonatomic) DRFlockAnimatable *offset; // @synthesize offset=_offset;
@property(retain, nonatomic) DRFlockAnimatable *position; // @synthesize position=_position;

@end
