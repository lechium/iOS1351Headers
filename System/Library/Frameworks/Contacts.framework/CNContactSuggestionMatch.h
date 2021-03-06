/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:43 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SGContact, SGContactMatch, NSString;

@interface CNContactSuggestionMatch : NSObject {

	SGContact* _contact;
	SGContactMatch* _contactMatch;
	NSString* _mainStoreLinkedIdentifier;

}

@property (nonatomic,retain) SGContactMatch * contactMatch;                     //@synthesize contactMatch=_contactMatch - In the implementation block
@property (nonatomic,retain) SGContact * contact;                               //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) NSString * mainStoreLinkedIdentifier;              //@synthesize mainStoreLinkedIdentifier=_mainStoreLinkedIdentifier - In the implementation block
+(id)suggestionFromContactMatch:(id)arg1 ;
+(void)fetchLinkedIdentifiersForContactSuggestionMatches:(id)arg1 fromSuggestionService:(id)arg2 ;
-(SGContact *)contact;
-(void)setContact:(SGContact *)arg1 ;
-(void)setContactMatch:(SGContactMatch *)arg1 ;
-(void)setMainStoreLinkedIdentifier:(NSString *)arg1 ;
-(SGContactMatch *)contactMatch;
-(NSString *)mainStoreLinkedIdentifier;
@end

