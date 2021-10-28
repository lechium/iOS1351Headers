/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:53 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAsset.h>

@class AVStreamDataParser, AVStreamDataAssetInspector, AVAssetSynchronousInspectorLoader, AVDispatchOnce, NSArray, NSDictionary;

@interface AVStreamDataAsset : AVAsset {

	AVStreamDataParser* _weakReferenceToParser;
	AVStreamDataAssetInspector* _inspector;
	AVAssetSynchronousInspectorLoader* _inspectorLoader;
	AVDispatchOnce* _tracksOnce;
	NSArray* _tracks;
	NSDictionary* _trackDictsByTrackID;

}
-(void)dealloc;
-(id)tracks;
-(id)parser;
-(id)_assetInspectorLoader;
-(id)_assetInspector;
-(OpaqueFigFormatReaderRef)_formatReader;
-(Class)_classForTrackInspectors;
-(id)copyAssetWithReplacementFormatDescription:(opaqueCMFormatDescriptionRef)arg1 forTrackID:(int)arg2 ;
-(id)copyAssetRemovingTrackID:(int)arg1 ;
-(id)formatDescriptionsForTrackID:(int)arg1 ;
-(id)copyAssetWithAdditionalTrackID:(int)arg1 mediaType:(id)arg2 ;
-(id)mediaTypeForTrackID:(int)arg1 ;
-(id)initWithParser:(id)arg1 tracks:(id)arg2 ;
@end
