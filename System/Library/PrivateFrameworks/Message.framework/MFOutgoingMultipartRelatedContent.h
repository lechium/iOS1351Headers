/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:36 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Message/MFOutgoingRichtextMessageContent.h>

@class NSString;

@interface MFOutgoingMultipartRelatedContent : MFOutgoingRichtextMessageContent {

	NSString* _htmlBody;

}

@property (nonatomic,retain) NSString * htmlBody;              //@synthesize htmlBody=_htmlBody - In the implementation block
-(id)copy;
-(id)multipartContent;
-(void)setHtmlBody:(NSString *)arg1 ;
-(NSString *)htmlBody;
@end

