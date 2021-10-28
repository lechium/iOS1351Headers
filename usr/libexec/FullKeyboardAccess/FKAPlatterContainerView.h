//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIBlurEffect, UIVisualEffectView;

@interface FKAPlatterContainerView : UIView
{
    UIView *_contentView;	// 8 = 0x8
    UIBlurEffect *_platterBlurEffect;	// 16 = 0x10
    UIVisualEffectView *_platterView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000080a4
@property(readonly, nonatomic) UIVisualEffectView *platterView; // @synthesize platterView=_platterView;
@property(readonly, nonatomic) UIBlurEffect *platterBlurEffect; // @synthesize platterBlurEffect=_platterBlurEffect;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) _Bool allowsScrolling;
@property(readonly, nonatomic) _Bool shouldMimicNotificationBannerTopOffset;
@property(readonly, nonatomic) double platterWidth;
@property(readonly, nonatomic) NSString *primaryTextStyle;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100007354

@end
