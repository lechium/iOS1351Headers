/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <CoreSuggestionsInternals/SGMessage.h>

@class SGSimpleNamedEmailAddress, NSArray, NSString, NSNumber;

@interface SGSimpleMailMessage : SGMessage {

	BOOL _isInhuman;
	BOOL _isPartiallyDownloaded;
	SGSimpleNamedEmailAddress* _from;
	SGSimpleNamedEmailAddress* _replyTo;
	NSArray* _to;
	NSArray* _cc;
	NSArray* _bcc;
	NSString* _messageId;
	NSString* _htmlBody;
	NSNumber* _received;
	NSArray* _headers;
	SGSimpleNamedEmailAddress* _mailingList;

}

@property (nonatomic,copy) SGSimpleNamedEmailAddress * from;                     //@synthesize from=_from - In the implementation block
@property (nonatomic,copy) SGSimpleNamedEmailAddress * replyTo;                  //@synthesize replyTo=_replyTo - In the implementation block
@property (nonatomic,copy) NSArray * to;                                         //@synthesize to=_to - In the implementation block
@property (nonatomic,copy) NSArray * cc;                                         //@synthesize cc=_cc - In the implementation block
@property (nonatomic,copy) NSArray * bcc;                                        //@synthesize bcc=_bcc - In the implementation block
@property (nonatomic,copy) NSString * messageId;                                 //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,copy) NSString * body; 
@property (nonatomic,copy) NSString * htmlBody;                                  //@synthesize htmlBody=_htmlBody - In the implementation block
@property (nonatomic,copy) NSNumber * received;                                  //@synthesize received=_received - In the implementation block
@property (assign,nonatomic) BOOL isInhuman;                                     //@synthesize isInhuman=_isInhuman - In the implementation block
@property (assign,nonatomic) BOOL isPartiallyDownloaded;                         //@synthesize isPartiallyDownloaded=_isPartiallyDownloaded - In the implementation block
@property (nonatomic,readonly) NSArray * headers;                                //@synthesize headers=_headers - In the implementation block
@property (nonatomic,copy) SGSimpleNamedEmailAddress * mailingList;              //@synthesize mailingList=_mailingList - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)simpleMailMessageFromHeadersOfMessage:(id)arg1 ;
+(id)parseRfc822Headers:(id)arg1 htmlContent:(id)arg2 ;
+(id)fromMFMailMessage:(id)arg1 ;
+(BOOL)headersContainInhumanOnes:(id)arg1 keys:(id)arg2 ;
+(id)subjectByCleaningPrefixesInSubject:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)uniqueIdentifier;
-(NSArray *)to;
-(SGSimpleNamedEmailAddress *)from;
-(id)textContent;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
-(NSString *)messageId;
-(void)setMessageId:(NSString *)arg1 ;
-(unsigned long long)contentLength;
-(void)setFrom:(SGSimpleNamedEmailAddress *)arg1 ;
-(void)setTo:(NSArray *)arg1 ;
-(void)setHeaders:(NSArray *)arg1 ;
-(NSArray *)headers;
-(id)searchableItem;
-(BOOL)isPartiallyDownloaded;
-(NSArray *)cc;
-(NSArray *)bcc;
-(id)headersDictionary;
-(void)setCc:(NSArray *)arg1 ;
-(void)setBcc:(NSArray *)arg1 ;
-(id)rfc822Data;
-(SGSimpleNamedEmailAddress *)replyTo;
-(void)setHtmlBody:(NSString *)arg1 ;
-(NSString *)htmlBody;
-(id)asDictionary;
-(id)allRecipients;
-(id)initWithSearchableItem:(id)arg1 ;
-(id)spotlightBundleIdentifier;
-(BOOL)isInhuman;
-(BOOL)isEqualToSimpleMailMessage:(id)arg1 ;
-(id)spotlightUniqueIdentifier;
-(void)setReplyTo:(SGSimpleNamedEmailAddress *)arg1 ;
-(NSNumber *)received;
-(void)setReceived:(NSNumber *)arg1 ;
-(void)setIsInhuman:(BOOL)arg1 ;
-(void)setIsPartiallyDownloaded:(BOOL)arg1 ;
-(SGSimpleNamedEmailAddress *)mailingList;
-(void)setMailingList:(SGSimpleNamedEmailAddress *)arg1 ;
-(id)searchableItemWithSource:(id)arg1 ;
@end

