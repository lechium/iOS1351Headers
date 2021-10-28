/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <KeyboardSettings/EditUserWordController.h>

@class UIWindow;

@interface UIEditUserWordController : EditUserWordController {

	long long _oldPopoverStyle;
	UIWindow* _rotationDecider;
	/*^block*/id _dismissCompletionHandler;

}

@property (nonatomic,copy) id dismissCompletionHandler;                                            //@synthesize dismissCompletionHandler=_dismissCompletionHandler - In the implementation block
@property (setter=_setRotationDecider:,nonatomic,retain) UIWindow * _rotationDecider;              //@synthesize rotationDecider=_rotationDecider - In the implementation block
-(void)dealloc;
-(void)viewDidLoad;
-(id)initWithText:(id)arg1 ;
-(void)_dismiss;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(id)dismissCompletionHandler;
-(void)setDismissCompletionHandler:(id)arg1 ;
-(UIWindow *)_rotationDecider;
-(id)initWithText:(id)arg1 andShortcut:(id)arg2 ;
-(BOOL)_shouldSetDefaultFirstResponder;
-(void)_setRotationDecider:(id)arg1 ;
@end
