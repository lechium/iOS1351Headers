/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:15 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DocumentManagerCore/DocumentManagerCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class DOCConcreteLocation, NSArray, NSString;

@interface DOCConfiguration : NSObject <NSCopying, NSSecureCoding> {

	BOOL _shouldIgnoreInteractionMode;
	BOOL _inProcess;
	BOOL _forPickingDocuments;
	BOOL _forPickingFolders;
	BOOL _supportsRemovableFileProviders;
	BOOL _forPickingDownloadsFolder;
	BOOL _isContentManaged;
	BOOL _neverCreateBookmarkForOpenInPlace;
	BOOL _pickingItemsShouldBumpLastOpenDate;
	BOOL _suppressBlackCallout;
	BOOL _preferLastUsedDate;
	BOOL _shouldOpenInApp;
	BOOL _restoreLastVisitedLocation;
	BOOL _saveLastVisitedLocation;
	BOOL _collectionSupportsDragAndDrop;
	BOOL _skipDownload;
	BOOL _presentingMakesCollectionFirstResponder;
	BOOL _showCollectionControls;
	BOOL _supportsColumnView;
	BOOL _shouldAdjustContentInset;
	BOOL _useSharedQuickLook;
	BOOL _useExpandedSourceList;
	DOCConcreteLocation* _defaultLocation;
	unsigned long long _interactionMode;
	NSArray* _excludedDocumentTypes;
	NSArray* _recentDocumentsTypes;
	NSArray* _urls;
	NSString* _hostIdentifier;
	NSString* _hostBundleTitle;
	NSArray* _hiddenSourcesIdentifiers;
	unsigned long long _maximumNumberOfItemsToFetch;
	unsigned long long _maximumNumberOfRows;
	unsigned long long _browserViewContext;
	NSString* _roleIdentifier;
	NSString* _stateIdentifier;
	NSString* _sceneIdentifier;
	NSArray* _forbiddenActionIdentifiers;
	double _thumbnailFetchingTimeOut;
	NSArray* _documentTypes;

}

