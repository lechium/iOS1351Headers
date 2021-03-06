/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:07 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoard/FrontBoard-Structs.h>
#import <UIKitCore/_UIRootWindow.h>
#import <libobjc.A.dylib/FBSceneTransformTarget.h>

@class UIView, NSHashTable, CALayer, NSString;

@interface FBRootWindow : _UIRootWindow <FBSceneTransformTarget> {

	UIView* _sceneContainerView;
	NSHashTable* _transforms;
	CALayer* _bezelLayer;
	CALayer* _maskLayer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_isSecure;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)initWithScreen:(id)arg1 ;
-(id)initWithDisplay:(id)arg1 ;
-(void)_updateTransforms;
-(id)initWithDisplayConfiguration:(id)arg1 ;
-(BOOL)_usesWindowServerHitTesting;
-(BOOL)_appearsInLoupe;
-(BOOL)_shouldPrepareScreenForWindow;
-(BOOL)_canBecomeKeyWindow;
-(void)transformDidInvalidate:(id)arg1 ;
-(void)transformDidUpdate:(id)arg1 ;
-(void)attachSceneTransform:(id)arg1 ;
-(void)removeSceneTransform:(id)arg1 ;
-(id)sceneContainerView;
@end

