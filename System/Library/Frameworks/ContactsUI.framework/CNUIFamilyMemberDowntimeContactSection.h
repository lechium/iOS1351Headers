/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:01 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSString;

@interface CNUIFamilyMemberDowntimeContactSection : NSObject {

	NSArray* _contactItems;
	NSString* _title;

}

@property (nonatomic,readonly) NSArray * contactItems;              //@synthesize contactItems=_contactItems - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;               //@synthesize title=_title - In the implementation block
-(NSString *)title;
-(id)initWithContactItems:(id)arg1 title:(id)arg2 ;
-(NSArray *)contactItems;
@end
