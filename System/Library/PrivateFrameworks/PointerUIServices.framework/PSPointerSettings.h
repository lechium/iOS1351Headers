/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PointerUIServices.framework/PointerUIServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrototypeTools/PTSettings.h>

@interface PSPointerSettings : PTSettings {

	double _materialAlphaDot;
	double _materialAlphaIBeam;
	double _materialAlphaSmallItemLight;
	double _materialAlphaSmallItemDark;
	double _materialAlphaSmallItemDarkHighContrast;

}

@property (assign,nonatomic) double materialAlphaDot;                                    //@synthesize materialAlphaDot=_materialAlphaDot - In the implementation block
@property (assign,nonatomic) double materialAlphaIBeam;                                  //@synthesize materialAlphaIBeam=_materialAlphaIBeam - In the implementation block
@property (assign,nonatomic) double materialAlphaSmallItemLight;                         //@synthesize materialAlphaSmallItemLight=_materialAlphaSmallItemLight - In the implementation block
@property (assign,nonatomic) double materialAlphaSmallItemDark;                          //@synthesize materialAlphaSmallItemDark=_materialAlphaSmallItemDark - In the implementation block
@property (assign,nonatomic) double materialAlphaSmallItemDarkHighContrast;              //@synthesize materialAlphaSmallItemDarkHighContrast=_materialAlphaSmallItemDarkHighContrast - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setMaterialAlphaDot:(double)arg1 ;
-(void)setMaterialAlphaIBeam:(double)arg1 ;
-(void)setMaterialAlphaSmallItemLight:(double)arg1 ;
-(void)setMaterialAlphaSmallItemDark:(double)arg1 ;
-(void)setMaterialAlphaSmallItemDarkHighContrast:(double)arg1 ;
-(double)materialAlphaDot;
-(double)materialAlphaIBeam;
-(double)materialAlphaSmallItemLight;
-(double)materialAlphaSmallItemDark;
-(double)materialAlphaSmallItemDarkHighContrast;
@end

