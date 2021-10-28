/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:18 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSDictionary, NSArray;

@interface SAIntentGroupBatchSlotResolutionResult : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * base64EncodedIntent; 
@property (nonatomic,copy) NSString * jsonEncodedIntent; 
@property (nonatomic,copy) NSDictionary * slotResolutionMap; 
@property (nonatomic,copy) NSArray * stepResults; 
@property (nonatomic,copy) NSString * typeName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)batchSlotResolutionResult;
+(id)batchSlotResolutionResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)typeName;
-(void)setTypeName:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)jsonEncodedIntent;
-(void)setJsonEncodedIntent:(NSString *)arg1 ;
-(NSString *)base64EncodedIntent;
-(void)setBase64EncodedIntent:(NSString *)arg1 ;
-(NSDictionary *)slotResolutionMap;
-(void)setSlotResolutionMap:(NSDictionary *)arg1 ;
-(NSArray *)stepResults;
-(void)setStepResults:(NSArray *)arg1 ;
@end
