/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:54 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProtocolBuffer/PBCodable.h>

@class SISchemaUserSpeechDuration, SISchemaConversationTrace, SISchemaTurnInteraction, SISchemaSpeechResultSelected, SISchemaDeviceFixedContext, SISchemaServerGeneratedDismissal, SISchemaServerEventMetadata, NSData;

@interface SISchemaServerEvent : PBCodable {

	unsigned long long _whichEvent_Type;
	SISchemaUserSpeechDuration* _userSpeechDuration;
	SISchemaConversationTrace* _serverConversationTrace;
	SISchemaTurnInteraction* _turnInteraction;
	SISchemaSpeechResultSelected* _speechResultSelected;
	SISchemaDeviceFixedContext* _serverDeviceFixedContext;
	SISchemaServerGeneratedDismissal* _serverGeneratedDismissal;
	SISchemaServerEventMetadata* _eventMetadata;

}

@property (nonatomic,retain) SISchemaServerEventMetadata * eventMetadata;                              //@synthesize eventMetadata=_eventMetadata - In the implementation block
@property (nonatomic,retain) SISchemaUserSpeechDuration * userSpeechDuration;                          //@synthesize userSpeechDuration=_userSpeechDuration - In the implementation block
@property (nonatomic,retain) SISchemaConversationTrace * serverConversationTrace;                      //@synthesize serverConversationTrace=_serverConversationTrace - In the implementation block
@property (nonatomic,retain) SISchemaTurnInteraction * turnInteraction;                                //@synthesize turnInteraction=_turnInteraction - In the implementation block
@property (nonatomic,retain) SISchemaSpeechResultSelected * speechResultSelected;                      //@synthesize speechResultSelected=_speechResultSelected - In the implementation block
@property (nonatomic,retain) SISchemaDeviceFixedContext * serverDeviceFixedContext;                    //@synthesize serverDeviceFixedContext=_serverDeviceFixedContext - In the implementation block
@property (nonatomic,retain) SISchemaServerGeneratedDismissal * serverGeneratedDismissal;              //@synthesize serverGeneratedDismissal=_serverGeneratedDismissal - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,readonly) unsigned long long whichEvent_Type;                                     //@synthesize whichEvent_Type=_whichEvent_Type - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(SISchemaServerEventMetadata *)eventMetadata;
-(void)setEventMetadata:(SISchemaServerEventMetadata *)arg1 ;
-(unsigned long long)whichEvent_Type;
-(void)setUserSpeechDuration:(SISchemaUserSpeechDuration *)arg1 ;
-(void)setServerConversationTrace:(SISchemaConversationTrace *)arg1 ;
-(void)setTurnInteraction:(SISchemaTurnInteraction *)arg1 ;
-(void)setSpeechResultSelected:(SISchemaSpeechResultSelected *)arg1 ;
-(void)setServerDeviceFixedContext:(SISchemaDeviceFixedContext *)arg1 ;
-(void)setServerGeneratedDismissal:(SISchemaServerGeneratedDismissal *)arg1 ;
-(SISchemaUserSpeechDuration *)userSpeechDuration;
-(SISchemaConversationTrace *)serverConversationTrace;
-(SISchemaTurnInteraction *)turnInteraction;
-(SISchemaSpeechResultSelected *)speechResultSelected;
-(SISchemaDeviceFixedContext *)serverDeviceFixedContext;
-(SISchemaServerGeneratedDismissal *)serverGeneratedDismissal;
@end

