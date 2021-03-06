/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:04 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@protocol UIWebFormControl;
@interface UIWebDateTimePopoverViewController : UIViewController {

	id<UIWebFormControl> _innerWebDateTimeControl;

}

@property (nonatomic,retain) id<UIWebFormControl> _innerWebDateTimeControl;              //@synthesize innerWebDateTimeControl=_innerWebDateTimeControl - In the implementation block
-(void)dealloc;
-(void)loadView;
-(id)initWithDOMHTMLInputElement:(id)arg1 datePickerMode:(long long)arg2 ;
-(void)set_innerWebDateTimeControl:(id<UIWebFormControl>)arg1 ;
-(id<UIWebFormControl>)_innerWebDateTimeControl;
@end

