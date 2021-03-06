/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:04 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIDirectionalRotationView.h>

@class FBSceneLayer, UITransformer, UIScenePresentationContext;

@interface _UISceneLayerHostView : _UIDirectionalRotationView {

	FBSceneLayer* _sceneLayer;
	UITransformer* _transformer;
	UIScenePresentationContext* _presentationContext;
	UIScenePresentationContext* _currentPresentationContext;

}

@property (nonatomic,retain) UIScenePresentationContext * currentPresentationContext;              //@synthesize currentPresentationContext=_currentPresentationContext - In the implementation block
@property (nonatomic,retain) UITransformer * transformer;                                          //@synthesize transformer=_transformer - In the implementation block
@property (nonatomic,readonly) FBSceneLayer * sceneLayer;                                          //@synthesize sceneLayer=_sceneLayer - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)initWithSceneLayer:(id)arg1 ;
-(void)setCurrentPresentationContext:(UIScenePresentationContext *)arg1 ;
-(UIScenePresentationContext *)currentPresentationContext;
-(UITransformer *)transformer;
-(void)setTransformer:(UITransformer *)arg1 ;
-(FBSceneLayer *)sceneLayer;
@end

