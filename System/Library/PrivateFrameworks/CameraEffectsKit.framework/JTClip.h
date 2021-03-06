/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/JTMediaItemDelegate.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol JTClipDelegate;
@class NSArray, NSDate, NSString, PVTransformAnimation, NSMutableDictionary, JTMediaItem, UIImage, JTAudioClip, NSMutableArray;

@interface JTClip : NSObject <JTMediaItemDelegate, NSCopying> {

	BOOL _audioEnabled;
	BOOL _isPastedClip;
	BOOL _isTrimClip;
	BOOL _originalSelfieAudioEnabled;
	int _audioInitialStartOffset;
	int _provisionalAudioInitialStartOffset;
	int _presentationTime;
	int _duration;
	int _mediaStartOffset;
	int _transformInitialStartOffset;
	float _audioVolume;
	NSArray* _transcription;
	NSDate* _transcriptionRunDate;
	NSDate* _transcriptionEditDate;
	NSString* _transcriptionFormattedString;
	PVTransformAnimation* _transformAnimation;
	NSMutableDictionary* _audioAnalysis;
	id<JTClipDelegate> _delegate;
	JTMediaItem* _mediaItem;
	UIImage* _thumbnail;
	JTAudioClip* _audioClip;
	NSString* _uuid;
	NSMutableArray* _effects;
	NSMutableArray* _filters;
	NSMutableArray* _liveTitles;
	NSMutableArray* _overlays;
	NSMutableArray* _sketches;
	NSMutableArray* _arSelfies;
	NSMutableArray* _animojis;

}

