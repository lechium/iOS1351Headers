/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:35 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DataAccess/DAMailMessage.h>

@class MFMailMessage, NSString;

@interface MFDADraftMessage : DAMailMessage {

	MFMailMessage* _message;
	unsigned long long _clientID;
	NSString* _bodyData;

}
-(id)date;
-(id)to;
-(id)from;
-(id)subject;
-(id)body;
-(void)setClientID:(unsigned long long)arg1 ;
-(id)clientID;
-(id)serverID;
-(id)cc;
-(id)bcc;
-(id)messageIDHeader;
-(id)initWithMailMessage:(id)arg1 clientID:(unsigned long long)arg2 ;
-(id)replyTo;
-(int)bodyType;
@end
