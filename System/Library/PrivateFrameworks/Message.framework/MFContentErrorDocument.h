/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:35 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSError, NSString;

@interface MFContentErrorDocument : NSObject {

	NSError* _error;

}

@property (nonatomic,readonly) NSError * error;                 //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSString * content; 
-(NSError *)error;
-(NSString *)content;
-(id)initWithMimePart:(id)arg1 ;
@end
