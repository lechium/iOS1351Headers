/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:42 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/BSProtobufSerializable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BKSHIDEventSenderDescriptor, NSString;

@interface BKSMousePointerDevice : NSObject <BSProtobufSerializable, NSSecureCoding, NSCopying> {

	BOOL _hasVirtualMouseButtons;
	BKSHIDEventSenderDescriptor* _senderDescriptor;
	NSString* _productName;
	NSString* _manufacturerName;
	NSString* _preferenceKey;

}

@property (nonatomic,copy) NSString * preferenceKey;                                             //@synthesize preferenceKey=_preferenceKey - In the implementation block
@property (nonatomic,copy) NSString * productName;                                               //@synthesize productName=_productName - In the implementation block
@property (nonatomic,copy) NSString * manufacturerName;                                          //@synthesize manufacturerName=_manufacturerName - In the implementation block
@property (assign,nonatomic) BOOL hasVirtualMouseButtons;                                        //@synthesize hasVirtualMouseButtons=_hasVirtualMouseButtons - In the implementation block
@property (nonatomic,copy,readonly) BKSHIDEventSenderDescriptor * senderDescriptor;              //@synthesize senderDescriptor=_senderDescriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)protobufSchema;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initForProtobufDecoding;
-(void)setPreferences:(id)arg1 ;
-(id)preferences;
-(NSString *)productName;
-(void)setProductName:(NSString *)arg1 ;
-(id)initWithSenderDescriptor:(id)arg1 ;
-(BKSHIDEventSenderDescriptor *)senderDescriptor;
-(NSString *)manufacturerName;
-(void)setManufacturerName:(NSString *)arg1 ;
-(BOOL)hasVirtualMouseButtons;
-(void)setHasVirtualMouseButtons:(BOOL)arg1 ;
-(NSString *)preferenceKey;
-(void)setPreferenceKey:(NSString *)arg1 ;
@end

