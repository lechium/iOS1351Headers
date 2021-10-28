/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:54 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NEIKEv2Payload.h>

@class NEIKEv2ConfigurationMessage;

@interface NEIKEv2ConfigPayload : NEIKEv2Payload {

	NEIKEv2ConfigurationMessage* _configuration;

}

@property (retain) NEIKEv2ConfigurationMessage * configuration;              //@synthesize configuration=_configuration - In the implementation block
+(id)copyTypeDescription;
-(id)description;
-(unsigned long long)type;
-(void)setConfiguration:(NEIKEv2ConfigurationMessage *)arg1 ;
-(NEIKEv2ConfigurationMessage *)configuration;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(BOOL)hasRequiredFields;
-(BOOL)generatePayloadData;
-(BOOL)parsePayloadData;
-(id)createConfigAttributeFromData:(id)arg1 attributeName:(id)arg2 attributeLen:(unsigned short)arg3 attributeType:(unsigned long long)arg4 customType:(unsigned long long)arg5 ;
@end
