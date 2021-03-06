//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class PHVideoOverlayContentView;

@interface PHVideoOverlayInsulatorView : UIView
{
    _Bool _isContentViewRotatingOrResizing;	// 8 = 0x8
    PHVideoOverlayContentView *_contentView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000ebcd4
@property(nonatomic) _Bool isContentViewRotatingOrResizing; // @synthesize isContentViewRotatingOrResizing=_isContentViewRotatingOrResizing;
@property(retain, nonatomic) PHVideoOverlayContentView *contentView; // @synthesize contentView=_contentView;
- (void)dealloc;	// IMP=0x00000001000ebc18
- (void)handlePIPControllerNotification:(id)arg1;	// IMP=0x00000001000ebb48
- (void)setBackgroundView:(id)arg1;	// IMP=0x00000001000eb990
- (void)displayContentView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000eb504
- (void)setVideoOverlayContentView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000eb32c
- (id)init;	// IMP=0x00000001000eb17c

@end

