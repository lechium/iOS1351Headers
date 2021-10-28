/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DigitalTouchShared/DigitalTouchShared-Structs.h>
#import <DigitalTouchShared/ETPointFIFO.h>

@interface ETBoxcarFilterPointFIFO : ETPointFIFO {

	float _spacing;
	unsigned long long _width;
	vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >* _prevPoints;

}

@property (assign,nonatomic) vector<float __attribute__((ext_vector_type(2))) prevPoints;              //@synthesize prevPoints=_prevPoints - In the implementation block
@property (assign,nonatomic) unsigned long long width;                                                 //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) float spacing;                                                            //@synthesize spacing=_spacing - In the implementation block
-(void)clear;
-(float)spacing;
-(unsigned long long)width;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)flush;
-(id)initWithFIFO:(id)arg1 width:(unsigned long long)arg2 spacing:(float)arg3 ;
-(vector<float __attribute__((ext_vector_type(2))))prevPoints;
-(void)emitAveragedPoint;
-(void)setSpacing:(float)arg1 ;
-(void)setPrevPoints:(vector<float __attribute__((ext_vector_type(2))))arg1 ;
-(void)addPoints:(1*)arg1 count:(unsigned long long)arg2 ;
@end
