/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SignpostSupport/SignpostSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SignpostCAProcessStallAggregation, NSDictionary;

@interface SignpostCAStallAggregation : NSObject <NSCopying> {

	SignpostCAProcessStallAggregation* _systemAggregation;
	NSDictionary* _executablePathToStallAggregation;

}

@property (nonatomic,readonly) SignpostCAProcessStallAggregation * systemAggregation;              //@synthesize systemAggregation=_systemAggregation - In the implementation block
@property (nonatomic,readonly) NSDictionary * executablePathToStallAggregation;                    //@synthesize executablePathToStallAggregation=_executablePathToStallAggregation - In the implementation block
-(id)init;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SignpostCAProcessStallAggregation *)systemAggregation;
-(NSDictionary *)executablePathToStallAggregation;
-(void)_addSystemDuration:(unsigned long long)arg1 ofType:(unsigned char)arg2 ;
-(void)_addDuration:(unsigned long long)arg1 ofType:(unsigned char)arg2 procExecutablePath:(id)arg3 responsiblePID:(int)arg4 aggregateForSystem:(BOOL)arg5 ;
@end

