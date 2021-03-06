/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:39 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/CKAlertControllerDelegate.h>

@class UIViewController, UIPopoverPresentationController, CKPresentationControllerWindow, NSString;

@interface CKAdaptivePresentationController : NSObject <UIPopoverPresentationControllerDelegate, CKAlertControllerDelegate> {

	UIViewController* _presentedViewController;
	UIPopoverPresentationController* _currentPresentationController;
	CKPresentationControllerWindow* _presentationWindow;
	/*^block*/id _presentationHandler;
	/*^block*/id _dismissalHandler;

}

@property (nonatomic,retain) UIViewController * presentedViewController;                                   //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (nonatomic,retain) UIPopoverPresentationController * currentPresentationController;              //@synthesize currentPresentationController=_currentPresentationController - In the implementation block
@property (nonatomic,retain) CKPresentationControllerWindow * presentationWindow;                          //@synthesize presentationWindow=_presentationWindow - In the implementation block
@property (nonatomic,copy) id presentationHandler;                                                         //@synthesize presentationHandler=_presentationHandler - In the implementation block
@property (nonatomic,copy) id dismissalHandler;                                                            //@synthesize dismissalHandler=_dismissalHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(void)_cleanup;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(UIViewController *)presentedViewController;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
-(id)dismissalHandler;
-(void)setDismissalHandler:(id)arg1 ;
-(void)setPresentedViewController:(UIViewController *)arg1 ;
-(void)setCurrentPresentationController:(UIPopoverPresentationController *)arg1 ;
-(UIPopoverPresentationController *)currentPresentationController;
-(void)setPresentationWindow:(CKPresentationControllerWindow *)arg1 ;
-(CKPresentationControllerWindow *)presentationWindow;
-(void)presentViewController:(id)arg1 fromViewController:(id)arg2 presentationHandler:(/*^block*/id)arg3 dismissalHandler:(/*^block*/id)arg4 animated:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)alertControllerViewDidDisappear:(id)arg1 ;
-(void)setPresentationHandler:(id)arg1 ;
-(id)presentationHandler;
@end

