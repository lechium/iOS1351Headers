/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:01 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UIScrollViewScrollObserver_Internal <_UIScrollViewScrollObserver>
@optional
-(void)_didScroll;
-(void)_observeScrollView:(id)arg1 willEndDraggingWithVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint*)arg3 unclampedOriginalTarget:(CGPoint)arg4;
-(UIEdgeInsets*)_revealableContentPaddingForObservedScrollView:(id)arg1 includeContentWithCollapsedAffinity:(BOOL)arg2;
-(UIEdgeInsets*)_collapsableContentPaddingForObservedScrollView:(id)arg1;
-(void)_observeScrollViewWillBeginDragging:(id)arg1;
-(void)_observeScrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
-(void)_observeScrollViewDidEndDecelerating:(id)arg1;
-(void)_observeScrollView:(id)arg1 didBeginTransitionToDeferredContentOffset:(CGPoint)arg2;

@end
