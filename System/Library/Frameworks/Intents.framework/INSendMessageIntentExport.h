/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:08 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, NSString, INSpeakableString, INPerson;


@protocol INSendMessageIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSArray * recipients; 
@property (nonatomic,copy) NSString * content; 
@property (nonatomic,copy) INSpeakableString * speakableGroupName; 
@property (nonatomic,copy) NSString * conversationIdentifier; 
@property (nonatomic,copy) NSString * serviceName; 
@property (nonatomic,copy) INPerson * sender; 
@property (assign,nonatomic) long long effect; 
@property (nonatomic,copy) NSArray * attachments; 
@property (assign,nonatomic) long long messageType; 
@required
-(id)init;
-(NSArray *)attachments;
-(void)setAttachments:(id)arg1;
-(NSString *)serviceName;
-(INPerson *)sender;
-(NSArray *)recipients;
-(void)setSender:(id)arg1;
-(void)setRecipients:(id)arg1;
-(INSpeakableString *)speakableGroupName;
-(NSString *)conversationIdentifier;
-(void)setServiceName:(id)arg1;
-(NSString *)content;
-(void)setEffect:(long long)arg1;
-(long long)effect;
-(void)setContent:(id)arg1;
-(long long)messageType;
-(void)setMessageType:(long long)arg1;
-(void)setConversationIdentifier:(id)arg1;
-(void)setSpeakableGroupName:(id)arg1;

@end

