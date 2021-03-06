/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, PKEpisodeStoreId, PKShow;

@interface PKEpisode : NSObject <NSSecureCoding> {

	 title;
	 isExplicit;
	 duration;
	 storeId;
	 show;
	 guid;
	 uuid;
	 streamUrl;
	 episodeUuid;

}

@property (readonly,nonatomic) NSString * playbackIdentifier; 
@property (readonly,nonatomic) BOOL isInLibrary; 
@property (readonly,nonatomic) NSString * title; 
@property (readonly,nonatomic) NSDate * releaseDate; 
@property (readonly,nonatomic) BOOL isExplicit; 
@property (readonly,nonatomic) double duration; 
@property (readonly,nonatomic) PKEpisodeStoreId * storeId; 
@property (readonly,nonatomic) PKShow * show; 
@property (copy,nonatomic) NSString * guid; 
@property (copy,nonatomic) NSString * uuid; 
@property (readonly,nonatomic) NSString * streamUrl; 
@property (copy,nonatomic) NSString * episodeUuid; 
+(void)fetchEpisodeFrom:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)contentFrom:(id)arg1 ;
+(id)itemFrom:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg1 ;
+(long long)mediaTaskType;
-(id)initFrom:(id)arg1 ;
-(id)lookupEpisode;
-(NSString *)playbackIdentifier;
-(BOOL)isInLibrary;
-(void)updateForDatabaseMatch;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uuid;
-(NSString *)title;
-(double)duration;
-(void)setUuid:(NSString *)arg1 ;
-(PKShow *)show;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)guid;
-(PKEpisodeStoreId *)storeId;
-(NSDate *)releaseDate;
-(BOOL)isExplicit;
-(NSString *)streamUrl;
-(NSString *)episodeUuid;
-(id)initWithTitle:(id)arg1 releaseDate:(id)arg2 isExplicit:(BOOL)arg3 duration:(double)arg4 storeId:(id)arg5 show:(id)arg6 guid:(id)arg7 uuid:(id)arg8 streamUrl:(id)arg9 ;
-(void)setEpisodeUuid:(NSString *)arg1 ;
@end

