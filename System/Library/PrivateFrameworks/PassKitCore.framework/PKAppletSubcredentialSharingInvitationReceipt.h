/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:43 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID, PKSharedAppletSubcredentialMetadata;

@interface PKAppletSubcredentialSharingInvitationReceipt : NSObject <NSSecureCoding> {

	BOOL _forWatch;
	BOOL _requiresAuthentication;
	NSString* _identifier;
	NSUUID* _sharingSessionIdentifier;
	NSString* _recipientIdentifier;
	PKSharedAppletSubcredentialMetadata* _metadata;

}

@property (nonatomic,copy) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSUUID * sharingSessionIdentifier;                           //@synthesize sharingSessionIdentifier=_sharingSessionIdentifier - In the implementation block
@property (assign,getter=isForWatch,nonatomic) BOOL forWatch;                             //@synthesize forWatch=_forWatch - In the implementation block
@property (assign,nonatomic) BOOL requiresAuthentication;                                 //@synthesize requiresAuthentication=_requiresAuthentication - In the implementation block
@property (nonatomic,copy) NSString * recipientIdentifier;                                //@synthesize recipientIdentifier=_recipientIdentifier - In the implementation block
@property (nonatomic,retain) PKSharedAppletSubcredentialMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setMetadata:(PKSharedAppletSubcredentialMetadata *)arg1 ;
-(PKSharedAppletSubcredentialMetadata *)metadata;
-(void)setRecipientIdentifier:(NSString *)arg1 ;
-(BOOL)requiresAuthentication;
-(void)setRequiresAuthentication:(BOOL)arg1 ;
-(NSString *)recipientIdentifier;
-(NSUUID *)sharingSessionIdentifier;
-(void)setSharingSessionIdentifier:(NSUUID *)arg1 ;
-(void)setForWatch:(BOOL)arg1 ;
-(BOOL)isForWatch;
-(BOOL)isEqualToInvitationReceipt:(id)arg1 ;
-(id)initWithInvitationData:(id)arg1 recipientIdentifier:(id)arg2 ;
@end
