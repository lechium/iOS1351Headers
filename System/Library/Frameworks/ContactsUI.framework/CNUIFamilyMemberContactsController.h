/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:03 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>
#import <libobjc.A.dylib/CNContactPickerPrivateDelegate.h>
#import <libobjc.A.dylib/CNFamilyMemberAddContactsOptionsSheetDelegate.h>
#import <libobjc.A.dylib/CNUIFamilyMemberDowntimeContactPickerControllerDelegate.h>
#import <libobjc.A.dylib/CNUICoreFamilyMemberContactsObserver.h>

@protocol CNUIFamilyMemberContactsPresentation, CNUIFamilyMemberContactsControllerDelegate, CNUICoreFamilyMemberContactsDataSource, CNSchedulerProvider;
@class FAFamilyMember, CNContactStore, CNContactPickerViewController, NSString;

@interface CNUIFamilyMemberContactsController : NSObject <CNContactViewControllerDelegate, CNContactPickerPrivateDelegate, CNFamilyMemberAddContactsOptionsSheetDelegate, CNUIFamilyMemberDowntimeContactPickerControllerDelegate, CNUICoreFamilyMemberContactsObserver> {

	id<CNUIFamilyMemberContactsPresentation> _familyMemberContactsPresentation;
	FAFamilyMember* _familyMember;
	id<CNUIFamilyMemberContactsControllerDelegate> _delegate;
	CNContactStore* _familyMemberScopedContactStore;
	id<CNUICoreFamilyMemberContactsDataSource> _dataSource;
	id<CNSchedulerProvider> _schedulerProvider;
	CNContactPickerViewController* _contactPickerViewController;

}

@property (nonatomic,readonly) CNContactStore * familyMemberScopedContactStore;                                        //@synthesize familyMemberScopedContactStore=_familyMemberScopedContactStore - In the implementation block
@property (nonatomic,readonly) id<CNUIFamilyMemberContactsPresentation> familyMemberContactsPresentation;              //@synthesize familyMemberContactsPresentation=_familyMemberContactsPresentation - In the implementation block
@property (nonatomic,readonly) id<CNUICoreFamilyMemberContactsDataSource> dataSource;                                  //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                                              //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (assign,nonatomic,__weak) CNContactPickerViewController * contactPickerViewController;                       //@synthesize contactPickerViewController=_contactPickerViewController - In the implementation block
@property (nonatomic,readonly) FAFamilyMember * familyMember;                                                          //@synthesize familyMember=_familyMember - In the implementation block
@property (nonatomic,readonly) long long countOfFamilyMemberContacts; 
@property (nonatomic,readonly) long long fetchStatus; 
@property (assign,nonatomic,__weak) id<CNUIFamilyMemberContactsControllerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isViewController:(id)arg1 presentedByContactPicker:(id)arg2 ;
-(id)init;
-(id<CNUIFamilyMemberContactsControllerDelegate>)delegate;
-(void)setDelegate:(id<CNUIFamilyMemberContactsControllerDelegate>)arg1 ;
-(id<CNUICoreFamilyMemberContactsDataSource>)dataSource;
-(void)presentViewController:(id)arg1 ;
-(id<CNSchedulerProvider>)schedulerProvider;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(FAFamilyMember *)familyMember;
-(void)pickerDidSelectAddNewContact:(id)arg1 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(void)familyMemberContactItemsDidChange;
-(void)downtimePickerController:(id)arg1 didFinishWithContacts:(id)arg2 ;
-(id)initWithFamilyMember:(id)arg1 familyMemberContactsPresentation:(id)arg2 ;
-(id<CNUIFamilyMemberContactsPresentation>)familyMemberContactsPresentation;
-(long long)fetchStatus;
-(void)performInteraction:(long long)arg1 ;
-(void)performDefaultInteraction;
-(CNContactStore *)familyMemberScopedContactStore;
-(void)addContactsOptionsSheetViewControllerDidSelectAddFromLocalContacts:(id)arg1 ;
-(void)addContactsOptionsSheetViewControllerDidSelectAddNewContact:(id)arg1 ;
-(void)addContactsOptionsSheetViewControllerDidCancel:(id)arg1 ;
-(long long)countOfFamilyMemberContacts;
-(void)performDisplayContactsInteraction;
-(void)performAddFromMainContactsInteraction;
-(void)performAddContactsInteraction;
-(id)anchorViewForAddContactsInteraction;
-(void)dismissPresentedViewController:(id)arg1 ;
-(void)cancelPresentationOfViewController:(id)arg1 ;
-(CNContactPickerViewController *)contactPickerViewController;
-(void)setContactPickerViewController:(CNContactPickerViewController *)arg1 ;
@end

