/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:32 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSURL, NSNumber, NSString, NSSet, NSPersonNameComponents;


@protocol NSFileProviderItem_Private <NSFileProviderItem>
@property (copy,readonly) NSURL * fileURL; 
@property (copy,readonly) NSNumber * hasUnresolvedConflicts; 
@property (copy,readonly) NSString * containerDisplayName; 
@property (getter=isDownloadRequested,copy,readonly) NSNumber * downloadRequested; 
@property (getter=isHidden,readonly) BOOL hidden; 
@property (copy,readonly) NSString * providerIdentifier; 
@property (copy,readonly) NSString * sharingPermissions; 
@property (copy,readonly) NSString * fp_spotlightDomainIdentifier; 
@property (copy,readonly) NSString * fp_domainIdentifier; 
@property (copy,readonly) NSString * fp_parentDomainIdentifier; 
@property (getter=fp_isUbiquitous,readonly) BOOL fp_ubiquitous; 
@property (readonly) BOOL fp_isContainer; 
@property (readonly) BOOL fp_isContainerPristine; 
@property (copy,readonly) NSString * fp_cloudContainerIdentifier; 
@property (copy,readonly) NSSet * fp_cloudContainerClientBundleIdentifiers; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (getter=isTopLevelSharedItem,nonatomic,readonly) BOOL topLevelSharedItem; 
@property (copy,readonly) NSString * fileSystemFilename; 
@property (getter=fp_isLastModifiedByCurrentUser,nonatomic,readonly) BOOL fp_lastModifiedByCurrentUser; 
@property (getter=fp_isAddedByCurrentUser,nonatomic,readonly) BOOL fp_addedByCurrentUser; 
@property (nonatomic,readonly) NSPersonNameComponents * fp_addedByNameComponents; 
@property (nonatomic,readonly) NSString * preformattedOwnerName; 
@property (nonatomic,readonly) NSString * preformattedMostRecentEditorName; 
@optional
-(NSString *)providerIdentifier;
-(NSString *)displayName;
-(NSURL *)fileURL;
-(BOOL)isHidden;
-(id)isDownloadRequested;
-(NSString *)containerDisplayName;
-(BOOL)isTopLevelSharedItem;
-(NSNumber *)hasUnresolvedConflicts;
-(NSString *)sharingPermissions;
-(NSString *)fp_spotlightDomainIdentifier;
-(NSString *)fp_domainIdentifier;
-(NSString *)fp_parentDomainIdentifier;
-(BOOL)fp_isUbiquitous;
-(BOOL)fp_isContainer;
-(BOOL)fp_isContainerPristine;
-(NSString *)fp_cloudContainerIdentifier;
-(NSSet *)fp_cloudContainerClientBundleIdentifiers;
-(NSString *)fileSystemFilename;
-(BOOL)fp_isLastModifiedByCurrentUser;
-(BOOL)fp_isAddedByCurrentUser;
-(NSPersonNameComponents *)fp_addedByNameComponents;
-(NSString *)preformattedOwnerName;
-(NSString *)preformattedMostRecentEditorName;

@end

