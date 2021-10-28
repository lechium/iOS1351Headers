/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:43 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/CNChangeHistoryEvent.h>

@class CNGroup, NSString;

@interface CNChangeHistoryAddGroupEvent : CNChangeHistoryEvent {

	CNGroup* _group;
	NSString* _containerIdentifier;

}

@property (nonatomic,readonly) CNGroup * group;                             //@synthesize group=_group - In the implementation block
@property (nonatomic,readonly) NSString * containerIdentifier;              //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)containerIdentifier;
-(CNGroup *)group;
-(void)acceptEventVisitor:(id)arg1 ;
-(id)initWithGroup:(id)arg1 containerIdentifier:(id)arg2 ;
@end
