/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:57 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UICollectionViewCell.h>

@class UIView, UIViewController;

@interface _TVStackCollectionViewCell : UICollectionViewCell {

	UIView* _cellContentView;
	UIViewController* _viewController;

}

@property (assign,nonatomic,__weak) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(void)prepareForReuse;
-(void)setViewController:(UIViewController *)arg1 ;
-(id)preferredFocusEnvironments;
-(BOOL)canBecomeFocused;
-(void)layoutSubviews;
-(UIViewController *)viewController;
@end
