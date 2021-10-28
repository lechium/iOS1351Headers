/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PASampling/PASampling-Structs.h>
#import <PASampling/PASerializable.h>

@class NSArray, NSString;

@interface PAMountSnapshot : NSObject <PASerializable> {

	double _machTimestampWhenMeasured;
	double _machTimestampOfLastResponse;
	NSArray* _blockedThreadIDs;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) double machTimestampWhenMeasured;                //@synthesize machTimestampWhenMeasured=_machTimestampWhenMeasured - In the implementation block
@property (readonly) double machTimestampOfLastResponse;              //@synthesize machTimestampOfLastResponse=_machTimestampOfLastResponse - In the implementation block
@property (readonly) BOOL isUnresponsive; 
@property (readonly) NSArray * blockedThreadIDs;                      //@synthesize blockedThreadIDs=_blockedThreadIDs - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)isUnresponsive;
-(BOOL)isBlockingThread:(unsigned long long)arg1 ;
-(NSArray *)blockedThreadIDs;
-(BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(id)initWithSerializedMountSnapshot:(const SCD_Struct_PA6*)arg1 ;
-(id)initWithStatus:(netfs_status*)arg1 atMachTime:(double)arg2 ;
-(double)machTimestampWhenMeasured;
-(double)machTimestampOfLastResponse;
@end
