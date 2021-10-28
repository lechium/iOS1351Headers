/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:04 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BSAction.h>

@class _UIFocusMovementInfo, _UIFocusInputDeviceInfo;

@interface UIFocusMovementAction : BSAction

@property (nonatomic,readonly) _UIFocusMovementInfo * focusMovementInfo; 
@property (nonatomic,readonly) _UIFocusInputDeviceInfo * inputDeviceInfo; 
@property (nonatomic,readonly) BOOL shouldPerformHapticFeedback; 
-(long long)UIActionType;
-(BOOL)shouldPerformHapticFeedback;
-(_UIFocusInputDeviceInfo *)inputDeviceInfo;
-(id)initWithFocusMovementInfo:(id)arg1 inputDeviceInfo:(id)arg2 shouldPerformHapticFeedback:(BOOL)arg3 ;
-(id)initWithFocusMovementInfo:(id)arg1 ;
-(_UIFocusMovementInfo *)focusMovementInfo;
@end
