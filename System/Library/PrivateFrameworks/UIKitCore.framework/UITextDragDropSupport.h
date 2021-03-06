/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:13 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIDragInteraction, UIDropInteraction;


@protocol UITextDragDropSupport <NSObject>
@property (nonatomic,readonly) UIDragInteraction * dragInteraction; 
@property (nonatomic,readonly) UIDropInteraction * dropInteraction; 
@property (getter=isDragActive,nonatomic,readonly) BOOL dragActive; 
@property (getter=isDropActive,nonatomic,readonly) BOOL dropActive; 
@required
-(UIDropInteraction *)dropInteraction;
-(UIDragInteraction *)dragInteraction;
-(BOOL)accessibilityCanDrag;
-(void)notifyTextInteraction;
-(void)invalidateDropCaret;
-(BOOL)isDragActive;
-(BOOL)isDropActive;

@end

