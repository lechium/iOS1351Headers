/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariShared/WBSHistory.h>

@interface WBUHistory : WBSHistory {

	BOOL _shouldScheduleMaintenance;

}

@property (assign,nonatomic) BOOL shouldScheduleMaintenance;              //@synthesize shouldScheduleMaintenance=_shouldScheduleMaintenance - In the implementation block
-(id)init;
-(void)_removeAllVisitedLinks;
-(void)setShouldScheduleMaintenance:(BOOL)arg1 ;
-(Class)_historyItemClass;
-(id)_createHistoryStore;
-(void)_addVisitedLinksForItemsIfNeeded:(id)arg1 ;
-(BOOL)historyStoreShouldCheckDatabaseIntegrity:(id)arg1 ;
-(void)historyStoreDidFailDatabaseIntegrityCheck:(id)arg1 ;
-(BOOL)historyStoreShouldScheduleMaintenance:(id)arg1 ;
-(BOOL)shouldScheduleMaintenance;
@end

