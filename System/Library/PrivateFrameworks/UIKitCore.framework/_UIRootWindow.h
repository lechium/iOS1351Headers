/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:10 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIWindow.h>

@class NSString, RBSAssertion;

@interface _UIRootWindow : UIWindow {

	double _scale;
	os_unfair_lock_s _visibilityLock;
	BOOL _visibilityLock_enabled;
	NSString* _visibilityLock_environment;
	NSString* _visibilityLock_identifier;
	BOOL _visibilityLock_updateEnqueued;
	os_unfair_lock_s _visibilityProcessingLock;
	NSString* _visibilityProcessingLock_identifier;
	RBSAssertion* _visibilityProcessingLock_assertion;
	CGAffineTransform _additionalRootLayerAffineTransform;

}

@property (assign,setter=_setAdditionalRootLayerAffineTransform:,getter=_additionalRootLayerAffineTransform,nonatomic) CGAffineTransform additionalRootLayerAffineTransform;              //@synthesize additionalRootLayerAffineTransform=_additionalRootLayerAffineTransform - In the implementation block
@property (nonatomic,copy,readonly) NSString * visibilityEnvironment; 
-(void)dealloc;
-(id)_context;
-(void)setHidden:(BOOL)arg1 ;
-(SCD_Struct_UI32)_bindingDescription;
-(BOOL)_isWindowServerHostingManaged;
-(BOOL)_extendsScreenSceneLifetime;
-(id)initWithScreen:(id)arg1 ;
-(id)initWithDisplay:(id)arg1 ;
-(BOOL)_touchesInsideShouldHideCalloutBar;
-(BOOL)_wantsSceneAssociation;
-(id)_layerForCoordinateSpaceConversion;
-(void)_configureRootLayer:(id)arg1 sceneTransformLayer:(id)arg2 transformLayer:(id)arg3 ;
-(void)_didMoveFromScreen:(id)arg1 toScreen:(id)arg2 ;
-(void)_configureContextOptions:(id)arg1 ;
-(BOOL)_transformLayerIncludesScreenRotation;
-(void)_updateVisibility;
-(id)_visibilityLock_environment;
-(void)_visibilityLock_enqueueUpdateIfNecessary;
-(void)_noteScreenDidChangeMode:(id)arg1 ;
-(void)_visibilityLock_enqueueUpdateIfNecessary_body;
-(NSString *)visibilityEnvironment;
-(void)setVisibilityIdentifier:(id)arg1 ;
-(void)_setAdditionalRootLayerAffineTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)_additionalRootLayerAffineTransform;
@end

