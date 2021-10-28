/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class MSOID, NSData;


@protocol MSCMSMessage <MSMessage>
@property (readonly) MSOID * type; 
@property (nonatomic,retain) NSData * dataContent; 
@property (retain) id<MSCMSMessage> embeddedContent; 
@property (retain) MSOID * contentType; 
@required
-(MSOID *)type;
-(MSOID *)contentType;
-(void)setContentType:(id)arg1;
-(void)setDataContent:(id)arg1;
-(NSData *)dataContent;
-(void)setEmbeddedContent:(id)arg1;
-(id<MSCMSMessage>)embeddedContent;

@end
