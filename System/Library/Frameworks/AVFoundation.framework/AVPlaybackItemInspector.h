/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:53 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetInspector.h>

@class NSArray;

@interface AVPlaybackItemInspector : AVAssetInspector {

	OpaqueFigPlaybackItemRef _playbackItem;
	NSArray* _trackIDs;

}

@property (setter=_setPlaybackItem:,getter=_playbackItem,nonatomic,retain) OpaqueFigPlaybackItemRef playbackItem; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(SCD_Struct_AV7)duration;
-(CGSize)naturalSize;
-(id)metadataForFormat:(id)arg1 ;
-(id)commonMetadata;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(BOOL)providesPreciseDurationAndTiming;
-(id)trackIDs;
-(id)lyrics;
-(id)availableMetadataFormats;
-(long long)trackCount;
-(id)compatibleTrackForCompositionTrack:(id)arg1 ;
-(void*)_valueAsCFTypeForProperty:(CFStringRef)arg1 ;
-(void)_setPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 ;
-(id)initWithPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 trackIDs:(id)arg2 ;
@end

