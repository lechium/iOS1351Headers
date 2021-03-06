/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NTKVictoryAnalogBackgroundColorPalette.h>

@class NTKOlympusColorPalette, NSString, UIColor;

@interface NTKOlympusAnalogBackgroundPalette : NSObject <NTKVictoryAnalogBackgroundColorPalette> {

	NTKOlympusColorPalette* _olympusPalette;

}

@property (nonatomic,retain) NTKOlympusColorPalette * olympusPalette;              //@synthesize olympusPalette=_olympusPalette - In the implementation block
@property (nonatomic,readonly) unsigned long long faceColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) UIColor * numbersColor; 
@property (nonatomic,readonly) UIColor * logoColor; 
@property (nonatomic,readonly) UIColor * analogDotColor; 
@property (nonatomic,readonly) BOOL hasWhiteElements; 
-(UIColor *)backgroundColor;
-(unsigned long long)faceColor;
-(id)colorForNumberVictoryAnalogTimeElement:(unsigned long long)arg1 ;
-(id)colorForDotVictoryAnalogTimeElement:(unsigned long long)arg1 ;
-(id)colorForLogoWithStyle:(unsigned long long)arg1 ;
-(UIColor *)numbersColor;
-(UIColor *)logoColor;
-(UIColor *)analogDotColor;
-(BOOL)hasWhiteElements;
-(id)initWithOlympusPalette:(id)arg1 alternatePalette:(id)arg2 ;
-(id)initWithOlympusPalette:(id)arg1 ;
-(NTKOlympusColorPalette *)olympusPalette;
-(void)setOlympusPalette:(NTKOlympusColorPalette *)arg1 ;
@end

