/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:04 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/PHImportDuplicateCheckerItem.h>

@protocol OS_dispatch_queue;
@class NSURL, NSString, NSDate, NSMutableDictionary, IPAMetadata, PHImportSource, NSDictionary, NSMutableArray, NSSet, AVAssetImageGenerator, NSObject, NSData, NSArray, NSTimeZone, NSNumber;

@interface PHImportAsset : NSObject <PHImportDuplicateCheckerItem> {

	PHImportSource* _source;
	PHImportSource* _strongSource;
	os_unfair_lock_s _metadataLock;
	NSDictionary* _userMetadata;
	NSDictionary* _userInfo;
	NSString* _basenameForOriginalAdjustment;
	unsigned char _duplicateStateConfidence;
	BOOL _canReference;
	BOOL _isDuplicate;
	BOOL _treatAsUnsupportedRAW;
	BOOL _sidecarsLoaded;
	unsigned char _fileLocation;
	unsigned short _resourceSubType;
	id _uuid;
	IPAMetadata* _metadata;
	NSMutableArray* _relatedBurstAssets;
	PHImportAsset* _burstPick;
	id _avchdAssetId;
	id _assetId;
	NSMutableDictionary* _duplicates;
	NSDate* _lastDuplicateCheck;
	NSURL* _url;
	NSString* _uti;
	NSString* _fileName;
	NSString* _createdFileName;
	unsigned long long _fileSize;
	NSString* _fileExtension;
	NSSet* _duplicateAssets;
	PHImportAsset* _rawAsset;
	PHImportAsset* _videoComplement;
	PHImportAsset* _largeRender;
	PHImportAsset* _largeMovieRender;
	PHImportAsset* _spatialOverCapture;
	PHImportAsset* _base;
	PHImportAsset* _thumbnailRender;
	PHImportAsset* _miniRender;
	PHImportAsset* _audioAsset;
	NSDate* _fileCreationDate;
	NSDate* _fileModificationDate;
	AVAssetImageGenerator* _imageGenerator;
	NSObject*<OS_dispatch_queue> _loadSidecars;
	NSString* _importIdentifier;
	NSMutableDictionary* _filePresenters;
	NSDate* _exifImageDate;
	unsigned long long _copyMethod;
	NSData* _fileData;
	long long _resourceType;
	NSMutableDictionary* _sidecarAssetsByType;
	CGSize _thumbnailSize;
	CGSize _imageSize;

}

