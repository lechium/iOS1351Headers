/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:18 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAKnowledgeGraphTriple : AceObject <SAAceSerializable>

@property (assign,nonatomic) float confidence; 
@property (nonatomic,copy) NSString * object; 
@property (nonatomic,copy) NSString * predicate; 
@property (nonatomic,copy) NSString * storeName; 
@property (nonatomic,copy) NSString * subject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)graphTriple;
+(id)graphTripleWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)object;
-(void)setStoreName:(NSString *)arg1 ;
-(void)setObject:(NSString *)arg1 ;
-(void)setPredicate:(NSString *)arg1 ;
-(NSString *)predicate;
-(float)confidence;
-(id)groupIdentifier;
-(void)setConfidence:(float)arg1 ;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)storeName;
-(id)encodedClassName;
@end
