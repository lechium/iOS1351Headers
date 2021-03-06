/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:06 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKBKeyViewAnimator.h>
#import <UIKitCore/_UIFloatingContentViewDelegate.h>

@class NSMutableDictionary, NSString;

@interface UIKBKeyViewAnimatorMonolith : UIKBKeyViewAnimator <_UIFloatingContentViewDelegate> {

	NSMutableDictionary* _selectedKeyTimestamps;
	NSMutableDictionary* _transitionCompletions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)reset;
-(void)floatingContentView:(id)arg1 didFinishTransitioningToState:(unsigned long long)arg2 ;
-(void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(Class)keyViewClassForKey:(id)arg1 traits:(id)arg2 ;
-(BOOL)shouldPurgeKeyViews;
-(BOOL)shouldAssertCurrentKeyState:(id)arg1 ;
-(BOOL)shouldTransitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 ;
-(void)transitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(/*^block*/id)arg4 ;
-(void)transitionOutKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(/*^block*/id)arg4 ;
-(unsigned long long)controlStateForKeyState:(int)arg1 ;
-(void)addTransitionCompletion:(/*^block*/id)arg1 forKeyName:(id)arg2 ;
-(void)transitionFloatingKeyView:(id)arg1 toState:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)animateFloatingKeyView:(id)arg1 toControlState:(unsigned long long)arg2 ;
-(long long)_transitionFromState:(int)arg1 toState:(int)arg2 ;
@end

