/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:36 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol STPersistenceControllerProtocol;
@class NSPersistentHistoryToken;

@interface STUnique : NSObject {

	NSPersistentHistoryToken* _migratedToken;
	id<STPersistenceControllerProtocol> _persistenceController;

}

@property (nonatomic,retain) id<STPersistenceControllerProtocol> persistenceController;              //@synthesize persistenceController=_persistenceController - In the implementation block
+(id)localToCloudMapping;
+(id)cloudToLocalMapping;
+(id)mirroredEntityNames;
-(id<STPersistenceControllerProtocol>)persistenceController;
-(id)historyTokenForAuthor:(id)arg1 fromStore:(id)arg2 ;
-(BOOL)addHistoryToken:(id)arg1 forAuthor:(id)arg2 toMetadataForStore:(id)arg3 error:(id*)arg4 ;
-(void)newResolveConflictsBetweenLocalDeltas:(id)arg1 cloudDeltas:(id)arg2 ;
-(id)initWithPersistenceController:(id)arg1 ;
-(BOOL)areLocalChangesInterestingWithError:(id*)arg1 ;
-(BOOL)migrateWithError:(id*)arg1 ;
-(void)resolveConflictsBetweenLocalDeltas:(id)arg1 cloudDeltas:(id)arg2 ;
-(void)setPersistenceController:(id<STPersistenceControllerProtocol>)arg1 ;
@end
