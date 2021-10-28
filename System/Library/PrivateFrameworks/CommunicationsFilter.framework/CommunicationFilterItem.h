/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:51 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CommunicationsFilter
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CommunicationsFilter/CommunicationsFilter-Structs.h>
@class NSString;

@interface CommunicationFilterItem : NSObject {

	CFPhoneNumberRef _phoneNumber;
	NSString* _emailAddress;

}

@property (nonatomic,readonly) CFPhoneNumberRef phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,readonly) NSString * emailAddress;                   //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,readonly) NSString * unformattedID; 
-(void)dealloc;
-(id)description;
-(id)dictionaryRepresentation;
-(CFPhoneNumberRef)phoneNumber;
-(NSString *)emailAddress;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithEmailAddress:(id)arg1 ;
-(id)initWithPhoneNumber:(CFPhoneNumberRef)arg1 ;
-(NSString *)unformattedID;
-(BOOL)isPhoneNumber;
-(id)_dictionaryRepresentationWithRedaction;
-(BOOL)_acceptItemType:(id)arg1 ;
-(BOOL)_acceptVersion:(id)arg1 ;
-(BOOL)matchesFilterItem:(id)arg1 ;
@end
