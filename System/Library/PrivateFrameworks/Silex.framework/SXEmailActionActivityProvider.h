/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SXActionActivityProvider.h>

@protocol SXMailPresenter, SXContactsPresenter;
@class NSString;

@interface SXEmailActionActivityProvider : NSObject <SXActionActivityProvider> {

	id<SXMailPresenter> _mailPresenter;
	id<SXContactsPresenter> _contactsPresenter;

}

@property (nonatomic,readonly) id<SXMailPresenter> mailPresenter;                      //@synthesize mailPresenter=_mailPresenter - In the implementation block
@property (nonatomic,readonly) id<SXContactsPresenter> contactsPresenter;              //@synthesize contactsPresenter=_contactsPresenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)activityGroupForAction:(id)arg1 ;
-(id<SXMailPresenter>)mailPresenter;
-(void)composeMailTo:(id)arg1 subject:(id)arg2 ;
-(void)addToContacts:(id)arg1 ;
-(id<SXContactsPresenter>)contactsPresenter;
-(id)initWithMailPresenter:(id)arg1 contactsPresenter:(id)arg2 ;
@end
