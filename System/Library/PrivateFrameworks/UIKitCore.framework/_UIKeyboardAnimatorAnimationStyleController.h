/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:07 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIInputViewAnimationController.h>

@class _UIKeyboardAnimator, NSString;

@interface _UIKeyboardAnimatorAnimationStyleController : NSObject <UIInputViewAnimationController> {

	_UIKeyboardAnimator* _animator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAnimator:(id)arg1 ;
-(id)prepareAnimationWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3 ;
-(void)performAnimationWithHost:(id)arg1 context:(id)arg2 ;
-(void)completeAnimationWithHost:(id)arg1 context:(id)arg2 ;
@end

