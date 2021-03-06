/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:20 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSString, NSDate, PFUbiquityLocation, NSLock, NSMutableDictionary, NSObject;

@interface _PFUbiquityRecordsExporter : NSObject {

	NSString* _localPeerID;
	NSDate* _lastTransactionDate;
	PFUbiquityLocation* _ubiquityRootLocation;
	PFUbiquityLocation* _localRootLocation;
	NSString* _storeName;
	NSLock* _transactionLock;
	NSMutableDictionary* _pendingTransactionsToStoreNameAndTransactionNumber;
	BOOL _pendingTempLogMove;
	BOOL _allowTempLogStorage;
	BOOL _useLocalStorage;
	NSObject*<OS_dispatch_queue> _processingQueue;
	BOOL _throwOptimisticLockingException;

}

@property (nonatomic,readonly) NSString * localPeerID;                                //@synthesize localPeerID=_localPeerID - In the implementation block
@property (nonatomic,retain) PFUbiquityLocation * ubiquityRootLocation;               //@synthesize ubiquityRootLocation=_ubiquityRootLocation - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * localRootLocation;                //@synthesize localRootLocation=_localRootLocation - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * currentRootLocation; 
@property (retain) NSDate * lastTransactionDate;                                      //@synthesize lastTransactionDate=_lastTransactionDate - In the implementation block
@property (nonatomic,readonly) BOOL pendingTempLogMove;                               //@synthesize pendingTempLogMove=_pendingTempLogMove - In the implementation block
@property (assign,nonatomic) BOOL allowTempLogStorage;                                //@synthesize allowTempLogStorage=_allowTempLogStorage - In the implementation block
@property (assign,nonatomic) BOOL useLocalStorage;                                    //@synthesize useLocalStorage=_useLocalStorage - In the implementation block
@property (assign,nonatomic) BOOL throwOptimisticLockingException;                    //@synthesize throwOptimisticLockingException=_throwOptimisticLockingException - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)localPeerID;
-(PFUbiquityLocation *)ubiquityRootLocation;
-(void)setLastTransactionDate:(NSDate *)arg1 ;
-(NSDate *)lastTransactionDate;
-(void)managedObjectContextDidSave:(id)arg1 ;
-(void)cleanUpFromRolledbackPendingTransaction:(id)arg1 withNotification:(id)arg2 ;
-(BOOL)shouldRespondToSaveNotification:(id)arg1 ;
-(void)setUseLocalStorage:(BOOL)arg1 ;
-(id)createDictionaryForObjectsInSaveNotification:(id)arg1 forTransactionOfType:(int)arg2 withExportContext:(id)arg3 andSaveSnapshot:(id)arg4 ;
-(id)createArrayForExternalDataReferencesInSaveNotification:(id)arg1 withExportContext:(id)arg2 andSaveSnapshot:(id)arg3 ;
-(void)scheduleTempLogMove;
-(void)moveLogsFromTempDirectory;
-(id)initWithLocalPeerID:(id)arg1 forStoreName:(id)arg2 ubiquityRootLocation:(id)arg3 localRootLocation:(id)arg4 andProcessingQueue:(id)arg5 ;
-(PFUbiquityLocation *)currentRootLocation;
-(void)beginWatchingForChangesFromStore:(id)arg1 ;
-(void)stopWatchingForChanges;
-(void)setUbiquityRootLocation:(PFUbiquityLocation *)arg1 ;
-(BOOL)pendingTempLogMove;
-(BOOL)allowTempLogStorage;
-(void)setAllowTempLogStorage:(BOOL)arg1 ;
-(PFUbiquityLocation *)localRootLocation;
-(BOOL)useLocalStorage;
-(BOOL)throwOptimisticLockingException;
-(void)setThrowOptimisticLockingException:(BOOL)arg1 ;
@end