@property (nonatomic,copy) NSArray * documentTypes;                             //@synthesize documentTypes=_documentTypes - In the implementation block
@property (retain) NSArray * urls;                                              //@synthesize urls=_urls - In the implementation block
@property (retain) DOCConcreteLocation * defaultLocation;                       //@synthesize defaultLocation=_defaultLocation - In the implementation block
@property (assign) unsigned long long interactionMode;                          //@synthesize interactionMode=_interactionMode - In the implementation block
@property (assign) BOOL shouldIgnoreInteractionMode;                            //@synthesize shouldIgnoreInteractionMode=_shouldIgnoreInteractionMode - In the implementation block
@property (assign) BOOL inProcess;                                              //@synthesize inProcess=_inProcess - In the implementation block
@property (nonatomic,copy) NSArray * excludedDocumentTypes;                     //@synthesize excludedDocumentTypes=_excludedDocumentTypes - In the implementation block
@property (nonatomic,copy) NSArray * recentDocumentsTypes;                      //@synthesize recentDocumentsTypes=_recentDocumentsTypes - In the implementation block
@property (nonatomic,copy) NSString * hostIdentifier;                           //@synthesize hostIdentifier=_hostIdentifier - In the implementation block
@property (nonatomic,copy) NSString * hostBundleTitle;                          //@synthesize hostBundleTitle=_hostBundleTitle - In the implementation block
@property (assign) BOOL forPickingDocuments;                                    //@synthesize forPickingDocuments=_forPickingDocuments - In the implementation block
@property (assign) BOOL forPickingFolders;                                      //@synthesize forPickingFolders=_forPickingFolders - In the implementation block
@property (assign) BOOL supportsRemovableFileProviders;                         //@synthesize supportsRemovableFileProviders=_supportsRemovableFileProviders - In the implementation block
@property (assign) BOOL forPickingDownloadsFolder;                              //@synthesize forPickingDownloadsFolder=_forPickingDownloadsFolder - In the implementation block
@property (assign,nonatomic) BOOL isContentManaged;                             //@synthesize isContentManaged=_isContentManaged - In the implementation block
@property (assign) BOOL neverCreateBookmarkForOpenInPlace;                      //@synthesize neverCreateBookmarkForOpenInPlace=_neverCreateBookmarkForOpenInPlace - In the implementation block
@property (assign) BOOL pickingItemsShouldBumpLastOpenDate;                     //@synthesize pickingItemsShouldBumpLastOpenDate=_pickingItemsShouldBumpLastOpenDate - In the implementation block
@property (assign) BOOL suppressBlackCallout;                                   //@synthesize suppressBlackCallout=_suppressBlackCallout - In the implementation block
@property (assign) BOOL preferLastUsedDate;                                     //@synthesize preferLastUsedDate=_preferLastUsedDate - In the implementation block
@property (readonly) BOOL isFilesApp; 
@property (readonly) BOOL isPopover; 
@property (readonly) BOOL isWidget; 
@property (readonly) BOOL isPopoverOrWidget; 
@property (assign) BOOL shouldOpenInApp;                                        //@synthesize shouldOpenInApp=_shouldOpenInApp - In the implementation block
@property (nonatomic,copy) NSArray * hiddenSourcesIdentifiers;                  //@synthesize hiddenSourcesIdentifiers=_hiddenSourcesIdentifiers - In the implementation block
@property (assign) BOOL restoreLastVisitedLocation;                             //@synthesize restoreLastVisitedLocation=_restoreLastVisitedLocation - In the implementation block
@property (assign) BOOL saveLastVisitedLocation;                                //@synthesize saveLastVisitedLocation=_saveLastVisitedLocation - In the implementation block
@property (assign) BOOL collectionSupportsDragAndDrop;                          //@synthesize collectionSupportsDragAndDrop=_collectionSupportsDragAndDrop - In the implementation block
@property (assign) unsigned long long maximumNumberOfItemsToFetch;              //@synthesize maximumNumberOfItemsToFetch=_maximumNumberOfItemsToFetch - In the implementation block
@property (assign) unsigned long long maximumNumberOfRows;                      //@synthesize maximumNumberOfRows=_maximumNumberOfRows - In the implementation block
@property (assign) BOOL skipDownload;                                           //@synthesize skipDownload=_skipDownload - In the implementation block
@property (assign) BOOL presentingMakesCollectionFirstResponder;                //@synthesize presentingMakesCollectionFirstResponder=_presentingMakesCollectionFirstResponder - In the implementation block
@property (assign) BOOL showCollectionControls;                                 //@synthesize showCollectionControls=_showCollectionControls - In the implementation block
@property (assign) BOOL supportsColumnView;                                     //@synthesize supportsColumnView=_supportsColumnView - In the implementation block
@property (assign) BOOL shouldAdjustContentInset;                               //@synthesize shouldAdjustContentInset=_shouldAdjustContentInset - In the implementation block
@property (assign) BOOL useSharedQuickLook;                                     //@synthesize useSharedQuickLook=_useSharedQuickLook - In the implementation block
@property (assign) BOOL useExpandedSourceList;                                  //@synthesize useExpandedSourceList=_useExpandedSourceList - In the implementation block
@property (assign) unsigned long long browserViewContext;                       //@synthesize browserViewContext=_browserViewContext - In the implementation block
@property (nonatomic,copy) NSString * roleIdentifier;                           //@synthesize roleIdentifier=_roleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * stateIdentifier;                          //@synthesize stateIdentifier=_stateIdentifier - In the implementation block
@property (nonatomic,copy) NSString * sceneIdentifier;                          //@synthesize sceneIdentifier=_sceneIdentifier - In the implementation block
@property (copy) NSArray * forbiddenActionIdentifiers;                          //@synthesize forbiddenActionIdentifiers=_forbiddenActionIdentifiers - In the implementation block
@property (assign) double thumbnailFetchingTimeOut;                             //@synthesize thumbnailFetchingTimeOut=_thumbnailFetchingTimeOut - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)configurationForFolderPicking;
+(id)configurationForImportingDocumentsWithContentTypes:(id)arg1 mode:(unsigned long long)arg2 ;
+(id)configurationForExportingDocumentsToURLs:(id)arg1 mode:(unsigned long long)arg2 ;
+(id)configurationForOpeningDocumentsOfApplicationWithBundleIdentifier:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isContentManaged;
-(NSString *)hostIdentifier;
-(void)setDocumentTypes:(NSArray *)arg1 ;
-(void)setForPickingDocuments:(BOOL)arg1 ;
-(void)setForPickingDownloadsFolder:(BOOL)arg1 ;
-(BOOL)forPickingDownloadsFolder;
-(NSArray *)documentTypes;
-(void)setIsContentManaged:(BOOL)arg1 ;
-(NSString *)sceneIdentifier;
-(void)setSceneIdentifier:(NSString *)arg1 ;
-(BOOL)isEqualToConfiguration:(id)arg1 ;
-(NSArray *)urls;
-(void)setUrls:(NSArray *)arg1 ;
-(void)setSupportsRemovableFileProviders:(BOOL)arg1 ;
-(void)setRecentDocumentsTypes:(NSArray *)arg1 ;
-(BOOL)forPickingDocuments;
-(BOOL)shouldIgnoreInteractionMode;
-(unsigned long long)interactionMode;
-(BOOL)forPickingFolders;
-(BOOL)inProcess;
-(unsigned long long)interactionModeForPreparing;
-(NSArray *)recentDocumentsTypes;
-(BOOL)isFilesApp;
-(void)setHostIdentifier:(NSString *)arg1 ;
-(NSString *)stateIdentifier;
-(DOCConcreteLocation *)defaultLocation;
-(NSString *)hostBundleTitle;
-(NSString *)roleIdentifier;
-(unsigned long long)maximumNumberOfRows;
-(void)setInteractionMode:(unsigned long long)arg1 ;
-(void)setMaximumNumberOfRows:(unsigned long long)arg1 ;
-(BOOL)shouldOpenInApp;
-(unsigned long long)maximumNumberOfItemsToFetch;
-(NSArray *)excludedDocumentTypes;
-(void)setForPickingFolders:(BOOL)arg1 ;
-(unsigned long long)browserViewContext;
-(BOOL)isPopover;
-(BOOL)isWidget;
-(BOOL)isPopoverOrWidget;
-(void)setDefaultLocation:(DOCConcreteLocation *)arg1 ;
-(void)setShouldIgnoreInteractionMode:(BOOL)arg1 ;
-(void)setInProcess:(BOOL)arg1 ;
-(void)setExcludedDocumentTypes:(NSArray *)arg1 ;
-(void)setHostBundleTitle:(NSString *)arg1 ;
-(BOOL)supportsRemovableFileProviders;
-(BOOL)neverCreateBookmarkForOpenInPlace;
-(void)setNeverCreateBookmarkForOpenInPlace:(BOOL)arg1 ;
-(BOOL)pickingItemsShouldBumpLastOpenDate;
-(void)setPickingItemsShouldBumpLastOpenDate:(BOOL)arg1 ;
-(BOOL)suppressBlackCallout;
-(void)setSuppressBlackCallout:(BOOL)arg1 ;
-(BOOL)preferLastUsedDate;
-(void)setPreferLastUsedDate:(BOOL)arg1 ;
-(void)setShouldOpenInApp:(BOOL)arg1 ;
-(NSArray *)hiddenSourcesIdentifiers;
-(void)setHiddenSourcesIdentifiers:(NSArray *)arg1 ;
-(BOOL)restoreLastVisitedLocation;
-(void)setRestoreLastVisitedLocation:(BOOL)arg1 ;
-(BOOL)saveLastVisitedLocation;
-(void)setSaveLastVisitedLocation:(BOOL)arg1 ;
-(BOOL)collectionSupportsDragAndDrop;
-(void)setCollectionSupportsDragAndDrop:(BOOL)arg1 ;
-(void)setMaximumNumberOfItemsToFetch:(unsigned long long)arg1 ;
-(BOOL)skipDownload;
-(void)setSkipDownload:(BOOL)arg1 ;
-(BOOL)presentingMakesCollectionFirstResponder;
-(void)setPresentingMakesCollectionFirstResponder:(BOOL)arg1 ;
-(BOOL)showCollectionControls;
-(void)setShowCollectionControls:(BOOL)arg1 ;
-(BOOL)supportsColumnView;
-(void)setSupportsColumnView:(BOOL)arg1 ;
-(BOOL)shouldAdjustContentInset;
-(void)setShouldAdjustContentInset:(BOOL)arg1 ;
-(BOOL)useSharedQuickLook;
-(void)setUseSharedQuickLook:(BOOL)arg1 ;
-(BOOL)useExpandedSourceList;
-(void)setUseExpandedSourceList:(BOOL)arg1 ;
-(void)setBrowserViewContext:(unsigned long long)arg1 ;
-(void)setRoleIdentifier:(NSString *)arg1 ;
-(void)setStateIdentifier:(NSString *)arg1 ;
-(NSArray *)forbiddenActionIdentifiers;
-(void)setForbiddenActionIdentifiers:(NSArray *)arg1 ;
-(double)thumbnailFetchingTimeOut;
-(void)setThumbnailFetchingTimeOut:(double)arg1 ;
@end

