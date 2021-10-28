/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:12 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MailSupport/MailSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDMailMessageBody, NSString;

@interface AWDMailMessage : PBCodable <NSCopying> {

	AWDMailMessageBody* _body;
	NSString* _messageId;

}

@property (nonatomic,readonly) BOOL hasMessageId; 
@property (nonatomic,retain) NSString * messageId;                   //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,readonly) BOOL hasBody; 
@property (nonatomic,retain) AWDMailMessageBody * body;              //@synthesize body=_body - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setBody:(AWDMailMessageBody *)arg1 ;
-(AWDMailMessageBody *)body;
-(NSString *)messageId;
-(void)setMessageId:(NSString *)arg1 ;
-(BOOL)hasMessageId;
-(BOOL)hasBody;
-(id)initWithMailMessage:(id)arg1 ;
@end
