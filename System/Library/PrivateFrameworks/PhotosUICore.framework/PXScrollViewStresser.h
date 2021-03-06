/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CADisplayLink, UIScrollView;

@interface PXScrollViewStresser : NSObject {

	unsigned _scrollDirection;
	CADisplayLink* _displayLink;
	UIScrollView* _scrollView;
	long long _scrollCount;

}

@property (nonatomic,retain) CADisplayLink * displayLink;                      //@synthesize displayLink=_displayLink - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                        //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) unsigned scrollDirection;                         //@synthesize scrollDirection=_scrollDirection - In the implementation block
@property (assign,nonatomic) long long scrollCount;                            //@synthesize scrollCount=_scrollCount - In the implementation block
@property (getter=isScrolling,nonatomic,readonly) BOOL scrolling; 
+(id)sharedInstance;
-(BOOL)isScrolling;
-(void)setScrollDirection:(unsigned)arg1 ;
-(unsigned)scrollDirection;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(void)stopScrolling;
-(void)_handleDisplayLink:(id)arg1 ;
-(void)startScrollingScrollView:(id)arg1 axis:(long long)arg2 ;
-(long long)scrollCount;
-(void)setScrollCount:(long long)arg1 ;
@end

