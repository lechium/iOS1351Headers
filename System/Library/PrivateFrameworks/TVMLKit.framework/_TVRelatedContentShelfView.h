/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:57 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, _TVRelatedWrappingView;

@interface _TVRelatedContentShelfView : UIView {

	UIView* _lastFocusedView;
	_TVRelatedWrappingView* _relatedWrappingView;
	UIView* _shelfView;
	UIView* _relatedView;
	double _relatedHeight;

}

@property (assign,nonatomic,__weak) UIView * shelfView;              //@synthesize shelfView=_shelfView - In the implementation block
@property (nonatomic,retain) UIView * relatedView;                   //@synthesize relatedView=_relatedView - In the implementation block
@property (assign,nonatomic) double relatedHeight;                   //@synthesize relatedHeight=_relatedHeight - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setShelfView:(UIView *)arg1 ;
-(UIView *)shelfView;
-(void)setRelatedHeight:(double)arg1 ;
-(void)setRelatedView:(UIView *)arg1 ;
-(UIView *)relatedView;
-(void)_layoutRelatedView;
-(double)relatedHeight;
@end

