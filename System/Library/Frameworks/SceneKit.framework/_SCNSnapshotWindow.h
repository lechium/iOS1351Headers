/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:13 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SceneKit/SceneKit-Structs.h>
#import <UIKitCore/UIWindow.h>

@interface _SCNSnapshotWindow : UIWindow
-(void)dealloc;
-(void)_setFirstResponder:(id)arg1 ;
-(id)_hitTest:(CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3 ;
-(BOOL)_canBecomeKeyWindow;
-(BOOL)_isSettingFirstResponder;
-(CGPoint)warpPoint:(CGPoint)arg1 ;
-(id)scnView;
-(CGPoint)_warpPoint:(CGPoint)arg1 outOfBounds:(BOOL*)arg2 ;
@end
