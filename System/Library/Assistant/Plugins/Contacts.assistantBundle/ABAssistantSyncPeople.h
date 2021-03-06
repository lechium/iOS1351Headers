/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:32 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Assistant/Plugins/Contacts.assistantBundle/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/ABAssistantSyncHandler.h>
#import <libobjc.A.dylib/ABAssistantSyncDelegate.h>

@class CNContactStore, NSString;

@interface ABAssistantSyncPeople : ABAssistantSyncHandler <ABAssistantSyncDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CNContactStore * contactStore; 
-(id)init;
-(id)newSADomainObjectFromCNContact:(id)arg1 ;
-(id)_currentSyncSnapshotProperty;
-(void)setCurrentSyncSnapshotAnchorString:(id)arg1 ;
-(id)copyChangeHistoryAfterSyncAnchor:(id)arg1 ;
-(id)expectedSyncKeyPrefix;
-(id)fullSyncSnapshotProperty;
-(BOOL)hasContactsForFullSync;
-(id)contactsForFullSync;
-(id)getLastClearedSyncAnchor;
-(BOOL)verifyChangeHistory;
-(void)clearChangeHistoryToSyncAnchor:(id)arg1 ;
-(id)newSADomainObjectFromCNContactWithIdentifier:(id)arg1 ;
-(id)newSADomainObjectFromDeletedContactIdentifier:(id)arg1 ;
-(void)resetCurrentSyncSnapshot;
-(id)currentSyncSnapshotAnchorString;
-(long long)currentSyncSnapshotCount;
@end

