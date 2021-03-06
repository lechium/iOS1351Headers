/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:19 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAIntentGroupProtobufMessage, NSString;

@interface SAIntentGroupLaunchAppWithIntent : SABaseClientBoundCommand

@property (nonatomic,retain) SAIntentGroupProtobufMessage * handledIntent; 
@property (nonatomic,retain) SAIntentGroupProtobufMessage * handledIntentResponse; 
@property (nonatomic,copy) NSString * jsonEncodedHandledIntent; 
@property (nonatomic,copy) NSString * jsonEncodedHandledIntentResponse; 
+(id)launchAppWithIntent;
+(id)launchAppWithIntentWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAIntentGroupProtobufMessage *)handledIntent;
-(void)setHandledIntent:(SAIntentGroupProtobufMessage *)arg1 ;
-(SAIntentGroupProtobufMessage *)handledIntentResponse;
-(void)setHandledIntentResponse:(SAIntentGroupProtobufMessage *)arg1 ;
-(NSString *)jsonEncodedHandledIntent;
-(void)setJsonEncodedHandledIntent:(NSString *)arg1 ;
-(NSString *)jsonEncodedHandledIntentResponse;
-(void)setJsonEncodedHandledIntentResponse:(NSString *)arg1 ;
@end

