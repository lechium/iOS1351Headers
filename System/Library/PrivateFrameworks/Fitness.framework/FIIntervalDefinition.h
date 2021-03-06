/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Fitness.framework/Fitness
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FIDictionaryRepresentable.h>

@class HKQuantity;

@interface FIIntervalDefinition : NSObject <FIDictionaryRepresentable> {

	long long _type;
	HKQuantity* _quantity;

}

@property (nonatomic,readonly) long long type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) HKQuantity * quantity;              //@synthesize quantity=_quantity - In the implementation block
+(id)intervalDefinitionWithTypeIdentifier:(long long)arg1 quantity:(id)arg2 ;
+(id)definitionFromDictionary:(id)arg1 error:(id*)arg2 ;
-(long long)type;
-(id)dictionaryRepresentation;
-(HKQuantity *)quantity;
-(id)initWithTypeIdentifier:(long long)arg1 quantity:(id)arg2 ;
-(id)byChangingType:(long long)arg1 quantity:(id)arg2 ;
@end

