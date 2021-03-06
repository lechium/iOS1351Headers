/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVItem.h>

@class ICSDateValue, NSString, NSURL;

@interface CalDAVUpdateOwnerItem : CoreDAVItem {

	ICSDateValue* _dtstamp;
	NSString* _displayName;
	NSString* _firstName;
	NSString* _lastName;
	NSURL* _address;
	NSString* _emailAddress;
	NSString* _phoneNumber;

}

@property (nonatomic,retain) ICSDateValue * dtstamp;               //@synthesize dtstamp=_dtstamp - In the implementation block
@property (nonatomic,retain) NSString * displayName;               //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * firstName;                 //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                  //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSURL * address;                      //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) NSString * emailAddress;              //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;               //@synthesize phoneNumber=_phoneNumber - In the implementation block
-(id)description;
-(NSURL *)address;
-(NSString *)phoneNumber;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(void)setEmailAddress:(NSString *)arg1 ;
-(void)setAddress:(NSURL *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(ICSDateValue *)dtstamp;
-(void)setDtstamp:(ICSDateValue *)arg1 ;
-(id)copyParseRules;
-(void)setFirstNameItem:(id)arg1 ;
-(void)setLastNameItem:(id)arg1 ;
-(void)setDtstampItem:(id)arg1 ;
-(void)setAddressItem:(id)arg1 ;
-(void)setEmailAddressItem:(id)arg1 ;
-(void)setPhoneNumberItem:(id)arg1 ;
-(void)setDisplayNameItem:(id)arg1 ;
@end

