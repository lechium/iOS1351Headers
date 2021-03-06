/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNLSApplicationWorkspace, CNUIInteractionDonor;
@class CNContactStore;

@interface CNUIUserActivityManager : NSObject {

	CNContactStore* _contactStore;
	id<CNLSApplicationWorkspace> _applicationWorkspace;
	id<CNUIInteractionDonor> _interactionDonor;

}

@property (nonatomic,readonly) CNContactStore * contactStore;                                  //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) id<CNLSApplicationWorkspace> applicationWorkspace;              //@synthesize applicationWorkspace=_applicationWorkspace - In the implementation block
@property (nonatomic,readonly) id<CNUIInteractionDonor> interactionDonor;                      //@synthesize interactionDonor=_interactionDonor - In the implementation block
+(id)log;
+(id)descriptorForRequiredKeys;
-(CNContactStore *)contactStore;
-(id)initWithContactStore:(id)arg1 ;
-(id)initWithApplicationWorkspace:(id)arg1 ;
-(void)updateUserActivityState:(id)arg1 withContentsOfContact:(id)arg2 ;
-(id)makeActivityAdvertisingViewingOfContact:(id)arg1 ;
-(void)publishRequestToCreateContact:(id)arg1 ;
-(id)initWithContactStore:(id)arg1 applicationWorkspace:(id)arg2 ;
-(void)publishRequestToEditContact:(id)arg1 ;
-(id<CNLSApplicationWorkspace>)applicationWorkspace;
-(id)initWithContactStore:(id)arg1 applicationWorkspace:(id)arg2 interactionDonor:(id)arg3 ;
-(id<CNUIInteractionDonor>)interactionDonor;
-(id)makeActivityAdvertisingViewingList;
@end

