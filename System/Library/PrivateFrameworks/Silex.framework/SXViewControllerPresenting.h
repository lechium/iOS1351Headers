/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIViewController;


@protocol SXViewControllerPresenting <NSObject>
@property (nonatomic,readonly) UIViewController * controller; 
@required
-(UIViewController *)controller;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4;
-(void)popOrDismissViewControllerAnimated:(BOOL)arg1;

@end
