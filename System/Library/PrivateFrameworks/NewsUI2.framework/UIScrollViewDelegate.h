/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:04 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UIScrollViewDelegate <NSObject>
@optional
-(void)scrollViewDidScroll:(id)arg1;
-(void)scrollViewDidZoom:(id)arg1;
-(void)scrollViewWillBeginDragging:(id)arg1;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
-(void)scrollViewWillBeginDecelerating:(id)arg1;
-(void)scrollViewDidEndDecelerating:(id)arg1;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1;
-(id)viewForZoomingInScrollView:(id)arg1;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1;
-(void)scrollViewDidScrollToTop:(id)arg1;
-(void)scrollViewDidChangeAdjustedContentInset:(id)arg1;

@end

