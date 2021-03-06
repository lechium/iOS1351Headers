/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface TCTaggedMessage : NSObject {

	int mMessageTag;
	NSString* mMessageText;

}

@property (nonatomic,readonly) int messageTag; 
@property (nonatomic,copy,readonly) NSString * messageText; 
+(id)taggedMessageWithMessageText:(id)arg1 ;
-(NSString *)messageText;
-(id)initWithMessageText:(id)arg1 ;
-(int)messageTag;
@end

