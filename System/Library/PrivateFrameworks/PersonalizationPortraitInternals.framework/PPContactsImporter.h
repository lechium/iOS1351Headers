/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PPContactsImporter : NSObject
+(id)defaultInstance;
-(id)init;
-(void)_registerForNotifications;
-(void)importContactsDataWithShouldContinueBlock:(/*^block*/id)arg1 ;
-(BOOL)importScoredContact:(id)arg1 contactsIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)_entitiesForScoredContact:(id)arg1 ;
-(void)_stashImportedContactsIdentifiers:(id)arg1 ;
-(void)_removeStashedImportedContacts;
-(id)_loadContactIdentifiersAlreadyImportedInPastDay;
@end

