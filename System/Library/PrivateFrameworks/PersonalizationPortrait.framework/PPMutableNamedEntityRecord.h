/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:13 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <PersonalizationPortrait/PPNamedEntityRecord.h>

@class PPNamedEntity, PPSource, NSString, PPNamedEntityMetadata;

@interface PPMutableNamedEntityRecord : PPNamedEntityRecord

@property (nonatomic,retain) PPNamedEntity * entity; 
@property (nonatomic,retain) PPSource * source; 
@property (assign,nonatomic) unsigned long long algorithm; 
@property (assign,nonatomic) double initialScore; 
@property (assign,nonatomic) double decayRate; 
@property (nonatomic,retain) NSString * extractionOsBuild; 
@property (assign,nonatomic) unsigned char changeType; 
@property (assign,nonatomic) unsigned long long extractionAssetVersion; 
@property (assign,nonatomic) double sentimentScore; 
@property (nonatomic,retain) PPNamedEntityMetadata * metadata; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSource:(PPSource *)arg1 ;
-(void)setMetadata:(PPNamedEntityMetadata *)arg1 ;
-(void)setEntity:(PPNamedEntity *)arg1 ;
-(void)setAlgorithm:(unsigned long long)arg1 ;
-(void)setChangeType:(unsigned char)arg1 ;
-(void)setExtractionAssetVersion:(unsigned long long)arg1 ;
-(void)setExtractionOsBuild:(NSString *)arg1 ;
-(void)setDecayRate:(double)arg1 ;
-(void)setInitialScore:(double)arg1 ;
-(void)setSentimentScore:(double)arg1 ;
@end

