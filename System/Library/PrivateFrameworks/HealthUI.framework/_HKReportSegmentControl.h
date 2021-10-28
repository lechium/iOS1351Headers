/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UISegmentedControl, UIView, UIControl;

@interface _HKReportSegmentControl : UIView {

	UISegmentedControl* _segmentControl;
	UIView* _dividerView;
	UIControl* _rightControl;

}

@property (nonatomic,readonly) UISegmentedControl * segmentControl;              //@synthesize segmentControl=_segmentControl - In the implementation block
@property (nonatomic,readonly) UIView * dividerView;                             //@synthesize dividerView=_dividerView - In the implementation block
@property (nonatomic,readonly) UIControl * rightControl;                         //@synthesize rightControl=_rightControl - In the implementation block
-(BOOL)isOpaque;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(UISegmentedControl *)segmentControl;
-(UIView *)dividerView;
-(id)initWithFrame:(CGRect)arg1 backgroundColor:(id)arg2 dividerColor:(id)arg3 rightControl:(id)arg4 ;
-(UIControl *)rightControl;
@end
