/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:04 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UISceneLayerPresentationContext.h>

@class UITransformer;

@interface UIMutableSceneLayerPresentationContext : UISceneLayerPresentationContext

@property (assign,nonatomic) double alpha; 
@property (nonatomic,retain) UITransformer * transformer; 
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (assign,getter=isClippingDisabled,nonatomic) BOOL clippingDisabled; 
@property (assign,nonatomic) unsigned long long renderingMode; 
-(id)copyWithZone:(NSZone*)arg1 ;
@end

