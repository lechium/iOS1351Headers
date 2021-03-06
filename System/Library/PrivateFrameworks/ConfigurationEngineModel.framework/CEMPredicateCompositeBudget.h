/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:02 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPredicateBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString, CEMPredicateCompositeBudget_Monitors, NSArray;

@interface CEMPredicateCompositeBudget : CEMPredicateBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadCalendarIdentifier;
	CEMPredicateCompositeBudget_Monitors* _payloadMonitors;
	NSArray* _payloadNotificationTimes;
	NSArray* _payloadTimeBudget;

}

@property (nonatomic,copy) NSString * payloadCalendarIdentifier;                                //@synthesize payloadCalendarIdentifier=_payloadCalendarIdentifier - In the implementation block
@property (nonatomic,copy) CEMPredicateCompositeBudget_Monitors * payloadMonitors;              //@synthesize payloadMonitors=_payloadMonitors - In the implementation block
@property (nonatomic,copy) NSArray * payloadNotificationTimes;                                  //@synthesize payloadNotificationTimes=_payloadNotificationTimes - In the implementation block
@property (nonatomic,copy) NSArray * payloadTimeBudget;                                         //@synthesize payloadTimeBudget=_payloadTimeBudget - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buildWithCalendarIdentifier:(id)arg1 withMonitors:(id)arg2 withNotificationTimes:(id)arg3 withTimeBudget:(id)arg4 ;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildRequiredOnlyWithMonitors:(id)arg1 withTimeBudget:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadCalendarIdentifier:(NSString *)arg1 ;
-(void)setPayloadNotificationTimes:(NSArray *)arg1 ;
-(void)setPayloadTimeBudget:(NSArray *)arg1 ;
-(NSString *)payloadCalendarIdentifier;
-(NSArray *)payloadNotificationTimes;
-(NSArray *)payloadTimeBudget;
-(void)setPayloadMonitors:(CEMPredicateCompositeBudget_Monitors *)arg1 ;
-(CEMPredicateCompositeBudget_Monitors *)payloadMonitors;
@end

