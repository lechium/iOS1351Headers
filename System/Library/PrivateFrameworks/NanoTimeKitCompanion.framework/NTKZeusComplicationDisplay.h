/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NTKZeusColorPalette;


@protocol NTKZeusComplicationDisplay <NSObject>
@property (assign,nonatomic) unsigned long long style; 
@property (nonatomic,readonly) NTKZeusColorPalette * palette; 
@property (assign,nonatomic) BOOL legibilityEnabled; 
@required
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1;
-(NTKZeusColorPalette *)palette;
-(void)setLegibilityEnabled:(BOOL)arg1;
-(void)applyPalette:(id)arg1;
-(void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3;
-(BOOL)legibilityEnabled;

@end

