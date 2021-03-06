/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:46 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDictionary;

@interface IKJSRWIDependencyDomain : NSObject {

	NSString* _identifier;
	Class _agentClass;
	NSDictionary* _types;
	NSDictionary* _commands;
	NSDictionary* _events;

}

@property (nonatomic,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) Class agentClass;                                //@synthesize agentClass=_agentClass - In the implementation block
@property (nonatomic,readonly) NSString * dispatcherClassString; 
@property (nonatomic,readonly) NSDictionary * types;                          //@synthesize types=_types - In the implementation block
@property (nonatomic,readonly) NSDictionary * commands;                       //@synthesize commands=_commands - In the implementation block
@property (nonatomic,readonly) NSDictionary * events;                         //@synthesize events=_events - In the implementation block
+(id)allDomains;
+(id)allowedDomains;
+(id)domainAgentClassMap;
+(void)processDomains:(id)arg1 ;
-(NSString *)identifier;
-(NSDictionary *)events;
-(NSDictionary *)types;
-(Class)agentClass;
-(void)setAgentClass:(Class)arg1 ;
-(NSDictionary *)commands;
-(BOOL)isValidWithError:(id*)arg1 ;
-(NSString *)dispatcherClassString;
-(id)initWithDomainDictionary:(id)arg1 agentClass:(Class)arg2 ;
-(BOOL)isValidForTypesWithError:(id*)arg1 ;
-(BOOL)isValidForAgentWithError:(id*)arg1 ;
-(BOOL)isValidForEventsWithError:(id*)arg1 ;
@end

