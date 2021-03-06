/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:07 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoard/FrontBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class FBSceneLayer;

@interface FBSceneLayerHostView : UIView {

	FBSceneLayer* _sceneLayer;

}

@property (nonatomic,readonly) FBSceneLayer * sceneLayer;              //@synthesize sceneLayer=_sceneLayer - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)initWithSceneLayer:(id)arg1 ;
-(FBSceneLayer *)sceneLayer;
@end

