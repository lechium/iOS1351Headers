/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:18 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAIntentGroupGetIntentDefinitions : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * queries; 
+(id)getIntentDefinitions;
+(id)getIntentDefinitionsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setQueries:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSArray *)queries;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
@end

