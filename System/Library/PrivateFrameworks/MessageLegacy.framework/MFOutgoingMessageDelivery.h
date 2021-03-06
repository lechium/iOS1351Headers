/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:12 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MFDeliveryDelegate;
@class MFMailMessage, MFMutableMessageHeaders, NSArray, ECHTMLStringAndMIMECharset, MFPlainTextDocument, MailAccount, DeliveryAccount, NSDictionary, MFMailDelivery, MFAttachmentCompositionContext;

@interface MFOutgoingMessageDelivery : NSObject {

	MFMailMessage* _message;
	MFMutableMessageHeaders* _headers;
	NSArray* _mixedContent;
	BOOL _textPartsAreHTML;
	ECHTMLStringAndMIMECharset* _htmlBody;
	MFPlainTextDocument* _plainTextAlternative;
	NSArray* _otherHTMLAndAttachments;
	MailAccount* _archiveAccount;
	DeliveryAccount* _deliveryAccount;
	NSDictionary* _compositionSpecification;
	MFMailDelivery* _currentDeliveryObject;
	BOOL _isUserRequested;
	BOOL _shouldSign;
	BOOL _shouldEncrypt;
	id<MFDeliveryDelegate> _delegate;
	MFAttachmentCompositionContext* _attachmentContext;
	unsigned long long _conversationFlags;
	MFMailMessage* _originalMessage;
	long long _originalConversationId;
	long long _action;

}

@property (assign,nonatomic,__weak) id<MFDeliveryDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MFAttachmentCompositionContext * attachmentContext;              //@synthesize attachmentContext=_attachmentContext - In the implementation block
@property (nonatomic,retain) NSDictionary * compositionSpecification;                         //@synthesize compositionSpecification=_compositionSpecification - In the implementation block
@property (assign,nonatomic) unsigned long long conversationFlags;                            //@synthesize conversationFlags=_conversationFlags - In the implementation block
@property (nonatomic,retain) MFMailMessage * originalMessage;                                 //@synthesize originalMessage=_originalMessage - In the implementation block
@property (assign,nonatomic) long long originalConversationId;                                //@synthesize originalConversationId=_originalConversationId - In the implementation block
@property (assign,nonatomic) BOOL isUserRequested;                                            //@synthesize isUserRequested=_isUserRequested - In the implementation block
@property (assign,nonatomic) long long action;                                                //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) BOOL shouldSign;                                                 //@synthesize shouldSign=_shouldSign - In the implementation block
@property (assign,nonatomic) BOOL shouldEncrypt;                                              //@synthesize shouldEncrypt=_shouldEncrypt - In the implementation block
+(id)newWithMessage:(id)arg1 ;
+(id)newWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3 ;
+(id)newWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 ;
-(id)init;
-(id<MFDeliveryDelegate>)delegate;
-(void)setDelegate:(id<MFDeliveryDelegate>)arg1 ;
-(long long)action;
-(id)message;
-(id)account;
-(void)setAccount:(id)arg1 ;
-(id)initWithMessage:(id)arg1 ;
-(void)setAction:(long long)arg1 ;
-(BOOL)shouldEncrypt;
-(BOOL)shouldSign;
-(void)setShouldSign:(BOOL)arg1 ;
-(MFMailMessage *)originalMessage;
-(BOOL)isUserRequested;
-(unsigned long long)conversationFlags;
-(id)initWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3 ;
-(id)initWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 ;
-(void)setConversationFlags:(unsigned long long)arg1 ;
-(NSDictionary *)compositionSpecification;
-(id)originalHeaders;
-(void)setArchiveAccount:(id)arg1 ;
-(long long)deliveryStatus;
-(void)setCompositionSpecification:(NSDictionary *)arg1 ;
-(void)setIsUserRequested:(BOOL)arg1 ;
-(id)originalMessageObjectID;
-(void)setOriginalMessage:(MFMailMessage *)arg1 ;
-(void)setShouldEncrypt:(BOOL)arg1 ;
-(id)deliverSynchronouslyWithCompletion:(/*^block*/id)arg1 ;
-(id)_currentDeliveryObject;
-(id)_deliverSynchronouslyWithCurrentSettings:(BOOL)arg1 ;
-(id)_deliveryAccountForInitializers;
-(MFAttachmentCompositionContext *)attachmentContext;
-(void)setAttachmentContext:(MFAttachmentCompositionContext *)arg1 ;
-(long long)originalConversationId;
-(void)setOriginalConversationId:(long long)arg1 ;
@end

