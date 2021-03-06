/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIColor;

@interface NWColorIndex : NSObject {

	double _value;
	UIColor* _color;

}

@property (nonatomic,readonly) double value;                 //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) UIColor * color;              //@synthesize color=_color - In the implementation block
+(id)indexForValue:(double)arg1 ;
+(id)indexWithValue:(double)arg1 color:(id)arg2 ;
+(id)colorForValue:(double)arg1 ;
+(id)zeroIndex;
-(BOOL)isEqual:(id)arg1 ;
-(double)value;
-(UIColor *)color;
-(id)initWithValue:(double)arg1 color:(id)arg2 ;
@end

