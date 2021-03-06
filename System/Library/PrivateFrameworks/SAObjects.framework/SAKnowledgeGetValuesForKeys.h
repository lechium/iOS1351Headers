/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:17 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAKnowledgeGetValuesForKeys : SABaseClientBoundCommand <SAAceSerializable>

@property (nonatomic,copy) NSArray * keys; 
@property (nonatomic,copy) NSString * storeName; 
@property (nonatomic,copy) NSString * storeType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getValuesForKeys;
+(id)getValuesForKeysWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setStoreName:(NSString *)arg1 ;
-(NSArray *)keys;
-(void)setKeys:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(NSString *)storeName;
-(NSString *)storeType;
-(void)setStoreType:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
@end

