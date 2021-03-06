/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Search/SPSearchEntity.h>

@class CNContact, NSString;

@interface SPContactSearchEntity : SPSearchEntity {

	CNContact* _contact;
	NSString* _contactIdentifier;

}

@property (retain) NSString * contactIdentifier;              //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)contactStore;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)contact;
-(NSString *)contactIdentifier;
-(id)initWithContactIdentifier:(id)arg1 ;
-(id)queryString;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(BOOL)isPeopleSearch;
-(BOOL)isScopedAppSearch;
-(id)tokenText;
-(void)appendToQuery:(id)arg1 key:(id)arg2 value:(id)arg3 additions:(id)arg4 ;
@end

