/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:54 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NEConfigurationLegacySupport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NEIPv4Route : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {

	NSString* _destinationAddress;
	NSString* _destinationSubnetMask;
	NSString* _gatewayAddress;

}

@property (readonly) NSString * destinationAddress;                 //@synthesize destinationAddress=_destinationAddress - In the implementation block
@property (readonly) NSString * destinationSubnetMask;              //@synthesize destinationSubnetMask=_destinationSubnetMask - In the implementation block
@property (copy) NSString * gatewayAddress;                         //@synthesize gatewayAddress=_gatewayAddress - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)initGlobals;
+(id)defaultRoute;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)destinationAddress;
-(BOOL)isDefaultRoute;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)copyLegacyDictionary;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(id)initWithDestinationAddress:(id)arg1 subnetMask:(id)arg2 ;
-(void)setGatewayAddress:(NSString *)arg1 ;
-(NSString *)destinationSubnetMask;
-(NSString *)gatewayAddress;
@end