@property (nonatomic,retain) NSString * uuid;                                        //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) JTMediaItem * mediaItem;                                //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,retain) NSMutableArray * effects;                               //@synthesize effects=_effects - In the implementation block
@property (nonatomic,retain) NSMutableArray * filters;                               //@synthesize filters=_filters - In the implementation block
@property (nonatomic,retain) NSMutableArray * liveTitles;                            //@synthesize liveTitles=_liveTitles - In the implementation block
@property (nonatomic,retain) NSMutableArray * overlays;                              //@synthesize overlays=_overlays - In the implementation block
@property (nonatomic,retain) NSMutableArray * sketches;                              //@synthesize sketches=_sketches - In the implementation block
@property (nonatomic,retain) NSMutableArray * arSelfies;                             //@synthesize arSelfies=_arSelfies - In the implementation block
@property (nonatomic,retain) NSMutableArray * animojis;                              //@synthesize animojis=_animojis - In the implementation block
@property (nonatomic,retain) JTAudioClip * audioClip;                                //@synthesize audioClip=_audioClip - In the implementation block
@property (assign,nonatomic,__weak) id<JTClipDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int presentationTime;                                   //@synthesize presentationTime=_presentationTime - In the implementation block
@property (nonatomic,readonly) int presentationEndTime; 
@property (assign,nonatomic) int duration;                                           //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) int mediaStartOffset;                                   //@synthesize mediaStartOffset=_mediaStartOffset - In the implementation block
@property (nonatomic,readonly) int mediaType; 
@property (nonatomic,readonly) CGSize mediaSize; 
@property (assign,nonatomic) BOOL isPastedClip;                                      //@synthesize isPastedClip=_isPastedClip - In the implementation block
@property (nonatomic,retain) UIImage * thumbnail;                                    //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,readonly) NSArray * transcription;                              //@synthesize transcription=_transcription - In the implementation block
@property (nonatomic,retain) NSDate * transcriptionRunDate;                          //@synthesize transcriptionRunDate=_transcriptionRunDate - In the implementation block
@property (nonatomic,retain) NSDate * transcriptionEditDate;                         //@synthesize transcriptionEditDate=_transcriptionEditDate - In the implementation block
@property (nonatomic,retain) NSString * transcriptionFormattedString;                //@synthesize transcriptionFormattedString=_transcriptionFormattedString - In the implementation block
@property (assign,nonatomic) BOOL isTrimClip;                                        //@synthesize isTrimClip=_isTrimClip - In the implementation block
@property (nonatomic,retain) PVTransformAnimation * transformAnimation;              //@synthesize transformAnimation=_transformAnimation - In the implementation block
@property (assign,nonatomic) int transformInitialStartOffset;                        //@synthesize transformInitialStartOffset=_transformInitialStartOffset - In the implementation block
@property (assign,nonatomic) BOOL audioEnabled;                                      //@synthesize audioEnabled=_audioEnabled - In the implementation block
@property (assign,nonatomic) BOOL originalSelfieAudioEnabled;                        //@synthesize originalSelfieAudioEnabled=_originalSelfieAudioEnabled - In the implementation block
@property (assign,nonatomic) float audioVolume;                                      //@synthesize audioVolume=_audioVolume - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * audioAnalysis;                    //@synthesize audioAnalysis=_audioAnalysis - In the implementation block
@property (assign,nonatomic) int audioInitialStartOffset;                            //@synthesize audioInitialStartOffset=_audioInitialStartOffset - In the implementation block
@property (assign,nonatomic) int provisionalAudioInitialStartOffset;                 //@synthesize provisionalAudioInitialStartOffset=_provisionalAudioInitialStartOffset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultClip;
+(void)createVideoClipWithLocalURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)defaultClipWithLocalAsset:(id)arg1 ;
+(void)createStillClipWithLocalURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)createVideoClipWithAssetIdentifier:(id)arg1 progressHandlerBlock:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)createVideoClipWithLocalURL:(id)arg1 effectStack:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)createStillClipWithAssetIdentifier:(id)arg1 progressHandlerBlock:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)createStillClipPreviewWithLocalURL:(id)arg1 effectStack:(id)arg2 maximumPreviewDimension:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)createStillClipWithImage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)createCaptureClip;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<JTClipDelegate>)delegate;
-(void)setDelegate:(id<JTClipDelegate>)arg1 ;
-(NSString *)uuid;
-(int)duration;
-(void)setUuid:(NSString *)arg1 ;
-(NSMutableArray *)filters;
-(int)mediaType;
-(void)setDuration:(int)arg1 ;
-(void)setFilters:(NSMutableArray *)arg1 ;
-(NSMutableArray *)overlays;
-(void)setOverlays:(NSMutableArray *)arg1 ;
-(BOOL)isVideo;
-(int)presentationTime;
-(void)setPresentationTime:(int)arg1 ;
-(UIImage *)thumbnail;
-(void)setThumbnail:(UIImage *)arg1 ;
-(void)setAudioEnabled:(BOOL)arg1 ;
-(float)audioVolume;
-(void)setAudioVolume:(float)arg1 ;
-(JTMediaItem *)mediaItem;
-(void)setMediaItem:(JTMediaItem *)arg1 ;
-(BOOL)isCamera;
-(BOOL)isAssetLoaded;
-(id)initWithMediaItem:(id)arg1 ;
-(PVTransformAnimation *)transformAnimation;
-(BOOL)audioEnabled;
-(CGSize)mediaSize;
-(NSMutableArray *)effects;
-(void)addEffect:(id)arg1 ;
-(void)removeAllEffects;
-(id)stringForMediaType:(int)arg1 ;
-(id)clipType;
-(JTAudioClip *)audioClip;
-(NSMutableArray *)liveTitles;
-(NSMutableArray *)sketches;
-(NSMutableArray *)arSelfies;
-(void)addEffectStack:(id)arg1 ;
-(BOOL)isAssetMissing;
-(BOOL)isAssetInTrash;
-(BOOL)needsDerivativeMedia;
-(BOOL)isStill;
-(BOOL)isPastedClip;
-(BOOL)hasProjectLocalAsset;
-(void)setMediaStartOffset:(int)arg1 ;
-(void)generateThumbnail;
-(void)clipHasChanged;
-(NSMutableArray *)animojis;
-(BOOL)_addEffect:(id)arg1 ;
-(BOOL)_removeAllEffectsOfType:(int)arg1 notifyDelegate:(BOOL)arg2 ;
-(id)_effectsOfType:(int)arg1 ;
-(void)clipHasAnUpdatedThumbnail;
-(void)thumbnailWithTargetSize:(CGSize)arg1 requestedTime:(int)arg2 includeEffects:(BOOL)arg3 includeTransform:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)effectsOfType:(int)arg1 ;
-(int)mediaStartOffset;
-(id)removeStyleTranferOnUnsupportedDevice:(id)arg1 ;
-(void)thumbnailWithTargetSize:(CGSize)arg1 requestedTime:(int)arg2 includeFilters:(BOOL)arg3 includeOverlays:(BOOL)arg4 includeTransform:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(BOOL)isTrimClip;
-(void)clipWillLoad;
-(void)clipDidLoadWithError:(id)arg1 ;
-(void)mediaItemWillLoad:(id)arg1 ;
-(void)mediaItemDidLoad:(id)arg1 error:(id)arg2 ;
-(void)mediaItem:(id)arg1 hasAnUpdatedThumbnail:(id)arg2 ;
-(id)filtersForClip;
-(id)transformInfoOfClip;
-(BOOL)isICPLAsset;
-(BOOL)isAssetLocal;
-(BOOL)isAssetUnavailable;
-(BOOL)isStillFromCamera;
-(BOOL)isValidForProject;
-(int)presentationEndTime;
-(BOOL)canSaveClipToCameraRoll;
-(id)projectLocalAssetURL;
-(void)setProjectLocalAssetURL:(id)arg1 ;
-(void)setTransformAnimation:(PVTransformAnimation *)arg1 ;
-(void)transformHasChanged;
-(void)effectHasChanged:(id)arg1 ;
-(void)removeEffect:(id)arg1 ;
-(BOOL)removeAllEffectsOfType:(int)arg1 ;
-(void)removeAllFiltersWithoutGeneratingAThumbnail;
-(id)effectStack;
-(id)effectStackExcludingType:(int)arg1 ;
-(BOOL)hasEffectOfType:(int)arg1 ;
-(void)thumbnailsWithTargetSize:(CGSize)arg1 requestedTimes:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)thumbnailWithTargetSize:(CGSize)arg1 requestedTime:(int)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)clipAudioHasChanged;
-(NSArray *)transcription;
-(NSDate *)transcriptionRunDate;
-(void)setTranscriptionRunDate:(NSDate *)arg1 ;
-(NSDate *)transcriptionEditDate;
-(void)setTranscriptionEditDate:(NSDate *)arg1 ;
-(NSString *)transcriptionFormattedString;
-(void)setTranscriptionFormattedString:(NSString *)arg1 ;
-(NSMutableDictionary *)audioAnalysis;
-(void)setAudioAnalysis:(NSMutableDictionary *)arg1 ;
-(int)audioInitialStartOffset;
-(void)setAudioInitialStartOffset:(int)arg1 ;
-(int)provisionalAudioInitialStartOffset;
-(void)setProvisionalAudioInitialStartOffset:(int)arg1 ;
-(void)setIsPastedClip:(BOOL)arg1 ;
-(void)setIsTrimClip:(BOOL)arg1 ;
-(int)transformInitialStartOffset;
-(void)setTransformInitialStartOffset:(int)arg1 ;
-(BOOL)originalSelfieAudioEnabled;
-(void)setOriginalSelfieAudioEnabled:(BOOL)arg1 ;
-(void)setAudioClip:(JTAudioClip *)arg1 ;
-(void)setEffects:(NSMutableArray *)arg1 ;
-(void)setLiveTitles:(NSMutableArray *)arg1 ;
-(void)setSketches:(NSMutableArray *)arg1 ;
-(void)setArSelfies:(NSMutableArray *)arg1 ;
-(void)setAnimojis:(NSMutableArray *)arg1 ;
@end

