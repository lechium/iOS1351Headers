//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class TUVideoEffect, UIImageView;

@interface ICSEffectPickerViewCell : UICollectionViewCell
{
    TUVideoEffect *_videoEffect;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
}

+ (id)reuseIdentifier;	// IMP=0x0000000100077274
- (void).cxx_destruct;	// IMP=0x00000001000772a4
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) TUVideoEffect *videoEffect; // @synthesize videoEffect=_videoEffect;
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000001000770d8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100076c5c

@end

