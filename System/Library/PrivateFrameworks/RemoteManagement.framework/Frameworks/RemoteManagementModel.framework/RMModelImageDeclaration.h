/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelAssetBase.h>
#import <libobjc.A.dylib/RMModelRegisteredTypeProtocol.h>

@class RMModelAssetBaseDescriptor, RMModelAssetBaseReference, NSString;

@interface RMModelImageDeclaration : RMModelAssetBase <RMModelRegisteredTypeProtocol> {

	RMModelAssetBaseDescriptor* _payloadDescriptor;
	RMModelAssetBaseReference* _payloadReference;

}

@property (nonatomic,copy) RMModelAssetBaseDescriptor * payloadDescriptor;              //@synthesize payloadDescriptor=_payloadDescriptor - In the implementation block
@property (nonatomic,copy) RMModelAssetBaseReference * payloadReference;                //@synthesize payloadReference=_payloadReference - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildWithIdentifier:(id)arg1 descriptor:(id)arg2 reference:(id)arg3 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 reference:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPayloadDescriptor:(RMModelAssetBaseDescriptor *)arg1 ;
-(RMModelAssetBaseDescriptor *)payloadDescriptor;
-(void)setPayloadReference:(RMModelAssetBaseReference *)arg1 ;
-(RMModelAssetBaseReference *)payloadReference;
-(BOOL)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
@end

