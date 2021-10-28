/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:22 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthExperienceUI/HealthExperienceUI-Structs.h>
#import <UIKitCore/UIView.h>

@interface HealthExperienceUI.DismissibleTileHeaderView : UIView {

	 chromeHostView;
	 heightConstraint;
	 dataSource;
	 detailLabel;
	 titleLabel;
	 accessoryLabel;
	 detailContainerView;
	 accessorySeparator;
	 $__lazy_storage_$_accessoryImage;
	 title;
	 minimumViewHeight;
	 titleToTop;
	 titleToBottom;
	 titleToDismiss;
	 detailToTitle;
	 detailToSeparator;
	 dismissToSeparator;
	 dismissToTop;
	 dismissToBottom;
	 dismissToTrailing;
	 minimumTappableDismissWidth;
	 minimumTappableDismissHeight;

}
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)didReceiveSignificantTimeChangeNotification:(id)arg1 ;
@end
