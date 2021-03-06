/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:08 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextGestureClusterKeyboardTextSelectionForEditableTextField.h>
#import <UIKitCore/_UIKeyboardTextSelectionGestureControllerDelegate.h>

@class _UIKeyboardTextSelectionController, NSString, UIKeyboardTaskQueue;

@interface UITextGestureClusterKeyboardTextSelectionForNonEditableTextField : UITextGestureClusterKeyboardTextSelectionForEditableTextField <_UIKeyboardTextSelectionGestureControllerDelegate> {

	_UIKeyboardTextSelectionController* _textSelectionController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIKeyboardTaskQueue * taskQueue; 
@property (nonatomic,readonly) _UIKeyboardTextSelectionController * textSelectionController; 
@property (nonatomic,readonly) double timestampOfLastTouchesEnded; 
-(id)initWithView:(id)arg1 ;
-(UIKeyboardTaskQueue *)taskQueue;
-(BOOL)shouldAllowSelectionGestures:(BOOL)arg1 atPoint:(CGPoint)arg2 toBegin:(BOOL)arg3 ;
-(void)detach;
-(_UIKeyboardTextSelectionController *)textSelectionController;
-(void)willBeginGesture;
-(void)didEndGesture;
@end

