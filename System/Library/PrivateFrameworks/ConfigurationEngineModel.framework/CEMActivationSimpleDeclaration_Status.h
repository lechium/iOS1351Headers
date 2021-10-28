/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:01 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray;

@interface CEMActivationSimpleDeclaration_Status : CEMPayloadBase {

	NSArray* _statusInstalledConfigurations;

}

@property (nonatomic,copy) NSArray * statusInstalledConfigurations;              //@synthesize statusInstalledConfigurations=_statusInstalledConfigurations - In the implementation block
+(id)allowedStatusKeys;
+(id)allowedReasons;
+(id)buildRequiredOnly;
+(id)buildWithInstalledConfigurations:(id)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusInstalledConfigurations:(NSArray *)arg1 ;
-(NSArray *)statusInstalledConfigurations;
@end
