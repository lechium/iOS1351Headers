/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@protocol WFAccountLoginViewControllerDelegate;
@interface WFAccountLoginViewController : UIViewController {

	id<WFAccountLoginViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WFAccountLoginViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id<WFAccountLoginViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFAccountLoginViewControllerDelegate>)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithAccountClass:(Class)arg1 ;
@end

