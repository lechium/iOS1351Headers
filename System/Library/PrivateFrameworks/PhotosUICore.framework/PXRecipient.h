/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:12 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXCMMInvitationParticipant.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet, PXRecipientTransport, CNContact;

@interface PXRecipient : NSObject <PXCMMInvitationParticipant, NSCopying> {

	NSString* _firstName;
	NSString* _lastName;
	NSSet* _allEmails;
	NSSet* _allPhones;
	NSSet* _unformattedAllPhones;
	NSString* _phoneNumberString;
	NSString* _emailAddressString;
	PXRecipientTransport* _suggestedTransport;
	NSString* _localizedName;
	CNContact* _contact;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * emailAddressString; 
@property (nonatomic,readonly) NSString * phoneNumberString; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) NSString * firstName; 
@property (nonatomic,retain) PXRecipientTransport * suggestedTransport;              //@synthesize suggestedTransport=_suggestedTransport - In the implementation block
@property (nonatomic,copy,readonly) NSString * firstName;                            //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastName;                             //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,readonly) NSSet * allEmails;                                    //@synthesize allEmails=_allEmails - In the implementation block
@property (nonatomic,readonly) NSSet * allPhones;                                    //@synthesize allPhones=_allPhones - In the implementation block
@property (nonatomic,readonly) NSSet * unformattedAllPhones;                         //@synthesize unformattedAllPhones=_unformattedAllPhones - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneNumberString;                    //@synthesize phoneNumberString=_phoneNumberString - In the implementation block
@property (nonatomic,copy,readonly) NSString * emailAddressString;                   //@synthesize emailAddressString=_emailAddressString - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedName;                        //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,readonly) CNContact * contact;                                  //@synthesize contact=_contact - In the implementation block
+(id)new;
+(id)_contactForAddress:(id)arg1 recipientKind:(long long)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedName;
-(CNContact *)contact;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSSet *)allPhones;
-(NSSet *)allEmails;
-(id)initWithAddress:(id)arg1 nameComponents:(id)arg2 recipientKind:(long long)arg3 ;
-(id)initWithContact:(id)arg1 address:(id)arg2 nameComponents:(id)arg3 recipientKind:(long long)arg4 ;
-(NSSet *)unformattedAllPhones;
-(NSString *)phoneNumberString;
-(NSString *)emailAddressString;
-(PXRecipientTransport *)suggestedTransport;
-(void)setSuggestedTransport:(PXRecipientTransport *)arg1 ;
@end

