/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:33 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PMEditProviderProtocol.h>

@protocol PMEditProviderDelegate;
@class VEKProduction, NSArray, NSDictionary, NSString, VEKSong;

@interface PMMusicProvider : NSObject <PMEditProviderProtocol> {

	VEKProduction* _production;
	id<PMEditProviderDelegate> _delegate;
	unsigned long long groupingStyle;
	long long _selectedSection;
	NSArray* _featuredSongs;
	NSDictionary* _songsByMoodGroupingType;
	NSDictionary* _songsByGenreGroupingType;
	NSArray* _moodSectionKeys;
	NSArray* _genreSectionKeys;
	NSString* _currentSelectedSectionKey;

}

@property (nonatomic,retain) NSArray * featuredSongs;                                 //@synthesize featuredSongs=_featuredSongs - In the implementation block
@property (nonatomic,retain) NSDictionary * songsByMoodGroupingType;                  //@synthesize songsByMoodGroupingType=_songsByMoodGroupingType - In the implementation block
@property (nonatomic,retain) NSDictionary * songsByGenreGroupingType;                 //@synthesize songsByGenreGroupingType=_songsByGenreGroupingType - In the implementation block
@property (nonatomic,retain) NSArray * moodSectionKeys;                               //@synthesize moodSectionKeys=_moodSectionKeys - In the implementation block
@property (nonatomic,retain) NSArray * genreSectionKeys;                              //@synthesize genreSectionKeys=_genreSectionKeys - In the implementation block
@property (nonatomic,retain) NSString * currentSelectedSectionKey;                    //@synthesize currentSelectedSectionKey=_currentSelectedSectionKey - In the implementation block
@property (nonatomic,readonly) VEKSong * currentSong; 
@property (assign,nonatomic) unsigned long long groupingStyle; 
@property (assign,nonatomic) long long selectedSection;                               //@synthesize selectedSection=_selectedSection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) VEKProduction * production;                              //@synthesize production=_production - In the implementation block
@property (assign,nonatomic,__weak) id<PMEditProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<PMEditProviderDelegate>)delegate;
-(void)setDelegate:(id<PMEditProviderDelegate>)arg1 ;
-(long long)numberOfSections;
-(long long)selectedSection;
-(void)setSelectedSection:(long long)arg1 ;
-(VEKProduction *)production;
-(void)setProduction:(VEKProduction *)arg1 ;
-(VEKSong *)currentSong;
-(NSArray *)featuredSongs;
-(void)clearFeaturedSongs;
-(id)displayNameForSection:(long long)arg1 ;
-(id)indexPathOfSong:(id)arg1 ;
-(id)initWithProduction:(id)arg1 ;
-(long long)numberOfItemsinSection:(long long)arg1 ;
-(id)songAtIndex:(long long)arg1 section:(long long)arg2 ;
-(id)sortedMoodIDs;
-(void)setGroupingStyle:(unsigned long long)arg1 ;
-(id)songsGroupedByMood;
-(void)setSongsByMoodGroupingType:(NSDictionary *)arg1 ;
-(void)setMoodSectionKeys:(NSArray *)arg1 ;
-(id)sortedGenreIDs;
-(void)setGenreSectionKeys:(NSArray *)arg1 ;
-(unsigned long long)groupingStyle;
-(NSArray *)moodSectionKeys;
-(NSArray *)genreSectionKeys;
-(id)displayNameForGenreID:(id)arg1 ;
-(NSDictionary *)songsByMoodGroupingType;
-(NSDictionary *)songsByGenreGroupingType;
-(id)displayNameForMood:(long long)arg1 ;
-(void)setFeaturedSongs:(NSArray *)arg1 ;
-(id)sectionKeyForIndex:(long long)arg1 ;
-(BOOL)genreGroupContainsSongs;
-(void)setSongsByGenreGroupingType:(NSDictionary *)arg1 ;
-(NSString *)currentSelectedSectionKey;
-(void)setCurrentSelectedSectionKey:(NSString *)arg1 ;
@end

