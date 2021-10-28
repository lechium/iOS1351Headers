/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_DPStringRandomizer.h>

@class _DPBiasedCoin, _DPRandomBitPositionGenerator;

@interface _DPOBHRandomizer : NSObject <_DPStringRandomizer> {

	unsigned long long _m;
	double _epsilon;
	_DPBiasedCoin* _epsilonCoin;
	_DPRandomBitPositionGenerator* _bitPositionGenerator;
	double _cEpsilon;

}

@property (m,nonatomic,readonly) unsigned long long m;                                            //@synthesize m=_m - In the implementation block
@property (nonatomic,readonly) double epsilon;                                                    //@synthesize epsilon=_epsilon - In the implementation block
@property (nonatomic,readonly) _DPBiasedCoin * epsilonCoin;                                       //@synthesize epsilonCoin=_epsilonCoin - In the implementation block
@property (nonatomic,readonly) _DPRandomBitPositionGenerator * bitPositionGenerator;              //@synthesize bitPositionGenerator=_bitPositionGenerator - In the implementation block
@property (nonatomic,readonly) double cEpsilon;                                                   //@synthesize cEpsilon=_cEpsilon - In the implementation block
+(id)obhRandomizerWithDimensionality:(unsigned long long)arg1 epsilon:(double)arg2 ;
-(id)init;
-(id)description;
-(double)epsilon;
-(id)initWithDimensionality:(unsigned long long)arg1 epsilon:(double)arg2 ;
-(BOOL)getBitValueAtIndex:(unsigned long long)arg1 forString:(id)arg2 ;
-(id)randomizedBitForString:(id)arg1 ;
-(id)randomizeStrings:(id)arg1 forKey:(id)arg2 ;
-(id)randomizeWords:(id)arg1 fragmentWidth:(unsigned long long)arg2 forKey:(id)arg3 ;
-(id)randomizeBitValues:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)m;
-(_DPBiasedCoin *)epsilonCoin;
-(_DPRandomBitPositionGenerator *)bitPositionGenerator;
-(double)cEpsilon;
@end
