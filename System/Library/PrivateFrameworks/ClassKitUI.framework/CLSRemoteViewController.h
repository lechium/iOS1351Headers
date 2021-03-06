/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ClassKitUI.framework/ClassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/CLSRemoteViewControllerInterface.h>

@class UIWindow, NSString;

@interface CLSRemoteViewController : _UIRemoteViewController <CLSRemoteViewControllerInterface> {

	UIWindow* _previousKeyWindow;
	UIWindow* _window;

}

@property (nonatomic,retain) UIWindow * previousKeyWindow;              //@synthesize previousKeyWindow=_previousKeyWindow - In the implementation block
@property (nonatomic,retain) UIWindow * window;                         //@synthesize window=_window - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(id)instantiateViewControllerWithInputItems:(id)arg1 identifier:(id)arg2 connectionHandler:(/*^block*/id)arg3 ;
-(UIWindow *)window;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)viewDidInvalidateIntrinsicContentSize;
-(void)setPreviousKeyWindow:(UIWindow *)arg1 ;
-(UIWindow *)previousKeyWindow;
-(void)presentModallyInNewWindowWithCompletion:(/*^block*/id)arg1 ;
@end

