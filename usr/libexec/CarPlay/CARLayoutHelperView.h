//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol CARLayoutHelperViewDelegate;

@interface CARLayoutHelperView : UIView
{
    id <CARLayoutHelperViewDelegate> _layoutDelegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000ae544
@property(nonatomic) __weak id <CARLayoutHelperViewDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void)layoutSubviews;	// IMP=0x00000001000ae430
- (id)init;	// IMP=0x00000001000ae3d4

@end
