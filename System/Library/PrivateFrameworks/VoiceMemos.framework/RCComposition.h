/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:06 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/RCDictionaryPListRepresentationCoding.h>

@class NSArray, NSString, NSDate, NSURL, NSObject;

@interface RCComposition : NSObject <NSMutableCopying, NSCopying, RCDictionaryPListRepresentationCoding> {

	BOOL _cachedComposedAVURLDurationIsValid;
	BOOL _readonly;
	NSArray* _composedFragments;
	NSString* _savedRecordingUUID;
	NSDate* _creationDate;
	NSURL* _composedAVURL;
	NSURL* _composedWaveformURL;
	NSArray* _decomposedFragments;
	NSString* _title;
	double _cachedComposedAVURLDuration;
	NSObject* _composedFragmentsMutex;

}

@property (nonatomic,retain) NSString * savedRecordingUUID;                        //@synthesize savedRecordingUUID=_savedRecordingUUID - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                                //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSArray * decomposedFragments;                        //@synthesize decomposedFragments=_decomposedFragments - In the implementation block
@property (assign,nonatomic) BOOL cachedComposedAVURLDurationIsValid;              //@synthesize cachedComposedAVURLDurationIsValid=_cachedComposedAVURLDurationIsValid - In the implementation block
@property (assign,nonatomic) double cachedComposedAVURLDuration;                   //@synthesize cachedComposedAVURLDuration=_cachedComposedAVURLDuration - In the implementation block
@property (assign,nonatomic) BOOL readonly;                                        //@synthesize readonly=_readonly - In the implementation block
@property (nonatomic,retain) NSArray * composedFragments;                          //@synthesize composedFragments=_composedFragments - In the implementation block
@property (nonatomic,retain) NSObject * composedFragmentsMutex;                    //@synthesize composedFragmentsMutex=_composedFragmentsMutex - In the implementation block
@property (nonatomic,readonly) BOOL isContentBeingModified; 
@property (nonatomic,readonly) NSURL * composedAVURL;                              //@synthesize composedAVURL=_composedAVURL - In the implementation block
@property (nonatomic,readonly) NSURL * composedWaveformURL;                        //@synthesize composedWaveformURL=_composedWaveformURL - In the implementation block
@property (nonatomic,readonly) double composedDuration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)migrateBackupExclusionFlag:(id)arg1 ;
+(void)deleteFromFilesystem:(id)arg1 ;
+(id)compositionLoadedForSavedRecording:(id)arg1 ;
+(id)_compositionMetadataURLForCompositionBundleURL:(id)arg1 ;
+(id)_compositionLoadedFromMetadataURL:(id)arg1 composedAVURL:(id)arg2 savedRecordingUUID:(id)arg3 creationDate:(id)arg4 createIfNeeded:(BOOL)arg5 ;
+(id)compositionMetadataURLForComposedAVURL:(id)arg1 ;
+(id)_compositionLoadedFromMetadataURL:(id)arg1 savedRecording:(id)arg2 ;
+(BOOL)_isSessionWithModificationAccessActiveForComposedAVURL:(id)arg1 ;
+(id)_compositionFragmentsFolderForComposedAVURL:(id)arg1 ;
+(id)compositionLoadedForSavedRecordingUUID:(id)arg1 ;
+(id)compositionLoadedForComposedAVURL:(id)arg1 createIfNeeded:(BOOL)arg2 ;
+(id)compositionBundleURLForComposedAVURL:(id)arg1 ;
+(id)_unitTestingCompositionWithDecomposedFragments:(id)arg1 ;
+(id)compositionLoadedFromCompositionBundleURL:(id)arg1 ;
+(id)compositionLoadedForEditingSavedRecording:(id)arg1 error:(id*)arg2 ;
+(id)compositionWithComposedAVURL:(id)arg1 ;
+(BOOL)excludeFromBackup:(id)arg1 error:(id*)arg2 ;
+(BOOL)includeInBackup:(id)arg1 error:(id*)arg2 ;
+(BOOL)_markCompositionAVURLsBeingModified:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(BOOL)readonly;
-(void)setReadonly:(BOOL)arg1 ;
-(id)initWithDictionaryPListRepresentation:(id)arg1 ;
-(id)dictionaryPListRepresentation;
-(void)deleteFromFilesystem;
-(unsigned long long)fileSizeOfAssetsIncludingRelatedResources:(BOOL)arg1 ;
-(BOOL)isContentBeingModified;
-(id)_calculateComposedFragments;
-(id)_initWithComposedAVURL:(id)arg1 savedRecordingUUID:(id)arg2 creationDate:(id)arg3 title:(id)arg4 decomposedFragments:(id)arg5 composedFragments:(id)arg6 ;
-(double)composedDuration;
-(void)setSavedRecordingUUID:(NSString *)arg1 ;
-(id)_initWithSavedRecording:(id)arg1 decomposedFragments:(id)arg2 composedFragments:(id)arg3 ;
-(NSArray *)composedFragments;
-(id)newRandomFragmentWithInsertionTimeRangeInComposition:(SCD_Struct_RC3)arg1 pathExtension:(id)arg2 ;
-(void)setDecomposedFragments:(NSArray *)arg1 ;
-(BOOL)saveMetadataToDefaultLocation;
-(NSURL *)composedAVURL;
-(void)setComposedFragments:(NSArray *)arg1 ;
-(double)_composedDuration;
-(NSArray *)decomposedFragments;
-(unsigned long long)_fileSizeOfComposedAssetsIncludingRelatedResources:(BOOL)arg1 ;
-(id)compositionByClippingToComposedTimeRange:(SCD_Struct_RC3)arg1 ;
-(id)composedFragmentsIntersectingTimeRange:(SCD_Struct_RC3)arg1 ;
-(void)setCachedComposedAVURLDuration:(double)arg1 ;
-(NSString *)savedRecordingUUID;
-(NSURL *)composedWaveformURL;
-(id)_privateModel;
-(id)_compositionByReplacingDecomposedFragments:(id)arg1 ;
-(void)_eaccess_saveCompositionAndRecordingDuration:(BOOL)arg1 ;
-(id)_eaccess_repairDecomposedFragmentMetadataIfNecessaryAndSave:(BOOL)arg1 ;
-(void)enumerateOrphanedFragmentsWithBlock:(/*^block*/id)arg1 ;
-(void)setSavedRecordingUUIDFromRecoveredRecordingUUID:(id)arg1 ;
-(unsigned long long)estimatedFileSizeOfComposedAssetIncludingRelatedResources:(BOOL)arg1 ;
-(id)compositionByDeletingAndSplittingAtComposedTimeRange:(SCD_Struct_RC3)arg1 ;
-(id)compositionByAppendingFragment:(id)arg1 ;
-(id)compositionByOverdubbingWithFragment:(id)arg1 ;
-(id)compositionByReloadingFromDefaultMetadataLocation;
-(id)compositionByDuplicatingResourcesToDestinationComposedAVURL:(id)arg1 ;
-(void)recacheComposedDuration;
-(void)rcs_composeToFinalDestinationAndDeleteDecomposedFragments:(BOOL)arg1 composeWaveform:(BOOL)arg2 canGenerateWaveformByProcessingAVURL:(BOOL)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)rcs_repairDecomposedFragmentMetadataIfNecessary;
-(BOOL)cachedComposedAVURLDurationIsValid;
-(void)setCachedComposedAVURLDurationIsValid:(BOOL)arg1 ;
-(double)cachedComposedAVURLDuration;
-(NSObject *)composedFragmentsMutex;
-(void)setComposedFragmentsMutex:(NSObject *)arg1 ;
-(id)compositionAsset;
-(id)playableAsset;
@end

