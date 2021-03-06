/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:01 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/CNContactAction.h>

@class CNContactRecentsReference, CNUICoreRecentsManager;

@interface CNContactClearRecentsDataAction : CNContactAction {

	CNContactRecentsReference* _recentsData;
	CNUICoreRecentsManager* _coreRecentsManager;

}

@property (nonatomic,readonly) CNContactRecentsReference * recentsData;                  //@synthesize recentsData=_recentsData - In the implementation block
@property (nonatomic,readonly) CNUICoreRecentsManager * coreRecentsManager;              //@synthesize coreRecentsManager=_coreRecentsManager - In the implementation block
-(id)title;
-(BOOL)isDestructive;
-(BOOL)canPerformAction;
-(void)performActionWithSender:(id)arg1 ;
-(id)initWithRecentsData:(id)arg1 coreRecentsManager:(id)arg2 ;
-(CNContactRecentsReference *)recentsData;
-(CNUICoreRecentsManager *)coreRecentsManager;
@end

