//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CPSMultilineLabel, UIView;

@interface CARInCallWidgetMultiwayTitleButton : UIButton
{
    CPSMultilineLabel *_multilineTitleLabel;	// 8 = 0x8
    UIView *_focusView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100026e68
@property(retain, nonatomic) UIView *focusView; // @synthesize focusView=_focusView;
@property(retain, nonatomic) CPSMultilineLabel *multilineTitleLabel; // @synthesize multilineTitleLabel=_multilineTitleLabel;
- (void)setupConstraints;	// IMP=0x00000001000268a4
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100026738
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010002645c

@end

