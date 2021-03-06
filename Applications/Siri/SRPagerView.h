//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, SRPagingScrollView;
@protocol SRPagerViewDataSource, SRPagerViewDelegate;

@interface SRPagerView : UIView <UIScrollViewDelegate>
{
    SRPagingScrollView *_scrollView;	// 8 = 0x8
    _Bool _scrollViewIsDragging;	// 16 = 0x10
    _Bool _scrollViewIsScrollingBetweenPages;	// 17 = 0x11
    UIView *_activePageView;	// 24 = 0x18
    unsigned long long _transitionState;	// 32 = 0x20
    id <SRPagerViewDataSource> _dataSource;	// 40 = 0x28
    id <SRPagerViewDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000809d8
@property(nonatomic, getter=_scrollViewIsScrollingBetweenPages, setter=_setScrollViewIsScrollingBetweenPages:) _Bool scrollViewIsScrollingBetweenPages; // @synthesize scrollViewIsScrollingBetweenPages=_scrollViewIsScrollingBetweenPages;
@property(nonatomic, getter=_scrollViewIsDragging, setter=_setScrollViewIsDragging:) _Bool scrollViewIsDragging; // @synthesize scrollViewIsDragging=_scrollViewIsDragging;
@property(nonatomic) __weak id <SRPagerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SRPagerViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) unsigned long long transitionState; // @synthesize transitionState=_transitionState;
@property(retain, nonatomic) UIView *activePageView; // @synthesize activePageView=_activePageView;
- (void)_scrollingDidEnd;	// IMP=0x00000001000808e0
- (id)_activePageViewBasedOnScrollViewPosition;	// IMP=0x000000010008072c
- (_Bool)_multiplePageViewsAreVisible;	// IMP=0x0000000100080590
- (_Bool)_containsPageView:(id)arg1;	// IMP=0x0000000100080540
- (id)_pageViews;	// IMP=0x0000000100080528
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x0000000100080514
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x0000000100080508
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00000001000804f8
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000001000804c0
- (void)_updateTransitionState;	// IMP=0x00000001000803fc
@property(nonatomic, getter=isPagingEnabled) _Bool pagingEnabled;
- (void)setActivePageView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000802b4
- (void)removePageView:(id)arg1;	// IMP=0x00000001000800fc
- (void)addPageView:(id)arg1;	// IMP=0x000000010008007c
- (void)insertPageView:(id)arg1 atIndex:(long long)arg2;	// IMP=0x000000010007ff24
- (void)reloadData;	// IMP=0x000000010007fd20
- (void)layoutSubviews;	// IMP=0x000000010007fb90
- (void)didMoveToWindow;	// IMP=0x000000010007fb40
- (id)initWithFrame:(struct CGRect)arg1 textInputEnabled:(_Bool)arg2;	// IMP=0x000000010007fa64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

