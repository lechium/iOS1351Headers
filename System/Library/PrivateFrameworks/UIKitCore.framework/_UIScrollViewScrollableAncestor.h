/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:56 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UIScrollViewScrollableAncestor <NSObject>
@required
-(CGPoint*)_scrollView:(id)arg1 adjustedUnconstrainedOffsetForUnconstrainedOffset:(CGPoint)arg2 startOffset:(CGPoint)arg3 horizontalVelocity:(inout double*)arg4 verticalVelocity:(inout double*)arg5 animator:(out id*)arg6;
-(void)_descendentScrollViewDidEndDragging:(id)arg1;
-(void)_descendentScrollViewDidCancelDragging:(id)arg1;
-(BOOL)_descendentScrollView:(id)arg1 shouldPreserveStartOffset:(CGPoint)arg2;

@end

