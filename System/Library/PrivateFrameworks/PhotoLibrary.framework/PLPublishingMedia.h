/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSURL;

@interface PLPublishingMedia : NSObject {

	BOOL _isVideo;
	BOOL _isHDVideo;
	id _asset;
	NSString* _pathForVideoFile;
	NSURL* _assetURL;
	double _duration;

}

@property (nonatomic,retain) id asset;                                 //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) BOOL isVideo;                             //@synthesize isVideo=_isVideo - In the implementation block
@property (nonatomic,retain) NSString * pathForVideoFile;              //@synthesize pathForVideoFile=_pathForVideoFile - In the implementation block
@property (nonatomic,retain) NSURL * assetURL;                         //@synthesize assetURL=_assetURL - In the implementation block
@property (assign,nonatomic) BOOL isHDVideo;                           //@synthesize isHDVideo=_isHDVideo - In the implementation block
@property (assign,nonatomic) double duration;                          //@synthesize duration=_duration - In the implementation block
+(BOOL)isValidPublishingMedia:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(double)duration;
-(id)asset;
-(void)setAsset:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(id)initWithAsset:(id)arg1 ;
-(BOOL)isVideo;
-(NSURL *)assetURL;
-(void)setAssetURL:(NSURL *)arg1 ;
-(NSString *)pathForVideoFile;
-(BOOL)isHDVideo;
-(id)initWithManagedAsset:(id)arg1 ;
-(void)setIsVideo:(BOOL)arg1 ;
-(id)initWithAVURLAsset:(id)arg1 ;
-(void)setPathForVideoFile:(NSString *)arg1 ;
-(void)setIsHDVideo:(BOOL)arg1 ;
@end
