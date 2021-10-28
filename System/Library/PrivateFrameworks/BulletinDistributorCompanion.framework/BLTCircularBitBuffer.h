/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableData;

@interface BLTCircularBitBuffer : NSObject {

	NSMutableData* _bitVector;
	unsigned long long _beginIndex;
	unsigned long long _capacity;

}

@property (nonatomic,readonly) unsigned long long beginIndex;              //@synthesize beginIndex=_beginIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long capacity;                //@synthesize capacity=_capacity - In the implementation block
+(unsigned long long)actualCapacity:(unsigned long long)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)clear;
-(unsigned long long)capacity;
-(unsigned long long)beginIndex;
-(void)_setBit:(BOOL)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithData:(id)arg1 andIndex:(unsigned long long)arg2 ;
-(void)setBit:(BOOL)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned char)bitAtIndex:(unsigned long long)arg1 ;
-(id)bitVector;
@end
