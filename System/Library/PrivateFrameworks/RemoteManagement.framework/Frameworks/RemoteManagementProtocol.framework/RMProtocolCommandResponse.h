/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMProtocolCommandResponse_Command;

@interface RMProtocolCommandResponse : RMModelPayloadBase {

	NSString* _responseCommandToken;
	RMProtocolCommandResponse_Command* _responseCommand;

}

@property (nonatomic,copy) NSString * responseCommandToken;                                  //@synthesize responseCommandToken=_responseCommandToken - In the implementation block
@property (nonatomic,copy) RMProtocolCommandResponse_Command * responseCommand;              //@synthesize responseCommand=_responseCommand - In the implementation block
+(id)requestWithCommandToken:(id)arg1 command:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(RMProtocolCommandResponse_Command *)responseCommand;
-(void)setResponseCommand:(RMProtocolCommandResponse_Command *)arg1 ;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(void)setResponseCommandToken:(NSString *)arg1 ;
-(NSString *)responseCommandToken;
@end

