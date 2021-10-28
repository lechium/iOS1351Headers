/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <JITAppKit/JITAppKit-Structs.h>
#import <UIKitCore/UIScrollView.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UIStackView, NSLayoutConstraint, UIViewController, NSArray, NSString;

@interface MCLViewControllerCollection : UIScrollView <UIScrollViewDelegate> {

	UIStackView* _contentView;
	NSLayoutConstraint* _widthConstraint;
	UIViewController* _owner;
	NSArray* _views;

}

@property (assign,nonatomic,__weak) UIViewController * owner;              //@synthesize owner=_owner - In the implementation block
@property (assign,nonatomic) double spacing; 
@property (nonatomic,copy) NSArray * views;                                //@synthesize views=_views - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setOwner:(UIViewController *)arg1 ;
-(double)spacing;
-(UIViewController *)owner;
-(void)setSpacing:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(NSArray *)views;
-(void)setViews:(NSArray *)arg1 ;
@end
