/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:17 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class SARemoteDevice, NSString;

@interface SAExecuteOnRemoteResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,retain) SARemoteDevice * remoteDevice; 
@property (assign,nonatomic) BOOL responseFromRemote; 
@property (nonatomic,retain) id<SAAceCommand> result; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)executeOnRemoteResponse;
+(id)executeOnRemoteResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id<SAAceCommand>)result;
-(id)groupIdentifier;
-(void)setResult:(id<SAAceCommand>)arg1 ;
-(id)encodedClassName;
-(SARemoteDevice *)remoteDevice;
-(void)setRemoteDevice:(SARemoteDevice *)arg1 ;
-(BOOL)requiresResponse;
-(BOOL)responseFromRemote;
-(void)setResponseFromRemote:(BOOL)arg1 ;
@end
