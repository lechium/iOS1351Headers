/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:43 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKAppletSubcredentialSharingInvitationMetadata : NSObject <NSSecureCoding> {

	BOOL _shouldRequestInvitation;
	NSString* _anonymizationSalt;

}

@property (nonatomic,retain) NSString * anonymizationSalt;              //@synthesize anonymizationSalt=_anonymizationSalt - In the implementation block
@property (assign,nonatomic) BOOL shouldRequestInvitation;              //@synthesize shouldRequestInvitation=_shouldRequestInvitation - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setShouldRequestInvitation:(BOOL)arg1 ;
-(void)setAnonymizationSalt:(NSString *)arg1 ;
-(NSString *)anonymizationSalt;
-(BOOL)shouldRequestInvitation;
@end
