/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:04 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _MNDistanceFormatOptions : NSObject {

	BOOL metric;
	BOOL yards;
	BOOL abbreviateUnits;
	BOOL spoken;
	unsigned long long maximumFractionDigits;
	long long rounding;
	unsigned long long _minimumFractionDigits;

}

@property (assign,nonatomic) unsigned long long minimumFractionDigits;              //@synthesize minimumFractionDigits=_minimumFractionDigits - In the implementation block
@property (assign,nonatomic) unsigned long long maximumFractionDigits; 
@property (assign,nonatomic) BOOL metric; 
@property (assign,nonatomic) BOOL yards; 
@property (assign,nonatomic) BOOL abbreviateUnits; 
@property (assign,nonatomic) BOOL spoken; 
@property (assign,nonatomic) long long rounding; 
-(BOOL)yards;
-(unsigned long long)minimumFractionDigits;
-(void)setMinimumFractionDigits:(unsigned long long)arg1 ;
-(unsigned long long)maximumFractionDigits;
-(void)setMaximumFractionDigits:(unsigned long long)arg1 ;
-(BOOL)metric;
-(void)setMetric:(BOOL)arg1 ;
-(void)setYards:(BOOL)arg1 ;
-(BOOL)abbreviateUnits;
-(void)setAbbreviateUnits:(BOOL)arg1 ;
-(BOOL)spoken;
-(void)setSpoken:(BOOL)arg1 ;
-(long long)rounding;
-(void)setRounding:(long long)arg1 ;
@end

