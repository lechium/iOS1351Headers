/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:57 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _UIBlurEffectImpl : NSObject
+(id)implementationFromCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)style;
-(void)setEffect:(id)arg1 ;
-(id)tintColor;
-(BOOL)invertAutomaticStyle;
-(BOOL)canProvideVibrancyEffect;
-(BOOL)canProvideCoreMaterialVibrancyEffect;
-(void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3 ;
-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3 ;
-(BOOL)requiresCopying;
-(id)implementationForUserInterfaceStyle:(long long)arg1 ;
-(void)appendDescriptionTo:(id)arg1 ;
@end

