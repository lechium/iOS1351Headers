/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:34 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSString;

@interface MiroMetadata : NSObject {

	NSArray* _allRanges;
	NSArray* _loudnessRanges;
	NSString* _identifier;

}

@property (retain) NSArray * allRanges;                        //@synthesize allRanges=_allRanges - In the implementation block
@property (readonly) NSArray * loudnessRanges;                 //@synthesize loudnessRanges=_loudnessRanges - In the implementation block
@property (nonatomic,copy) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setRanges:(id)arg1 ;
-(void)addRanges:(id)arg1 ;
-(NSArray *)allRanges;
-(void)removeRangesOfType:(unsigned long long)arg1 ;
-(void)setAllRanges:(NSArray *)arg1 ;
-(NSArray *)loudnessRanges;
-(void)getMetadata;
@end
