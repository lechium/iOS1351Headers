/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:02 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray;

@interface CEMPredicateCompositeBudget_Monitors : CEMPayloadBase {

	NSArray* _payloadApps;
	NSArray* _payloadWebSites;
	NSArray* _payloadCategories;

}

@property (nonatomic,copy) NSArray * payloadApps;                    //@synthesize payloadApps=_payloadApps - In the implementation block
@property (nonatomic,copy) NSArray * payloadWebSites;                //@synthesize payloadWebSites=_payloadWebSites - In the implementation block
@property (nonatomic,copy) NSArray * payloadCategories;              //@synthesize payloadCategories=_payloadCategories - In the implementation block
+(id)buildWithApps:(id)arg1 withWebSites:(id)arg2 withCategories:(id)arg3 ;
+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPayloadCategories:(NSArray *)arg1 ;
-(void)setPayloadApps:(NSArray *)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(NSArray *)payloadApps;
-(NSArray *)payloadCategories;
-(void)setPayloadWebSites:(NSArray *)arg1 ;
-(NSArray *)payloadWebSites;
@end

