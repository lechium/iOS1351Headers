//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC8AppStore29StoreCollectionViewController.h"

@class MISSING_TYPE;

@interface _TtC8AppStore21UpdatesViewController : _TtC8AppStore29StoreCollectionViewController
{
    MISSING_TYPE *objectGraph;	// 136 = 0x88
    MISSING_TYPE *presenter;	// 144 = 0x90
    MISSING_TYPE *artworkLoader;	// 152 = 0x98
    MISSING_TYPE *navigationDivider;	// 160 = 0xa0
    MISSING_TYPE *updatesCollectionViewLayout;	// 168 = 0xa8
    MISSING_TYPE *updatesCollectionViewDataSource;	// 176 = 0xb0
    MISSING_TYPE *updatesCollectionViewDelegate;	// 184 = 0xb8
    MISSING_TYPE *refreshControl;	// 192 = 0xc0
    MISSING_TYPE *showingWhatsNewOverlay;	// 200 = 0xc8
    MISSING_TYPE *flowPreviewing;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x00000001001d2004
- (id)initWithCollectionViewLayout:(id)arg1;	// IMP=0x00000001001d20ac
- (void)fetchUpdates;	// IMP=0x00000001001d1cd4
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001001d0ca8
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000001001d0a90
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000001001d07dc
- (void)as_viewDidBecomePartiallyVisible;	// IMP=0x00000001001d0758
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001001d06b0
- (void)as_viewWillBecomeFullyVisible;	// IMP=0x00000001001d06a0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001001d0664
- (void)viewDidLoad;	// IMP=0x00000001001d04f8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001001cfb5c

@end

