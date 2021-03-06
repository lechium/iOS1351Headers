/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:08 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ILMessageFilterReportRequest : NSObject <NSSecureCoding> {

	NSString* _sender;
	NSString* _messageBody;
	long long _suggestedAction;
	NSString* _extensionIdentifier;

}

@property (nonatomic,copy,readonly) NSString * extensionIdentifier;              //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * sender;                                    //@synthesize sender=_sender - In the implementation block
@property (nonatomic,copy) NSString * messageBody;                               //@synthesize messageBody=_messageBody - In the implementation block
@property (assign,nonatomic) long long suggestedAction;                          //@synthesize suggestedAction=_suggestedAction - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)sender;
-(void)setSender:(NSString *)arg1 ;
-(NSString *)messageBody;
-(void)setMessageBody:(NSString *)arg1 ;
-(NSString *)extensionIdentifier;
-(id)initWithExtensionIdentifier:(id)arg1 ;
-(long long)suggestedAction;
-(BOOL)isEqualToRequest:(id)arg1 ;
-(void)setSuggestedAction:(long long)arg1 ;
@end

