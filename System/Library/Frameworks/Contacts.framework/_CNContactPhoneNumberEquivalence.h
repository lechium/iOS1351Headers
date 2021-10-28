/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:44 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/_CNContactHandleStringEquivalenceStrategy.h>

@class NSString;

@interface _CNContactPhoneNumberEquivalence : NSObject <_CNContactHandleStringEquivalenceStrategy> {

	NSString* _rawString;
	SCD_Struct_CN11* _decomposedRepresentation;
	char* _decomposedNumberDigits;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)indexKeyForString:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEquivalentToString:(id)arg1 strict:(BOOL*)arg2 ;
-(id)initWithPhoneNumberString:(id)arg1 ;
-(BOOL)isRawStringEquivalent:(id)arg1 ;
-(BOOL)preparePhoneNumberRepresentation;
-(BOOL)isPhoneNumberEquivalent:(id)arg1 strict:(BOOL*)arg2 ;
@end
