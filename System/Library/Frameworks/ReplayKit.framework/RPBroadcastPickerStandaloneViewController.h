/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ReplayKit/RPSystemBroadcastPickerViewController.h>

@protocol RPSystemBroadcastPickerViewControllerDelegate;
@class RPModalPresentationWindow;

@interface RPBroadcastPickerStandaloneViewController : RPSystemBroadcastPickerViewController {

	RPModalPresentationWindow* _presentationWindow;
	id<RPSystemBroadcastPickerViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RPSystemBroadcastPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<RPSystemBroadcastPickerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<RPSystemBroadcastPickerViewControllerDelegate>)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)presentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissAfter:(double)arg1 ;
-(void)viewControllerDidFinish;
-(void)loadViewControllerWithBundleIdentifier:(id)arg1 showMicrophoneButton:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
@end
