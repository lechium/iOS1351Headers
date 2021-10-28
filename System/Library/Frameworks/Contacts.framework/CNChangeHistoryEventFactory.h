/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:44 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CNChangeHistoryEventFactory : NSObject
-(id)addContactEventWithContact:(id)arg1 containerIdentifier:(id)arg2 ;
-(id)addGroupEventWithGroup:(id)arg1 containerIdentifier:(id)arg2 ;
-(id)dropEverythingEvent;
-(id)updateContactEventWithContact:(id)arg1 ;
-(id)deleteContactEventWithContactIdentifier:(id)arg1 ;
-(id)updateGroupEventWithGroup:(id)arg1 ;
-(id)deleteGroupEventWithGroupIdentifier:(id)arg1 ;
-(id)addMemberToGroupEventWithMember:(id)arg1 group:(id)arg2 ;
-(id)removeMemberFromGroupEventWithMember:(id)arg1 group:(id)arg2 ;
-(id)addSubgroupToGroupEventWithSubgroup:(id)arg1 group:(id)arg2 ;
-(id)removeSubgroupFromGroupEventWithSubgroup:(id)arg1 group:(id)arg2 ;
-(id)linkContactsEventWithFromContact:(id)arg1 toContact:(id)arg2 ;
-(id)unlinkContactEventWithContact:(id)arg1 ;
-(id)preferredContactForNameEventWithPreferredContact:(id)arg1 unifiedContact:(id)arg2 ;
-(id)preferredContactForImageEventWithPreferredContact:(id)arg1 unifiedContact:(id)arg2 ;
-(id)differentMeCardEventWithContactIdentifier:(id)arg1 ;
@end
