/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SBMainDisplayWorkspaceAppInteractionEventSourceObserving <NSObject>
@optional
-(void)eventSource:(id)arg1 applicationsBecameHidden:(id)arg2;
-(void)eventSource:(id)arg1 userRemovedSuggestions:(id)arg2;
-(void)eventSource:(id)arg1 userDeletedApplications:(id)arg2;
-(void)eventSource:(id)arg1 userQuitApplicationInSwitcher:(id)arg2;
-(void)eventSource:(id)arg1 applicationsBecameVisible:(id)arg2;
-(void)eventSource:(id)arg1 userTouchedApplication:(id)arg2;
-(void)eventSource:(id)arg1 keyboardFocusChangedToApplication:(id)arg2;
-(void)eventSource:(id)arg1 didBeginTransitionToMode:(long long)arg2 withLayoutState:(id)arg3 activatingElement:(id)arg4 triggeredBy:(long long)arg5;
-(void)eventSource:(id)arg1 didFinishTransitionToMode:(long long)arg2 withLayoutState:(id)arg3 activatingElement:(id)arg4 triggeredBy:(long long)arg5;

@end
