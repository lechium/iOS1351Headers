/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:18 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString;

@interface SAPhoneHangUpResponse : SABaseCommand <SAServerBoundCommand>

@property (assign,nonatomic) BOOL activeCallRemaining; 
@property (nonatomic,copy) NSString * phoneHangUpCallType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)hangUpResponse;
+(id)hangUpResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)activeCallRemaining;
-(void)setActiveCallRemaining:(BOOL)arg1 ;
-(NSString *)phoneHangUpCallType;
-(void)setPhoneHangUpCallType:(NSString *)arg1 ;
@end
