/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/VNSerializingInternal.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/VNSerializing.h>
#import <libobjc.A.dylib/VNRequestRevisionProviding.h>

@class NSDictionary, NSData, NSString;

@interface VNEspressoModelImageprint : NSObject <VNSerializingInternal, NSSecureCoding, NSCopying, VNSerializing, VNRequestRevisionProviding> {

	NSDictionary* _labelsAndConfidence;
	unsigned long long _requestRevision;
	unsigned long long _elementType;
	NSData* _descriptorData;
	unsigned long long _elementCount;
	unsigned long long _lengthInBytes;
	unsigned long long _confidenceScoreType;
	NSString* _version;
	long long _distanceMode;

}

@property (retain) NSData * descriptorData;                                         //@synthesize descriptorData=_descriptorData - In the implementation block
@property (assign) unsigned long long elementCount;                                 //@synthesize elementCount=_elementCount - In the implementation block
@property (assign) unsigned long long lengthInBytes;                                //@synthesize lengthInBytes=_lengthInBytes - In the implementation block
@property (assign) long long distanceMode;                                          //@synthesize distanceMode=_distanceMode - In the implementation block
@property (copy) NSDictionary * labelsAndConfidence;                                //@synthesize labelsAndConfidence=_labelsAndConfidence - In the implementation block
@property (copy) NSString * version;                                                //@synthesize version=_version - In the implementation block
@property (readonly) unsigned long long elementType; 
@property (nonatomic,readonly) unsigned long long confidenceScoreType;              //@synthesize confidenceScoreType=_confidenceScoreType - In the implementation block
@property (nonatomic,readonly) unsigned long long serializedLength; 
@property (nonatomic,readonly) unsigned long long requestRevision; 
+(BOOL)supportsSecureCoding;
+(unsigned long long)confidenceTypeForRevision:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)version;
-(void)setVersion:(NSString *)arg1 ;
-(unsigned long long)requestRevision;
-(id)initWithData:(const void*)arg1 elementCount:(unsigned long long)arg2 elementType:(unsigned long long)arg3 lengthInBytes:(unsigned long long)arg4 labelsAndConfidence:(id)arg5 requestRevision:(unsigned long long)arg6 ;
-(id)computeDistance:(id)arg1 withDistanceFunction:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithState:(id)arg1 error:(id*)arg2 ;
-(id)initWithState:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id*)arg3 ;
-(unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)serializeStateAndReturnError:(id*)arg1 ;
-(unsigned long long)serializedLength;
-(unsigned long long)elementType;
-(id)_initWithClassKeyMappedCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 forCodingVersion:(unsigned)arg2 ;
-(NSData *)descriptorData;
-(void)setDescriptorData:(NSData *)arg1 ;
-(unsigned long long)elementCount;
-(void)setElementCount:(unsigned long long)arg1 ;
-(unsigned long long)lengthInBytes;
-(void)setLengthInBytes:(unsigned long long)arg1 ;
-(NSDictionary *)labelsAndConfidence;
-(void)setLabelsAndConfidence:(NSDictionary *)arg1 ;
-(unsigned long long)confidenceScoreType;
-(long long)distanceMode;
-(void)setDistanceMode:(long long)arg1 ;
@end
