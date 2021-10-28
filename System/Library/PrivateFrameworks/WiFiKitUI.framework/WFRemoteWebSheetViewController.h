/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:54 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIRemoteViewController.h>

@protocol WFRemoteWebSheetViewControllerDelegate;
@interface WFRemoteWebSheetViewController : _UIRemoteViewController {

	id<WFRemoteWebSheetViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WFRemoteWebSheetViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(id)requestViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
-(id<WFRemoteWebSheetViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFRemoteWebSheetViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)_wheelChangedWithEvent:(id)arg1 ;
-(void)webSheetViewControllerContentDidStartLoading;
-(void)webSheetViewControllerContentReadyForPresentation;
-(void)webSheetViewControllerContentDidFinishLoading;
-(void)_setupButtonListener;
@end