@property (assign,nonatomic) BOOL treatAsUnsupportedRAW;                                         //@synthesize treatAsUnsupportedRAW=_treatAsUnsupportedRAW - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                                                   //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,retain) AVAssetImageGenerator * imageGenerator;                             //@synthesize imageGenerator=_imageGenerator - In the implementation block
@property (nonatomic,retain) IPAMetadata * metadata;                                             //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> loadSidecars;                          //@synthesize loadSidecars=_loadSidecars - In the implementation block
@property (assign,nonatomic) BOOL sidecarsLoaded;                                                //@synthesize sidecarsLoaded=_sidecarsLoaded - In the implementation block
@property (nonatomic,retain) id uuid;                                                            //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSString * importIdentifier;                                        //@synthesize importIdentifier=_importIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * filePresenters;                               //@synthesize filePresenters=_filePresenters - In the implementation block
@property (nonatomic,retain) NSURL * url;                                                        //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * parentFolderPath; 
@property (nonatomic,retain) NSString * uti;                                                     //@synthesize uti=_uti - In the implementation block
@property (nonatomic,retain) NSString * fileName;                                                //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,retain) NSString * createdFileName;                                         //@synthesize createdFileName=_createdFileName - In the implementation block
@property (assign,nonatomic) unsigned long long fileSize;                                        //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,retain) NSDate * exifImageDate;                                             //@synthesize exifImageDate=_exifImageDate - In the implementation block
@property (nonatomic,retain) NSDate * fileCreationDate;                                          //@synthesize fileCreationDate=_fileCreationDate - In the implementation block
@property (nonatomic,retain) NSDate * fileModificationDate;                                      //@synthesize fileModificationDate=_fileModificationDate - In the implementation block
@property (nonatomic,retain) NSString * fileExtension;                                           //@synthesize fileExtension=_fileExtension - In the implementation block
@property (assign,nonatomic) unsigned long long copyMethod;                                      //@synthesize copyMethod=_copyMethod - In the implementation block
@property (nonatomic,retain) NSData * fileData;                                                  //@synthesize fileData=_fileData - In the implementation block
@property (assign,nonatomic) unsigned char fileLocation;                                         //@synthesize fileLocation=_fileLocation - In the implementation block
@property (nonatomic,__weak,readonly) PHImportSource * source;                                   //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) long long resourceType;                                             //@synthesize resourceType=_resourceType - In the implementation block
@property (assign,nonatomic) unsigned short resourceSubType;                                     //@synthesize resourceSubType=_resourceSubType - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sidecarAssetsByType;                          //@synthesize sidecarAssetsByType=_sidecarAssetsByType - In the implementation block
@property (nonatomic,retain) NSMutableArray * relatedBurstAssets;                                //@synthesize relatedBurstAssets=_relatedBurstAssets - In the implementation block
@property (nonatomic,retain) PHImportAsset * burstPick;                                          //@synthesize burstPick=_burstPick - In the implementation block
@property (nonatomic,readonly) NSArray * sidecarAssets; 
@property (nonatomic,readonly) id representedObject; 
@property (nonatomic,readonly) unsigned long long approximateBytesRequiredToImport; 
@property (nonatomic,readonly) NSSet * duplicateAssets;                                          //@synthesize duplicateAssets=_duplicateAssets - In the implementation block
@property (nonatomic,retain) PHImportAsset * rawAsset;                                           //@synthesize rawAsset=_rawAsset - In the implementation block
@property (nonatomic,retain) PHImportAsset * videoComplement;                                    //@synthesize videoComplement=_videoComplement - In the implementation block
@property (nonatomic,retain) PHImportAsset * largeRender;                                        //@synthesize largeRender=_largeRender - In the implementation block
@property (nonatomic,retain) PHImportAsset * largeMovieRender;                                   //@synthesize largeMovieRender=_largeMovieRender - In the implementation block
@property (nonatomic,retain) PHImportAsset * spatialOverCapture;                                 //@synthesize spatialOverCapture=_spatialOverCapture - In the implementation block
@property (nonatomic,retain) PHImportAsset * base;                                               //@synthesize base=_base - In the implementation block
@property (nonatomic,retain) PHImportAsset * thumbnailRender;                                    //@synthesize thumbnailRender=_thumbnailRender - In the implementation block
@property (nonatomic,retain) PHImportAsset * miniRender;                                         //@synthesize miniRender=_miniRender - In the implementation block
@property (nonatomic,retain) PHImportAsset * audioAsset;                                         //@synthesize audioAsset=_audioAsset - In the implementation block
@property (nonatomic,readonly) unsigned long long assetSizeIncludingRelatedAssets; 
@property (nonatomic,readonly) NSTimeZone * exifTimeZone; 
@property (assign,nonatomic) CGSize thumbnailSize;                                               //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
@property (nonatomic,readonly) NSString * burstUUID; 
@property (nonatomic,readonly) NSNumber * duration; 
@property (nonatomic,readonly) NSString * cameraMake; 
@property (nonatomic,readonly) NSString * cameraModel; 
@property (nonatomic,readonly) NSString * lensModel; 
@property (nonatomic,readonly) NSNumber * flashFired; 
@property (nonatomic,readonly) NSNumber * whiteBalance; 
@property (nonatomic,readonly) NSNumber * meteringMode; 
@property (nonatomic,readonly) NSNumber * iso; 
@property (nonatomic,readonly) NSNumber * focalLength; 
@property (nonatomic,readonly) NSNumber * exposureBias; 
@property (nonatomic,readonly) NSNumber * aperture; 
@property (nonatomic,readonly) NSNumber * shutterSpeed; 
@property (nonatomic,readonly) NSString * codec; 
@property (nonatomic,readonly) NSNumber * fps; 
@property (nonatomic,readonly) NSNumber * sampleRate; 
@property (nonatomic,readonly) NSNumber * bitrate; 
@property (nonatomic,readonly) NSNumber * trackFormat; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * assetDescription; 
@property (nonatomic,readonly) BOOL isViewable; 
@property (nonatomic,readonly) BOOL isTagged; 
@property (nonatomic,readonly) BOOL hasAdjustments; 
@property (nonatomic,readonly) BOOL canReference;                                                //@synthesize canReference=_canReference - In the implementation block
@property (nonatomic,readonly) BOOL canDelete; 
@property (nonatomic,readonly) BOOL hasAudioAttachment; 
@property (nonatomic,readonly) BOOL isImage; 
@property (nonatomic,readonly) BOOL isMovie; 
@property (nonatomic,readonly) BOOL isSloMo; 
@property (nonatomic,readonly) BOOL isAudio; 
@property (nonatomic,readonly) BOOL isJPEG; 
@property (nonatomic,readonly) BOOL isJPEG2000; 
@property (nonatomic,readonly) BOOL isRAW; 
@property (nonatomic,readonly) BOOL isJpegPlusRAW; 
@property (nonatomic,readonly) BOOL isTIFF; 
@property (nonatomic,readonly) BOOL isHEIF; 
@property (nonatomic,readonly) BOOL isGIF; 
@property (nonatomic,readonly) BOOL isPNG; 
@property (nonatomic,readonly) BOOL isPDF; 
@property (nonatomic,readonly) BOOL isPSD; 
@property (nonatomic,readonly) BOOL isAVCHD; 
@property (nonatomic,readonly) BOOL isSidecar; 
@property (nonatomic,readonly) BOOL isTimelapse; 
@property (nonatomic,readonly) BOOL isHDR; 
@property (nonatomic,readonly) BOOL isSDOF; 
@property (nonatomic,readonly) BOOL isBurst; 
@property (nonatomic,readonly) BOOL isGrouped; 
@property (nonatomic,readonly) BOOL isLivePhoto; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id avchdAssetId;                                                            //@synthesize avchdAssetId=_avchdAssetId - In the implementation block
@property (readonly) id assetId;                                                                 //@synthesize assetId=_assetId - In the implementation block
@property (readonly) id originatingAssetID; 
@property (readonly) id nameKey; 
@property (readonly) id sizeKey; 
@property (readonly) NSDate * dateKey; 
@property (assign) BOOL isDuplicate;                                                             //@synthesize isDuplicate=_isDuplicate - In the implementation block
@property (retain) NSDate * lastDuplicateCheck;                                                  //@synthesize lastDuplicateCheck=_lastDuplicateCheck - In the implementation block
@property (retain) NSMutableDictionary * duplicates;                                             //@synthesize duplicates=_duplicates - In the implementation block
@property (assign) unsigned char duplicateStateConfidence;                                       //@synthesize duplicateStateConfidence=_duplicateStateConfidence - In the implementation block
+(id)assetFileForURL:(id)arg1 source:(id)arg2 ;
+(BOOL)isOriginalAdjustmentData:(id)arg1 ;
+(void)determineIfTIFFIsRAW:(id)arg1 url:(id)arg2 ;
+(BOOL)isValidAsSidecar:(id)arg1 ;
+(id)assetFileForURL:(id)arg1 source:(id)arg2 withUuid:(id)arg3 ;
+(void)logImageDateFileDateDifferencesForAsset:(id)arg1 ;
+(id)loadDatesForAssetSequence:(id)arg1 atEnd:(/*^block*/id)arg2 ;
+(id)loadDatesForAssets:(id)arg1 atEnd:(/*^block*/id)arg2 ;
+(id)importAssetFromAssetBundleAtURL:(id)arg1 withImportSource:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)userInfo;
-(PHImportSource *)source;
-(unsigned long long)fileSize;
-(NSDate *)fileModificationDate;
-(NSDate *)fileCreationDate;
-(NSURL *)url;
-(void)setUserInfo:(id)arg1 ;
-(id)uuid;
-(NSString *)title;
-(NSNumber *)duration;
-(NSMutableDictionary *)filePresenters;
-(void)setUuid:(id)arg1 ;
-(void)setMetadata:(IPAMetadata *)arg1 ;
-(IPAMetadata *)metadata;
-(NSNumber *)focalLength;
-(NSString *)uti;
-(void)setUti:(NSString *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(CGSize)imageSize;
-(PHImportAsset *)rawAsset;
-(id)assetId;
-(void)setRawAsset:(PHImportAsset *)arg1 ;
-(void)setFileSize:(unsigned long long)arg1 ;
-(void)setFileModificationDate:(NSDate *)arg1 ;
-(id)representedObject;
-(void)setImageSize:(CGSize)arg1 ;
-(void)setBase:(PHImportAsset *)arg1 ;
-(PHImportAsset *)base;
-(NSNumber *)sampleRate;
-(NSString *)codec;
-(void)_setMetadata:(id)arg1 ;
-(NSString *)fileName;
-(NSString *)fileExtension;
-(void)setFileName:(NSString *)arg1 ;
-(long long)resourceType;
-(void)setResourceType:(long long)arg1 ;
-(id)initWithSource:(id)arg1 ;
-(BOOL)isImage;
-(BOOL)isMovie;
-(BOOL)isJPEG;
-(BOOL)isAudio;
-(BOOL)isSidecar;
-(void)setFileCreationDate:(NSDate *)arg1 ;
-(NSString *)burstUUID;
-(id)originatingAssetID;
-(BOOL)isTagged;
-(CGSize)thumbnailSize;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(BOOL)hasAdjustments;
-(BOOL)isRAW;
-(NSString *)cameraMake;
-(NSString *)lensModel;
-(NSString *)cameraModel;
-(NSNumber *)fps;
-(id)groupingUUID;
-(id)spatialOverCaptureIdentifier;
-(NSNumber *)aperture;
-(BOOL)isSpatialOverCapture;
-(PHImportAsset *)videoComplement;
-(NSString *)assetDescription;
-(void)setFileExtension:(NSString *)arg1 ;
-(void)setVideoComplement:(PHImportAsset *)arg1 ;
-(BOOL)canDelete;
-(id)descriptionWithPrefix:(id)arg1 ;
-(BOOL)canReference;
-(void)setDuplicates:(id)arg1 forLibrary:(id)arg2 ;
-(id)duplicateAssetsForLibrary:(id)arg1 ;
-(void)loadMetadataSync;
-(id)avchdAssetId;
-(NSDate *)exifImageDate;
-(id)nameKey;
-(id)sizeKey;
-(NSDate *)dateKey;
-(BOOL)isDuplicate;
-(void)setIsDuplicate:(BOOL)arg1 ;
-(BOOL)isLivePhoto;
-(NSDate *)lastDuplicateCheck;
-(void)setLastDuplicateCheck:(NSDate *)arg1 ;
-(NSMutableDictionary *)duplicates;
-(void)setDuplicates:(NSMutableDictionary *)arg1 ;
-(unsigned char)duplicateStateConfidence;
-(void)setDuplicateStateConfidence:(unsigned char)arg1 ;
-(void)updateIsRAW:(BOOL)arg1 uti:(id)arg2 ;
-(BOOL)configureWithUTI:(id)arg1 supportedType:(unsigned char)arg2 error:(id*)arg3 ;
-(id)initWithSource:(id)arg1 url:(id)arg2 uti:(id)arg3 supportedType:(unsigned char)arg4 ;
-(BOOL)canPreserveFolderStructure;
-(NSString *)parentFolderPath;
-(BOOL)isValidForReference;
-(BOOL)isJPEG2000;
-(BOOL)isTIFF;
-(BOOL)isHEIF;
-(BOOL)isGIF;
-(BOOL)isPDF;
-(BOOL)isPNG;
-(BOOL)isPSD;
-(BOOL)isSloMo;
-(BOOL)isAVCHD;
-(BOOL)isTimelapse;
-(BOOL)isJpegPlusRAW;
-(BOOL)isHDR;
-(BOOL)isSDOF;
-(BOOL)isBurst;
-(BOOL)hasAudioAttachment;
-(BOOL)isGrouped;
-(BOOL)isRepresentation;
-(BOOL)isPrimary;
-(BOOL)isRender;
-(BOOL)isBase;
-(BOOL)isOriginalAdjustmentData;
-(id)basenameForOriginalAdjustmentData;
-(id)stripMarkerFromName:(id)arg1 markerLocation:(unsigned long long)arg2 ;
-(NSString *)importIdentifier;
-(BOOL)performAdditionalLivePhotoChecksOnImageAsset:(id)arg1 ;
-(BOOL)isVideoComplementOf:(id)arg1 ;
-(void)takeAsVideoComplement:(id)arg1 ;
-(BOOL)isViewable;
-(void)_accessMetadata:(/*^block*/id)arg1 ;
-(CGSize)cgImageSize;
-(int)burstPickType;
-(id)mediaGroupId;
-(NSNumber *)flashFired;
-(NSNumber *)whiteBalance;
-(NSNumber *)meteringMode;
-(NSNumber *)iso;
-(NSNumber *)exposureBias;
-(NSNumber *)shutterSpeed;
-(NSNumber *)bitrate;
-(NSNumber *)trackFormat;
-(unsigned long long)assetSizeIncludingRelatedAssets;
-(unsigned long long)approximateBytesRequiredToImport;
-(id)relatedAssets;
-(unsigned long long)relatedBytes;
-(id)checkForSidecarWithExtension:(id)arg1 ;
-(id)checkForSidecarWithName:(id)arg1 ;
-(void)loadSidecarFiles;
-(void)_loadSidecarFiles;
-(NSArray *)sidecarAssets;
-(unsigned long long)sidecarAssetBytes;
-(void)addSidecarAsset:(id)arg1 ;
-(void)removeSidecarAsset:(id)arg1 ;
-(id)slmSidecar;
-(id)aaeSidecar;
-(id)originalAaeSidecar;
-(id)xmpSidecar;
-(BOOL)isAppropriateForUI;
-(void)setLargeRender:(PHImportAsset *)arg1 ;
-(void)setLargeMovieRender:(PHImportAsset *)arg1 ;
-(void)setSpatialOverCapture:(PHImportAsset *)arg1 ;
-(void)setAudioAsset:(PHImportAsset *)arg1 ;
-(void)addBurstAsset:(id)arg1 ;
-(void)informDelegateOfAssetUpdates;
-(void)loadMetadataAsync:(/*^block*/id)arg1 ;
-(id)thumbnailForSize:(unsigned long long)arg1 atEnd:(/*^block*/id)arg2 ;
-(id)thumbnailForSize:(unsigned long long)arg1 priority:(unsigned char)arg2 atEnd:(/*^block*/id)arg3 ;
-(void)thumbnailUsingRequest:(id)arg1 atEnd:(/*^block*/id)arg2 ;
-(CGSize)cropEXIFThumbSize:(CGSize)arg1 originalSize:(CGSize)arg2 ;
-(CGImageRef)removeBlackBarsFromExifThumbnail:(CGImageRef)arg1 fullSize:(CGSize)arg2 ;
-(CGImageRef)imageThumbnailOfSize:(unsigned long long)arg1 canceler:(id)arg2 error:(id*)arg3 ;
-(CGImageRef)avThumbnailOfSize:(unsigned long long)arg1 canceler:(id)arg2 error:(id*)arg3 ;
-(BOOL)isValidMetadata:(id)arg1 ;
-(BOOL)isBlessed:(id)arg1 includeXmp:(BOOL)arg2 ;
-(id)validateMetadataForImportRecord:(id)arg1 ;
-(BOOL)hasOriginalResourceType;
-(id)resourceTypes;
-(id)sidecarInfoDictionary;
-(id)sidecarInfoDictionaries;
-(id)importRecordForPrimaryAsset;
-(void)_addRelatedRecordsToRecord:(id)arg1 primaryRecord:(id)arg2 ;
-(id)copyFromURL:(id)arg1 toURL:(id)arg2 ;
-(void)downloadToPathAsync:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)timezoneCorrectedExifImageDate;
-(NSTimeZone *)exifTimeZone;
-(id)userMetadata;
-(void)setUserMetadata:(id)arg1 ;
-(BOOL)isEqualToImportAsset:(id)arg1 ;
-(NSMutableArray *)relatedBurstAssets;
-(void)setRelatedBurstAssets:(NSMutableArray *)arg1 ;
-(PHImportAsset *)burstPick;
-(void)setBurstPick:(PHImportAsset *)arg1 ;
-(NSString *)createdFileName;
-(void)setCreatedFileName:(NSString *)arg1 ;
-(NSSet *)duplicateAssets;
-(PHImportAsset *)largeRender;
-(PHImportAsset *)largeMovieRender;
-(PHImportAsset *)spatialOverCapture;
-(PHImportAsset *)thumbnailRender;
-(void)setThumbnailRender:(PHImportAsset *)arg1 ;
-(PHImportAsset *)miniRender;
-(void)setMiniRender:(PHImportAsset *)arg1 ;
-(PHImportAsset *)audioAsset;
-(BOOL)treatAsUnsupportedRAW;
-(void)setTreatAsUnsupportedRAW:(BOOL)arg1 ;
-(AVAssetImageGenerator *)imageGenerator;
-(void)setImageGenerator:(AVAssetImageGenerator *)arg1 ;
-(NSObject*<OS_dispatch_queue>)loadSidecars;
-(void)setLoadSidecars:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)sidecarsLoaded;
-(void)setSidecarsLoaded:(BOOL)arg1 ;
-(void)setImportIdentifier:(NSString *)arg1 ;
-(void)setFilePresenters:(NSMutableDictionary *)arg1 ;
-(void)setExifImageDate:(NSDate *)arg1 ;
-(unsigned long long)copyMethod;
-(void)setCopyMethod:(unsigned long long)arg1 ;
-(NSData *)fileData;
-(void)setFileData:(NSData *)arg1 ;
-(unsigned char)fileLocation;
-(void)setFileLocation:(unsigned char)arg1 ;
-(unsigned short)resourceSubType;
-(void)setResourceSubType:(unsigned short)arg1 ;
-(NSMutableDictionary *)sidecarAssetsByType;
-(void)setSidecarAssetsByType:(NSMutableDictionary *)arg1 ;
@end

