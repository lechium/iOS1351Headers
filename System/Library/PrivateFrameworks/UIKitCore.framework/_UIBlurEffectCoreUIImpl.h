/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:18 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIBlurEffectImpl.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CALayer;

@interface _UIBlurEffectCoreUIImpl : _UIBlurEffectImpl <NSCopying> {

	long long _blurStyle;
	NSString* _materialName;
	CALayer* _activeMaterialLayer;
	CALayer* _inactiveMaterialLayer;

}

@property (assign,nonatomic) long long blurStyle;                          //@synthesize blurStyle=_blurStyle - In the implementation block
@property (nonatomic,copy) NSString * materialName;                        //@synthesize materialName=_materialName - In the implementation block
@property (nonatomic,retain) CALayer * activeMaterialLayer;                //@synthesize activeMaterialLayer=_activeMaterialLayer - In the implementation block
@property (nonatomic,retain) CALayer * inactiveMaterialLayer;              //@synthesize inactiveMaterialLayer=_inactiveMaterialLayer - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)style;
-(BOOL)canProvideVibrancyEffect;
-(BOOL)canProvideCoreMaterialVibrancyEffect;
-(void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3 ;
-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3 ;
-(BOOL)requiresCopying;
-(void)appendDescriptionTo:(id)arg1 ;
-(long long)blurStyle;
-(void)setBlurStyle:(long long)arg1 ;
-(void)setMaterialName:(NSString *)arg1 ;
-(id)initWithMaterial:(id)arg1 style:(long long)arg2 ;
-(NSString *)materialName;
-(CALayer *)activeMaterialLayer;
-(void)setActiveMaterialLayer:(CALayer *)arg1 ;
-(CALayer *)inactiveMaterialLayer;
-(void)setInactiveMaterialLayer:(CALayer *)arg1 ;
@end
