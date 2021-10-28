/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:07 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/DOCViewServiceErrorViewDelegate.h>

@protocol DOCViewServiceErrorViewControllerDelegate;
@class DOCViewServiceErrorView, NSString;

@interface DOCViewServiceErrorViewController : UIViewController <DOCViewServiceErrorViewDelegate> {

	DOCViewServiceErrorView* _errorView;
	id<DOCViewServiceErrorViewControllerDelegate> _delegate;

}

@property (__weak) id<DOCViewServiceErrorViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * errorTitle; 
@property (nonatomic,retain) NSString * errorSubtitle; 
-(id<DOCViewServiceErrorViewControllerDelegate>)delegate;
-(void)setDelegate:(id<DOCViewServiceErrorViewControllerDelegate>)arg1 ;
-(void)loadView;
-(NSString *)errorTitle;
-(void)setErrorTitle:(NSString *)arg1 ;
-(void)setErrorSubtitle:(NSString *)arg1 ;
-(void)didTapTryAgainInErrorView:(id)arg1 ;
-(NSString *)errorSubtitle;
@end
