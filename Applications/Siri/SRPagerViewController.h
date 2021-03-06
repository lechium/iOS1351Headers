//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SRPagerViewDataSource-Protocol.h"
#import "SRPagerViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, SRPagerView;
@protocol SRPagerViewControllerDelegate;

@interface SRPagerViewController : UIViewController <SRPagerViewDataSource, SRPagerViewDelegate>
{
    NSMutableArray *_viewControllers;	// 8 = 0x8
    _Bool _textInputEnabled;	// 16 = 0x10
    UIViewController *_activePageViewController;	// 24 = 0x18
    id <SRPagerViewControllerDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010007fa14
@property(nonatomic) __weak id <SRPagerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIViewController *activePageViewController; // @synthesize activePageViewController=_activePageViewController;
- (_Bool)_canShowWhileLocked;	// IMP=0x000000010007f9cc
- (id)_viewControllerForPageView:(id)arg1;	// IMP=0x000000010007f818
- (void)pagerViewDidChangeTransitionState:(id)arg1;	// IMP=0x000000010007f7d0
- (void)pagerView:(id)arg1 didActivatePageView:(id)arg2 oldActivePageView:(id)arg3;	// IMP=0x000000010007f760
- (id)pagerView:(id)arg1 pageViewAtIndex:(long long)arg2;	// IMP=0x000000010007f6fc
- (long long)numberOfPageViewsInPagerView:(id)arg1;	// IMP=0x000000010007f6e4
@property(readonly, nonatomic) unsigned long long transitionState;
@property(nonatomic, getter=isPagingEnabled) _Bool pagingEnabled;
- (_Bool)containsPageViewController:(id)arg1;	// IMP=0x000000010007f5e0
- (void)setActivePageViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000010007f4c4
- (void)removePageViewController:(id)arg1;	// IMP=0x000000010007f3e4
- (void)addPageViewController:(id)arg1;	// IMP=0x000000010007f378
- (void)insertPageViewController:(id)arg1 atIndex:(long long)arg2;	// IMP=0x000000010007f28c
@property(readonly, nonatomic) NSArray *pageViewControllers;
- (void)viewDidLoad;	// IMP=0x000000010007f1b4
- (void)loadView;	// IMP=0x000000010007f148
- (id)initWithTextInputEnabled:(_Bool)arg1;	// IMP=0x000000010007f0bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SRPagerView *view; // @dynamic view;

@end

