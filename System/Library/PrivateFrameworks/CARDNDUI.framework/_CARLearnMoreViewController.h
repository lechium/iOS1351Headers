/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CARDNDUI.framework/CARDNDUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class NSString, UITextView, NSLayoutConstraint;

@interface _CARLearnMoreViewController : UIViewController {

	NSString* _resourcePath;
	UITextView* _textView;
	NSLayoutConstraint* _bottomMarginConstraint;

}

@property (nonatomic,copy) NSString * resourcePath;                                    //@synthesize resourcePath=_resourcePath - In the implementation block
@property (nonatomic,retain) UITextView * textView;                                    //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomMarginConstraint;              //@synthesize bottomMarginConstraint=_bottomMarginConstraint - In the implementation block
-(NSString *)resourcePath;
-(UITextView *)textView;
-(void)setTextView:(UITextView *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewSafeAreaInsetsDidChange;
-(void)setResourcePath:(NSString *)arg1 ;
-(NSLayoutConstraint *)bottomMarginConstraint;
-(id)initWithContentsOfResource:(id)arg1 ofType:(id)arg2 ;
-(void)_configureLearnMoreView;
-(void)setBottomMarginConstraint:(NSLayoutConstraint *)arg1 ;
@end
