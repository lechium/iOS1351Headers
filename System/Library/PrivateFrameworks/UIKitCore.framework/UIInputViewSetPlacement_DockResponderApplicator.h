/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:07 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIInputViewSetPlacement_FloatingApplicator.h>

@class UIKeyboardPopoverContainer;

@interface UIInputViewSetPlacement_DockResponderApplicator : UIInputViewSetPlacement_FloatingApplicator {

	UIKeyboardPopoverContainer* _popover;
	CGRect _popoverRectPlaceholder;

}

@property (nonatomic,retain) UIKeyboardPopoverContainer * popover;              //@synthesize popover=_popover - In the implementation block
@property (assign,nonatomic) CGRect popoverRectPlaceholder;                     //@synthesize popoverRectPlaceholder=_popoverRectPlaceholder - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(void)invalidate;
-(UIEdgeInsets)contentInsets;
-(void)prepare;
-(id)draggableView;
-(BOOL)preBeginGesture:(id)arg1 shouldBegin:(BOOL*)arg2 ;
-(BOOL)isGesture:(id)arg1 inDraggableView:(CGPoint)arg2 ;
-(void)applyChanges:(id)arg1 ;
-(id)twoFingerDraggableView;
-(CGRect)popoverFrame;
-(UIKeyboardPopoverContainer *)popover;
-(void)setPopover:(UIKeyboardPopoverContainer *)arg1 ;
-(void)setPopoverRectPlaceholder:(CGRect)arg1 ;
-(CGRect)popoverRectPlaceholder;
@end

