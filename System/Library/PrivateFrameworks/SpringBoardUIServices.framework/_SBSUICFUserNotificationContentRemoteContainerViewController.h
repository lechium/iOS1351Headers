/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:08 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_SBSUICFUserNotificationContentExtensionRemoteInterface.h>

@protocol SBSUIUserNotificationContentProviding;
@class UIViewController, NSString;

@interface _SBSUICFUserNotificationContentRemoteContainerViewController : UIViewController <_SBSUICFUserNotificationContentExtensionRemoteInterface> {

	BOOL _isLegacyContentViewController;
	UIViewController*<SBSUIUserNotificationContentProviding> _extensionViewController;

}

@property (nonatomic,retain) UIViewController*<SBSUIUserNotificationContentProviding> extensionViewController;              //@synthesize extensionViewController=_extensionViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
+(BOOL)_isSecureForRemoteViewService;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(void)addChildViewController:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_updatePreferredContentSize;
-(BOOL)_canShowWhileLocked;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UIViewController*<SBSUIUserNotificationContentProviding>)extensionViewController;
-(void)setExtensionViewController:(UIViewController*<SBSUIUserNotificationContentProviding>)arg1 ;
-(void)configureWithCompletion:(/*^block*/id)arg1 ;
-(void)invalidateWithCompletion:(/*^block*/id)arg1 ;
-(void)_trackChildViewController:(id)arg1 ;
-(id)userNotificationContentExtensionContext;
@end
