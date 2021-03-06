/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:21 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /usr/lib/libMemoryResourceException.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FPAuxDataType.h>

@interface FPAuxData : NSObject <FPAuxDataType> {

	BOOL _aggregate;
	long long _value;

}

@property (nonatomic,readonly) long long value;                                    //@synthesize value=_value - In the implementation block
@property (getter=shouldAggregate,nonatomic,readonly) BOOL aggregate;              //@synthesize aggregate=_aggregate - In the implementation block
@property (nonatomic,readonly) BOOL isContainer; 
@property (nonatomic,readonly) id jsonRepresentation; 
-(long long)value;
-(BOOL)isContainer;
-(id)jsonRepresentation;
-(BOOL)shouldAggregate;
-(id)initWithValue:(long long)arg1 shouldAggregate:(BOOL)arg2 ;
@end

