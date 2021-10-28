/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:28 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface HMCameraClipEncryptedDataContext : NSObject <NSCopying> {

	NSData* _initializationVector;
	NSData* _ciphertext;
	NSData* _tag;

}

@property (copy,readonly) NSData * initializationVector;              //@synthesize initializationVector=_initializationVector - In the implementation block
@property (copy,readonly) NSData * ciphertext;                        //@synthesize ciphertext=_ciphertext - In the implementation block
@property (copy,readonly) NSData * tag;                               //@synthesize tag=_tag - In the implementation block
@property (copy,readonly) NSData * dataRepresentation; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)dataRepresentation;
-(id)initWithDataRepresentation:(id)arg1 ;
-(NSData *)tag;
-(NSData *)initializationVector;
-(NSData *)ciphertext;
-(id)initWithInitializationVector:(id)arg1 ciphertext:(id)arg2 tag:(id)arg3 ;
@end
