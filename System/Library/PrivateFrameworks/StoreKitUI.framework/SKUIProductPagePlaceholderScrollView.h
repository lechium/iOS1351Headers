/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:49 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIScrollView.h>

@class UIView;

@interface SKUIProductPagePlaceholderScrollView : UIScrollView {

	UIView* _placeholderView;
	double _offset;
	BOOL _isPad;

}

@property (assign,nonatomic) BOOL isPad;                            //@synthesize isPad=_isPad - In the implementation block
@property (nonatomic,retain) UIView * placeholderView;              //@synthesize placeholderView=_placeholderView - In the implementation block
@property (assign,nonatomic) double offset;                         //@synthesize offset=_offset - In the implementation block
-(void)setOffset:(double)arg1 ;
-(double)offset;
-(void)layoutSubviews;
-(BOOL)isPad;
-(void)setIsPad:(BOOL)arg1 ;
-(void)setPlaceholderView:(UIView *)arg1 ;
-(UIView *)placeholderView;
@end

