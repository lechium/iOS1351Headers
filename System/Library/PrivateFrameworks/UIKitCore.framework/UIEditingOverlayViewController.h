/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:13 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class UIUndoGestureInteraction;

@interface UIEditingOverlayViewController : UIViewController {

	UIUndoGestureInteraction* _undoInteraction;

}

@property (nonatomic,retain) UIUndoGestureInteraction * undoInteraction;              //@synthesize undoInteraction=_undoInteraction - In the implementation block
-(void)loadView;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_addInteractions;
-(void)_removeInteractions;
-(UIUndoGestureInteraction *)undoInteraction;
-(void)setUndoInteraction:(UIUndoGestureInteraction *)arg1 ;
-(void)updateEditingOverlayContainer;
@end
