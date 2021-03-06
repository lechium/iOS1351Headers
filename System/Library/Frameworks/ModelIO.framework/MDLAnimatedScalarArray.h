/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:36 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLAnimatedValue.h>

@interface MDLAnimatedScalarArray : MDLAnimatedValue {

	unsigned long long _elementCount;

}

@property (assign,nonatomic) unsigned long long elementCount;              //@synthesize elementCount=_elementCount - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)precision;
-(unsigned long long)elementCount;
-(void)setElementCount:(unsigned long long)arg1 ;
-(id)initWithElementCount:(unsigned long long)arg1 ;
-(unsigned long long)getDoubleArray:(double*)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3 ;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 ;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 time:(double)arg3 ;
-(VtValue*)defaultVtValue;
-(void)setFloatArray:(const float*)arg1 count:(unsigned long long)arg2 atTime:(double)arg3 ;
-(void)setDoubleArray:(const double*)arg1 count:(unsigned long long)arg2 atTime:(double)arg3 ;
-(unsigned long long)getFloatArray:(float*)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3 ;
-(void)resetWithFloatArray:(const float*)arg1 count:(unsigned long long)arg2 atTimes:(const double*)arg3 count:(unsigned long long)arg4 ;
-(void)resetWithDoubleArray:(const double*)arg1 count:(unsigned long long)arg2 atTimes:(const double*)arg3 count:(unsigned long long)arg4 ;
-(unsigned long long)getFloatArray:(float*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)getDoubleArray:(double*)arg1 maxCount:(unsigned long long)arg2 ;
@end

