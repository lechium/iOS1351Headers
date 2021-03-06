/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXBaseDisplayCollection.h>
#import <libobjc.A.dylib/PXDisplayAssetCollection.h>

@class NSString, NSArray, NSDate;

@interface PXForYouSuggestionAssetCollection : PXBaseDisplayCollection <PXDisplayAssetCollection> {

	BOOL _isEnriched;
	BOOL _isEnrichmentComplete;
	BOOL _isAggregation;
	BOOL _isRecent;
	unsigned short _px_highlightEnrichmentState;
	NSString* _localizedTitle;
	NSString* _localizedSubtitle;
	NSString* _localizedSmartDescription;
	NSString* _localizedDateDescription;
	NSString* _localizedDebugDescription;
	NSArray* _localizedLocationNames;
	NSDate* _startDate;
	NSDate* _endDate;
	double _promotionScore;
	unsigned long long _estimatedAssetCount;
	long long _px_highlightKind;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL px_isUserCreated; 
@property (nonatomic,readonly) BOOL px_isRegularAlbum; 
@property (nonatomic,readonly) BOOL px_isStandInAlbum; 
@property (nonatomic,readonly) BOOL px_isImportedAlbum; 
@property (nonatomic,readonly) BOOL px_isMyPhotoStreamAlbum; 
@property (nonatomic,readonly) BOOL px_isUserSmartAlbum; 
@property (nonatomic,readonly) BOOL px_isSmartAlbum; 
@property (nonatomic,readonly) BOOL px_isRootSmartAlbum; 
@property (nonatomic,readonly) BOOL px_isMediaTypeSmartAlbum; 
@property (nonatomic,readonly) BOOL px_isAllPhotosSmartAlbum; 
@property (nonatomic,readonly) BOOL px_isFavoritesSmartAlbum; 
@property (nonatomic,readonly) BOOL px_isPlacesSmartAlbum; 
@property (nonatomic,readonly) BOOL px_isHiddenSmartAlbum; 
@property (nonatomic,readonly) BOOL px_isRecentlyAddedSmartAlbum; 
@property (nonatomic,readonly) BOOL px_isRecentlyDeletedSmartAlbum; 
@property (nonatomic,readonly) BOOL px_isRecentsSmartAlbum; 
@property (nonatomic,readonly) BOOL px_isRecentlyEditedSmartAlbum; 
@property (nonatomic,readonly) BOOL px_isScreenRecordingsSmartAlbum; 
@property (nonatomic,readonly) BOOL px_isSharedAlbum; 
@property (nonatomic,readonly) BOOL px_isOwnedSharedAlbum; 
@property (nonatomic,readonly) BOOL px_isCloudMultipleContributorsEnabled; 
@property (nonatomic,readonly) BOOL px_isFolder; 
@property (nonatomic,readonly) BOOL px_isRegularFolder; 
@property (nonatomic,readonly) BOOL px_isSmartFolder; 
@property (nonatomic,readonly) BOOL px_isFavoriteMemoriesSmartFolder; 
@property (nonatomic,readonly) BOOL px_isTopLevelFolder; 
@property (nonatomic,readonly) BOOL px_isSharedAlbumsFolder; 
@property (nonatomic,readonly) BOOL px_isMediaTypesFolder; 
@property (nonatomic,readonly) BOOL px_isProjectsFolder; 
@property (nonatomic,readonly) BOOL px_isMacSyncedAlbum; 
@property (nonatomic,readonly) BOOL px_isMacSyncedEventsFolder; 
@property (nonatomic,readonly) BOOL px_isMacSyncedFacesFolder; 
@property (nonatomic,readonly) BOOL px_isProject; 
@property (nonatomic,readonly) BOOL px_isPhotosVirtualCollection; 
@property (nonatomic,readonly) BOOL px_isMomentsVirtualCollection; 
@property (nonatomic,readonly) BOOL px_isMemoriesVirtualCollection; 
@property (nonatomic,readonly) BOOL px_isPeopleVirtualCollection; 
@property (nonatomic,readonly) BOOL px_isSharedActivityVirtualCollection; 
@property (nonatomic,readonly) BOOL px_isTransientPlacesCollection; 
@property (nonatomic,readonly) BOOL px_isImportHistoryCollection; 
@property (nonatomic,readonly) BOOL px_isImportSessionCollection; 
@property (nonatomic,readonly) BOOL px_canRearrangeContent; 
@property (nonatomic,readonly) BOOL isEnriched;                                         //@synthesize isEnriched=_isEnriched - In the implementation block
@property (nonatomic,readonly) BOOL isEnrichmentComplete;                               //@synthesize isEnrichmentComplete=_isEnrichmentComplete - In the implementation block
@property (nonatomic,readonly) double promotionScore;                                   //@synthesize promotionScore=_promotionScore - In the implementation block
@property (nonatomic,readonly) BOOL isAggregation;                                      //@synthesize isAggregation=_isAggregation - In the implementation block
@property (nonatomic,readonly) BOOL isRecent;                                           //@synthesize isRecent=_isRecent - In the implementation block
@property (nonatomic,readonly) unsigned short px_highlightEnrichmentState;              //@synthesize px_highlightEnrichmentState=_px_highlightEnrichmentState - In the implementation block
@property (nonatomic,readonly) long long px_highlightKind;                              //@synthesize px_highlightKind=_px_highlightKind - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle;                               //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,readonly) NSString * localizedSubtitle;                            //@synthesize localizedSubtitle=_localizedSubtitle - In the implementation block
@property (nonatomic,readonly) NSString * localizedDebugDescription;                    //@synthesize localizedDebugDescription=_localizedDebugDescription - In the implementation block
@property (nonatomic,readonly) NSArray * localizedLocationNames;                        //@synthesize localizedLocationNames=_localizedLocationNames - In the implementation block
@property (nonatomic,readonly) NSString * localizedDateDescription;                     //@synthesize localizedDateDescription=_localizedDateDescription - In the implementation block
@property (nonatomic,readonly) NSString * localizedSmartDescription;                    //@synthesize localizedSmartDescription=_localizedSmartDescription - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                                      //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                        //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) unsigned long long estimatedAssetCount;                  //@synthesize estimatedAssetCount=_estimatedAssetCount - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSString *)localizedTitle;
-(NSString *)localizedSubtitle;
-(NSArray *)localizedLocationNames;
-(double)promotionScore;
-(BOOL)isRecent;
-(unsigned long long)estimatedAssetCount;
-(BOOL)isEnriched;
-(id)localizedDateDescriptionWithOptions:(unsigned long long)arg1 ;
-(BOOL)isEnrichmentComplete;
-(BOOL)isAggregation;
-(unsigned short)px_highlightEnrichmentState;
-(long long)px_highlightKind;
-(NSString *)localizedDebugDescription;
-(NSString *)localizedDateDescription;
-(NSString *)localizedSmartDescription;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
@end

