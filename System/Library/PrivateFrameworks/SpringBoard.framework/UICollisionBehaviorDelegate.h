/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UICollisionBehaviorDelegate <NSObject>
@optional
-(void)collisionBehavior:(id)arg1 beganContactForItem:(id)arg2 withItem:(id)arg3 atPoint:(CGPoint)arg4;
-(void)collisionBehavior:(id)arg1 beganContactForItem:(id)arg2 withBoundaryIdentifier:(id)arg3 atPoint:(CGPoint)arg4;
-(void)collisionBehavior:(id)arg1 endedContactForItem:(id)arg2 withItem:(id)arg3;
-(void)collisionBehavior:(id)arg1 endedContactForItem:(id)arg2 withBoundaryIdentifier:(id)arg3;

@end
