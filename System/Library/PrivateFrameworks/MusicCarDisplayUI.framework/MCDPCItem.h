/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIImage, MCDPCModel, NSString, NSData;

@interface MCDPCItem : NSObject {

	void* _contentItem;
	BOOL _currentlyPlaying;
	UIImage* _artworkImage;
	MCDPCModel* _model;

}

@property (nonatomic,__weak,readonly) MCDPCModel * model;              //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) void* contentItem;                        //@synthesize contentItem=_contentItem - In the implementation block
@property (assign,nonatomic) BOOL currentlyPlaying;                    //@synthesize currentlyPlaying=_currentlyPlaying - In the implementation block
@property (nonatomic,retain) UIImage * artworkImage;                   //@synthesize artworkImage=_artworkImage - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) NSData * artworkData; 
@property (nonatomic,readonly) float playbackProgress; 
@property (nonatomic,readonly) BOOL isPlayable; 
@property (nonatomic,readonly) BOOL isContainer; 
@property (nonatomic,readonly) BOOL isCloudItem; 
@property (nonatomic,readonly) BOOL isExplicitItem; 
-(void)dealloc;
-(id)description;
-(NSString *)identifier;
-(NSString *)title;
-(MCDPCModel *)model;
-(NSString *)subtitle;
-(BOOL)isPlayable;
-(BOOL)isCloudItem;
-(void*)contentItem;
-(BOOL)isExplicitItem;
-(NSData *)artworkData;
-(float)playbackProgress;
-(BOOL)isContainer;
-(UIImage *)artworkImage;
-(void)setContentItem:(void*)arg1 ;
-(void)setArtworkImage:(UIImage *)arg1 ;
-(BOOL)currentlyPlaying;
-(void)setCurrentlyPlaying:(BOOL)arg1 ;
-(id)_initWithModel:(id)arg1 MRContentItem:(void*)arg2 ;
@end

