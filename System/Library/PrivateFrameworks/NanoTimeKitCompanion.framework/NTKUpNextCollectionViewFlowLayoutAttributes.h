/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UICollectionViewLayoutAttributes.h>

@interface NTKUpNextCollectionViewFlowLayoutAttributes : UICollectionViewLayoutAttributes {

	BOOL _notVisibleToUser;
	BOOL _fullyVisibleToUser;
	double _darkeningAlphaUniform;
	double _shadowAlpha;
	double _scale;
	long long _layoutMode;
	CGRect _unitFrameOnScreen;
	CGRect _computedFrame;

}

@property (assign,nonatomic) double darkeningAlphaUniform;              //@synthesize darkeningAlphaUniform=_darkeningAlphaUniform - In the implementation block
@property (assign,nonatomic) CGRect unitFrameOnScreen;                  //@synthesize unitFrameOnScreen=_unitFrameOnScreen - In the implementation block
@property (assign,nonatomic) double shadowAlpha;                        //@synthesize shadowAlpha=_shadowAlpha - In the implementation block
@property (assign,nonatomic) CGRect computedFrame;                      //@synthesize computedFrame=_computedFrame - In the implementation block
@property (assign,nonatomic) double scale;                              //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) long long layoutMode;                      //@synthesize layoutMode=_layoutMode - In the implementation block
@property (assign,nonatomic) BOOL notVisibleToUser;                     //@synthesize notVisibleToUser=_notVisibleToUser - In the implementation block
@property (assign,nonatomic) BOOL fullyVisibleToUser;                   //@synthesize fullyVisibleToUser=_fullyVisibleToUser - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(void)setShadowAlpha:(double)arg1 ;
-(double)shadowAlpha;
-(long long)layoutMode;
-(void)setLayoutMode:(long long)arg1 ;
-(CGRect)unitFrameOnScreen;
-(void)setUnitFrameOnScreen:(CGRect)arg1 ;
-(CGRect)computedFrame;
-(double)darkeningAlphaUniform;
-(BOOL)notVisibleToUser;
-(void)setDarkeningAlphaUniform:(double)arg1 ;
-(void)setComputedFrame:(CGRect)arg1 ;
-(void)setNotVisibleToUser:(BOOL)arg1 ;
-(BOOL)fullyVisibleToUser;
-(void)setFullyVisibleToUser:(BOOL)arg1 ;
@end

