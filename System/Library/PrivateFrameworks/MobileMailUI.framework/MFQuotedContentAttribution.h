/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:07 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface MFQuotedContentAttribution : NSObject {

	long long _type;
	NSString* _senderName;

}

@property (nonatomic,readonly) long long type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * senderName;              //@synthesize senderName=_senderName - In the implementation block
+(id)noAttribution;
+(id)unknownAttribution;
+(id)attributionWithSenderName:(id)arg1 ;
-(id)debugDescription;
-(long long)type;
-(NSString *)senderName;
-(id)initWithType:(long long)arg1 senderName:(id)arg2 ;
@end

