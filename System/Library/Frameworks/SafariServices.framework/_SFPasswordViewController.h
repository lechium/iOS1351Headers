/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:34 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SFPasswordRemoteViewControllerDelegate.h>
#import <libobjc.A.dylib/SFQueueingServiceViewControllerProxyDelegate.h>

@protocol _SFPasswordViewControllerDelegate;
@class _UIAsyncInvocation, NSString;

@interface _SFPasswordViewController : UIViewController <SFPasswordRemoteViewControllerDelegate, SFQueueingServiceViewControllerProxyDelegate> {

	_UIAsyncInvocation* _cancelViewServiceRequest;
	id<_SFPasswordViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_SFPasswordViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<_SFPasswordViewControllerDelegate>)delegate;
-(void)setDelegate:(id<_SFPasswordViewControllerDelegate>)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForWhitePointAdaptivityStyle;
-(id)childViewControllerForScreenEdgesDeferringSystemGestures;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(id)_remoteViewController;
-(void)_addRemoteView;
-(void)_setUpServiceProxyIfNeeded;
-(void)remoteViewControllerWillDismiss:(id)arg1 ;
-(void)_addRemoteViewAsChild;
-(void)remoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2 ;
-(id)_connectToServiceWithCompletion:(/*^block*/id)arg1 ;
-(void)_connectToService;
-(void)_dismissPasswordViewController;
-(void)serviceProxyWillQueueInvocation:(id)arg1 ;
@end

