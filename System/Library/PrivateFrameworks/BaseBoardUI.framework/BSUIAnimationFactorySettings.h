/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:06 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrototypeTools/PTSettings.h>

@interface BSUIAnimationFactorySettings : PTSettings {

	BOOL _slowAnimations;
	double _slowDownFactor;

}

@property (assign,nonatomic) BOOL slowAnimations;                //@synthesize slowAnimations=_slowAnimations - In the implementation block
@property (assign,nonatomic) double slowDownFactor;              //@synthesize slowDownFactor=_slowDownFactor - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(double)effectiveSlowDownFactor;
-(void)setSlowAnimations:(BOOL)arg1 ;
-(void)setSlowDownFactor:(double)arg1 ;
-(BOOL)slowAnimations;
-(double)slowDownFactor;
@end
