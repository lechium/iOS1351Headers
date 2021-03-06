/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UIDragInteractionDelegate_Private <UIDragInteractionDelegate>
@optional
-(id)_requiredContextIDsForDragSessionInView:(id)arg1;
-(id)_dragInteraction:(id)arg1 viewToSnapshotItem:(id)arg2;
-(BOOL)_dragInteractionAllowsDragOverridingMasterSwitch:(id)arg1;
-(void)_dragInteraction:(id)arg1 prepareForSession:(id)arg2 completion:(/*^block*/id)arg3;
-(void)_dragInteraction:(id)arg1 liftAnimationDidChangeDirection:(long long)arg2;
-(void)_dragInteractionDidCancelLiftWithoutDragging:(id)arg1;
-(BOOL)_dragInteraction:(id)arg1 shouldDelayCompetingGestureRecognizer:(id)arg2;
-(BOOL)_dragInteraction:(id)arg1 canExcludeCompetingGestureRecognizer:(id)arg2;
-(BOOL)_dragInteraction:(id)arg1 competingGestureRecognizerShouldDelayLift:(id)arg2;
-(long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
-(long long)_dragInteraction:(id)arg1 dataOwnerForAddingToSession:(id)arg2 withTouchAtPoint:(CGPoint)arg3;
-(BOOL)_dragInteraction:(id)arg1 sessionSupportsSystemDrag:(id)arg2;

@end

