/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/LSOpenResourceOperationDelegate.h>
#import <libobjc.A.dylib/BRCForegroundClient.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@protocol BRCUserNotifier, OS_dispatch_queue;
@class BRCAccountSession, NSArray, NSURL, CKRecordID, CKShareMetadata, BRCItemID, NSString, BRCClientZone, BRCAppLibrary, BRCXPCClient, NSObject;

@interface BRCSharingAcceptFlowOperation : _BRCOperation <LSOpenResourceOperationDelegate, BRCForegroundClient, BRCOperationSubclass> {

	id<BRCUserNotifier> _userNotification;
	BRCAccountSession* _session;
	NSArray* _acceptationFlow;
	unsigned long long _stepIndex;
	NSURL* _shareURL;
	CKRecordID* _shareID;
	CKShareMetadata* _shareMetadata;
	BRCItemID* _linkItemID;
	BRCItemID* _rootItemID;
	NSString* _unsaltedBookmarkData;
	BRCClientZone* _clientZone;
	BRCAppLibrary* _appLibrary;
	BOOL _needsZoneAndAppLibraryActivation;
	NSURL* _liveFileURL;
	NSString* _rootFilename;
	NSString* _linkFilename;
	BRCXPCClient* _xpcClient;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier; 
+(void)_openiCloudSettings;
+(void)_openShareURLInWebBrowser:(id)arg1 withReason:(id)arg2 ;
+(id)_runningShareIDs;
+(Class)userNotificationClass;
+(void)_openAppStoreForShareURL:(id)arg1 ;
-(NSString *)identifier;
-(void)main;
-(void)openResourceOperation:(id)arg1 didFailWithError:(id)arg2 ;
-(void)openResourceOperationDidComplete:(id)arg1 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(BOOL)_isOwner;
-(void)_isAppInstalled;
-(void)_performNextStep;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)createActivity;
-(id)subclassableDescriptionWithContext:(id)arg1 ;
-(id)_stepNameAtIndex:(unsigned long long)arg1 withPrefix:(id)arg2 ;
-(BOOL)_isFolderShare;
-(BOOL)_isiWorkShare;
-(void)_activateSharedZoneIfNeeded;
-(void)_isFolderSharingSupported;
-(void)_isUserSignedInToiCloudDrive;
-(void)_showSharingJoinDialog;
-(void)_parseShareMetadata;
-(void)_waitForSharedItemToSyncDownOnOwner;
-(void)_waitForSharedItemToBeOnDiskOnOwner;
-(void)_acceptShareURL;
-(void)_waitForSharedItemToSyncDownOnRecipient;
-(void)_waitForSharedItemToBeOnDiskOnRecipient;
-(void)_locateSharedItemOnDisk;
-(void)_openSharedItemIfStillNeeded;
-(void)_endAcceptationFlow;
-(void)_isAccountRestricted;
-(void)_openiWorkAppPreemptively;
-(void)_createSideFaultOnDisk;
-(void)_checkIfShouldWaitUntilDownloadCompletion;
-(void)_openSharedSideFaultFile;
-(void)_prepareToDownloadSharedDocument;
-(void)_performNextStepInQueue;
-(void)_jumpToSelectorInQueue:(SEL)arg1 ;
-(BOOL)_isLinkInsideFolderShare;
-(void)_showGenericErrorAndFinish:(id)arg1 ;
-(BOOL)_isOwnerOrShareAlreadyAccepted;
-(BOOL)_isDocumentLinkInsideFolderShare;
-(void)_captureOpenInfoFromDocument:(id)arg1 ;
-(void)_jumpToSelector:(SEL)arg1 ;
-(void)_openSharedSideFaultFileWithAppID:(id)arg1 ;
-(void)_openDocumentInDocumentsAppIfInstalled:(id)arg1 ;
-(id)initWithShareMetadata:(id)arg1 client:(id)arg2 session:(id)arg3 ;
-(void)moveDialogToFront;
-(BOOL)_isDirectoryLinkInsideFolderShare;
@end

