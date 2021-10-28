/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:57 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIViewController.h>

@class UIColor, UIViewController;

@interface _TVModalPageBezelViewController : UIViewController {

	double _bezelCornerRadius;
	UIColor* _bezelBackgroundColor;
	UIViewController* _contentViewController;
	CGSize _contentSize;

}

@property (assign,nonatomic) double bezelCornerRadius;                              //@synthesize bezelCornerRadius=_bezelCornerRadius - In the implementation block
@property (nonatomic,retain) UIColor * bezelBackgroundColor;                        //@synthesize bezelBackgroundColor=_bezelBackgroundColor - In the implementation block
@property (nonatomic,retain) UIViewController * contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                    //@synthesize contentSize=_contentSize - In the implementation block
-(CGSize)contentSize;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setContentViewController:(UIViewController *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(UIViewController *)contentViewController;
-(void)viewDidLayoutSubviews;
-(void)setBezelCornerRadius:(double)arg1 ;
-(void)setBezelBackgroundColor:(UIColor *)arg1 ;
-(double)bezelCornerRadius;
-(UIColor *)bezelBackgroundColor;
@end
