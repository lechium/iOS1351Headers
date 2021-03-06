//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage;

@interface CARIconDropShadowProvider : NSObject
{
    UIImage *_iconImage;	// 8 = 0x8
    struct CGImage *_lightStyleShadowImage;	// 16 = 0x10
}

+ (void)invalidate;	// IMP=0x000000010005d370
- (void).cxx_destruct;	// IMP=0x000000010005dee8
@property(nonatomic) struct CGImage *lightStyleShadowImage; // @synthesize lightStyleShadowImage=_lightStyleShadowImage;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
- (void)_shadow_drawing_queue_generateDarkStyleShadow;	// IMP=0x000000010005dbe4
- (void)_shadow_drawing_queue_generateLightStyleShadow;	// IMP=0x000000010005d800
- (void)_cleanupImages;	// IMP=0x000000010005d7d4
- (void)imageForTraitCollection:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005d498
- (id)init;	// IMP=0x000000010005d39c

@end

