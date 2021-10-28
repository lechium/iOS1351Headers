/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:34 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/Memories-Structs.h>
#import <Memories/CompoundClip.h>
#import <libobjc.A.dylib/KonaClipMiroAutoEditAdditions.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CompoundClipInformation.h>

@class UIColor, NSArray, BurstClipStyle, NSString, PHAsset;

@interface BurstClip : CompoundClip <KonaClipMiroAutoEditAdditions, NSCopying, CompoundClipInformation> {

	unsigned long long _allowedBurstStyles;
	unsigned long long _burstStyle;
	UIColor* _threeUpStyleGapColor;
	UIColor* _threeUpStylePopBackgroundColor;
	double _minimumVideoDuration;
	double _idealVideoDuration;
	NSArray* _containedClips;
	NSArray* _allSourceClips;
	BurstClipStyle* _burstClipStyle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSArray * containedClips;                              //@synthesize containedClips=_containedClips - In the implementation block
@property (nonatomic,retain) NSArray * allSourceClips;                              //@synthesize allSourceClips=_allSourceClips - In the implementation block
@property (nonatomic,retain) BurstClipStyle * burstClipStyle;                       //@synthesize burstClipStyle=_burstClipStyle - In the implementation block
@property (assign,nonatomic) unsigned long long allowedBurstStyles;                 //@synthesize allowedBurstStyles=_allowedBurstStyles - In the implementation block
@property (assign,nonatomic) unsigned long long burstStyle;                         //@synthesize burstStyle=_burstStyle - In the implementation block
@property (nonatomic,retain) UIColor * threeUpStyleGapColor;                        //@synthesize threeUpStyleGapColor=_threeUpStyleGapColor - In the implementation block
@property (nonatomic,retain) UIColor * threeUpStylePopBackgroundColor;              //@synthesize threeUpStylePopBackgroundColor=_threeUpStylePopBackgroundColor - In the implementation block
@property (nonatomic,readonly) PHAsset * keyAsset; 
@property (nonatomic,readonly) unsigned long long assetCount; 
@property (assign,nonatomic) double minimumVideoDuration;                           //@synthesize minimumVideoDuration=_minimumVideoDuration - In the implementation block
@property (assign,nonatomic) double idealVideoDuration;                             //@synthesize idealVideoDuration=_idealVideoDuration - In the implementation block
@property (nonatomic,readonly) double minimumDuration; 
@property (nonatomic,readonly) double idealDuration; 
@property (nonatomic,readonly) double maximumDuration; 
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)aspectRatio;
-(void)setDuration:(int)arg1 ;
-(double)maximumDuration;
-(unsigned long long)assetCount;
-(BOOL)isPhoto;
-(PHAsset *)keyAsset;
-(BOOL)isBurst;
-(double)minimumDuration;
-(NSArray *)containedClips;
-(unsigned long long)burstStyle;
-(double)autoEditShortestDurationWithBlueprint:(id)arg1 ;
-(double)autoEditLongestDurationWithBlueprint:(id)arg1 ;
-(double)idealDuration;
-(void)setAltAspect:(double)arg1 ;
-(void)setContainedClips:(NSArray *)arg1 ;
-(id)representingClip;
-(id)pickedKBClips;
-(void)setAllowedBurstStyles:(unsigned long long)arg1 ;
-(void)setMinimumPhotoDuration:(double)arg1 ;
-(void)setMinimumVideoDuration:(double)arg1 ;
-(void)setIdealPhotoDuration:(double)arg1 ;
-(void)setIdealVideoDuration:(double)arg1 ;
-(id)supportedBurstStylesArray;
-(void)setBurstStyle:(unsigned long long)arg1 ;
-(void)setThreeUpStylePopBackgroundColor:(UIColor *)arg1 ;
-(id)initWithKenBurnsClip:(id)arg1 sourceClips:(id)arg2 ;
-(id)bestClipsForClipCount:(unsigned long long)arg1 ;
-(id)pickedIndices;
-(id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2 ;
-(void)setAllSourceClips:(NSArray *)arg1 ;
-(void)setBurstClipStyle:(BurstClipStyle *)arg1 ;
-(BurstClipStyle *)burstClipStyle;
-(NSArray *)allSourceClips;
-(id)descriptionOfBurstStyle;
-(unsigned long long)allowedBurstStyles;
-(unsigned long long)supportedBurstStyles;
-(UIColor *)threeUpStyleGapColor;
-(UIColor *)threeUpStylePopBackgroundColor;
-(void)fetchIfNeeded;
-(id)userPickedIndices;
-(id)autoPickedIndices;
-(unsigned long long)lastInterestingIndex;
-(id)indicesWithBurstSelectionType:(unsigned long long)arg1 ;
-(void)setThreeUpStyleGapColor:(UIColor *)arg1 ;
-(id)lastInterestingClip;
-(id)plistRepresentationFromProject:(id)arg1 ;
-(void)setContentsFromPlist:(id)arg1 inProject:(id)arg2 ;
-(double)minimumVideoDuration;
-(double)idealVideoDuration;
@end
