//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, SearchUIFirstTimeExperienceViewController;
@protocol SearchUIFirstTimeExperienceDelegate;

@interface DDParsecFirstTimeViewController : UIViewController
{
    SearchUIFirstTimeExperienceViewController *_firstExperienceViewController;	// 8 = 0x8
    NSLayoutConstraint *_topConstraint;	// 16 = 0x10
    NSLayoutConstraint *_bottomConstraint;	// 24 = 0x18
    NSLayoutConstraint *_widthConstraint;	// 32 = 0x20
    _Bool _fullScreen;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100008758
@property(nonatomic) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
@property(nonatomic) __weak id <SearchUIFirstTimeExperienceDelegate> delegate;
- (void)updateForCurrentTraitCollection;	// IMP=0x0000000100007ba8
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000100007a54
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000079e4
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000072dc

@end

