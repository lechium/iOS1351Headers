/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:01 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface CNUIFamilyMemberContactsEditingStrategy : NSObject {

	NSArray* _prohibitedPropertyKeys;
	/*^block*/id _sensitiveDataContactFilter;

}

@property (nonatomic,readonly) NSArray * prohibitedPropertyKeys;              //@synthesize prohibitedPropertyKeys=_prohibitedPropertyKeys - In the implementation block
@property (nonatomic,readonly) id sensitiveDataContactFilter;                 //@synthesize sensitiveDataContactFilter=_sensitiveDataContactFilter - In the implementation block
+(id)managedContactsStrategy;
+(id)whitelistedContactsStrategy;
-(id)initWithProhibitedPropertyKeys:(id)arg1 sensitiveDataContactFilter:(/*^block*/id)arg2 ;
-(NSArray *)prohibitedPropertyKeys;
-(id)sensitiveDataContactFilter;
@end

