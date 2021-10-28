/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:19 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SAJSONSerialization.h>
#import <libobjc.A.dylib/SASerializable.h>

@class NSString;

@interface SATimestamp : NSObject <SAJSONSerialization, SASerializable> {

	unsigned long long _machAbsTime;
	double _machAbsTimeSeconds;
	unsigned long long _machContTime;
	double _machContTimeSeconds;
	double _wallTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) unsigned long long machAbsTime;                  //@synthesize machAbsTime=_machAbsTime - In the implementation block
@property (assign) double machAbsTimeSeconds;                       //@synthesize machAbsTimeSeconds=_machAbsTimeSeconds - In the implementation block
@property (assign) unsigned long long machContTime;                 //@synthesize machContTime=_machContTime - In the implementation block
@property (assign) double machContTimeSeconds;                      //@synthesize machContTimeSeconds=_machContTimeSeconds - In the implementation block
@property (assign) double wallTime;                                 //@synthesize wallTime=_wallTime - In the implementation block
+(id)timestamp;
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const SCD_Struct_SA38*)arg1 bufferLength:(unsigned long long)arg2 ;
+(id)timestampWithMachAbsTime:(unsigned long long)arg1 machAbsTimeSec:(double)arg2 machContTime:(unsigned long long)arg3 machContTimeSec:(double)arg4 wallTime:(double)arg5 ;
+(id)timestampWithKTraceEvent:(const trace_point*)arg1 fromSession:(const ktrace_sessionRef)arg2 ;
+(id)timestampWithMachAbsTime:(unsigned long long)arg1 machContTime:(unsigned long long)arg2 wallTime:(double)arg3 machTimebase:(mach_timebase_info)arg4 ;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(BOOL)isEqualToTimestamp:(id)arg1 ;
-(void)writeJSONDictionaryEntriesToStream:(id)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA38*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const SCD_Struct_SA38*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(unsigned long long)machAbsTime;
-(double)machAbsTimeSeconds;
-(void)setMachAbsTime:(unsigned long long)arg1 ;
-(void)setMachAbsTimeSeconds:(double)arg1 ;
-(void)setWallTime:(double)arg1 ;
-(void)applyMachTimebase:(mach_timebase_info)arg1 ;
-(double)wallTime;
-(unsigned long long)machContTime;
-(void)setMachContTime:(unsigned long long)arg1 ;
-(double)machContTimeSeconds;
-(void)setMachContTimeSeconds:(double)arg1 ;
@end
