/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, CLLocation, NSDate;


@protocol PUDisplayAsset <NSObject,NSCopying>
@property (nonatomic,readonly) unsigned long long mediaType; 
@property (nonatomic,readonly) unsigned long long mediaSubtypes; 
@property (nonatomic,readonly) long long playbackStyle; 
@property (nonatomic,readonly) long long playbackVariation; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) unsigned long long pixelWidth; 
@property (nonatomic,readonly) unsigned long long pixelHeight; 
@property (nonatomic,readonly) CLLocation * location; 
@property (nonatomic,readonly) double duration; 
@property (getter=isFavorite,nonatomic,readonly) BOOL favorite; 
@property (getter=isHidden,nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSDate * localCreationDate; 
@property (nonatomic,readonly) NSDate * modificationDate; 
@property (nonatomic,readonly) double aspectRatio; 
@property (nonatomic,readonly) NSString * localizedGeoDescription; 
@property (nonatomic,readonly) BOOL isTemporaryPlaceholder; 
@property (nonatomic,readonly) NSString * uniformTypeIdentifier; 
@property (nonatomic,readonly) unsigned long long originalFilesize; 
@property (nonatomic,readonly) BOOL isAnimatedImage; 
@property (getter=isLivePhoto,nonatomic,readonly) BOOL livePhoto; 
@property (nonatomic,readonly) BOOL canPlayPhotoIris; 
@property (nonatomic,readonly) BOOL canPlayLoopingVideo; 
@property (nonatomic,readonly) BOOL isPhotoIrisPlaceholder; 
@property (nonatomic,readonly) SCD_Struct_PH4 photoIrisStillDisplayTime; 
@property (nonatomic,readonly) SCD_Struct_PH4 photoIrisVideoDuration; 
@property (nonatomic,readonly) BOOL hasPhotoColorAdjustments; 
@property (nonatomic,readonly) unsigned long long deferredLogInfo; 
@property (nonatomic,readonly) SCD_Struct_PH4 videoKeyFrameSourceTime; 
@optional
-(SCD_Struct_PH4)videoKeyFrameSourceTime;

@required
-(NSString *)uuid;
-(double)duration;
-(NSDate *)modificationDate;
-(BOOL)isHidden;
-(CLLocation *)location;
-(NSDate *)creationDate;
-(double)aspectRatio;
-(unsigned long long)mediaType;
-(NSDate *)localCreationDate;
-(BOOL)isFavorite;
-(BOOL)isAnimatedImage;
-(unsigned long long)pixelWidth;
-(unsigned long long)pixelHeight;
-(NSString *)uniformTypeIdentifier;
-(unsigned long long)originalFilesize;
-(long long)playbackVariation;
-(long long)playbackStyle;
-(SCD_Struct_PH4)photoIrisStillDisplayTime;
-(SCD_Struct_PH4)photoIrisVideoDuration;
-(BOOL)isPhotoIrisPlaceholder;
-(BOOL)canPlayPhotoIris;
-(BOOL)isLivePhoto;
-(BOOL)canPlayLoopingVideo;
-(BOOL)hasPhotoColorAdjustments;
-(unsigned long long)mediaSubtypes;
-(NSString *)localizedGeoDescription;
-(unsigned long long)isContentEqualTo:(id)arg1;
-(BOOL)isTemporaryPlaceholder;
-(unsigned long long)deferredLogInfo;

@end

