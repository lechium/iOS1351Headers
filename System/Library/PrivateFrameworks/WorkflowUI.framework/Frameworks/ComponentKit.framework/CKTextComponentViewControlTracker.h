/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:08 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSTextCheckingResult;

@interface CKTextComponentViewControlTracker : NSObject {

	NSTextCheckingResult* _trackingTextCheckingResult;

}
-(void)endTrackingForTextComponentView:(id)arg1 withTouch:(id)arg2 withEvent:(id)arg3 ;
-(void)cancelTrackingForTextComponentView:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingForTextComponentView:(id)arg1 withTouch:(id)arg2 withEvent:(id)arg3 ;
-(BOOL)beginTrackingForTextComponentView:(id)arg1 withTouch:(id)arg2 withEvent:(id)arg3 ;
-(void)_sendActionsToControl:(id)arg1 forControlEvents:(unsigned long long)arg2 withEvent:(id)arg3 ;
@end

