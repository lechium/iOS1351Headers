/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:03 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/CNContactAction.h>

@class CNContainer, CNContactStore;

@interface CNContactEnableGuardianRestrictionsAction : CNContactAction {

	CNContainer* _container;
	CNContactStore* _contactStore;

}

@property (nonatomic,readonly) CNContainer * container;                    //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
-(CNContainer *)container;
-(CNContactStore *)contactStore;
-(id)initWithContact:(id)arg1 inContainer:(id)arg2 contactStore:(id)arg3 ;
@end

