/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:00 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSString, NSDate;

@interface PLCloudSharingViewedStateChangeJob : PLCloudSharingJob {

	BOOL _albumHasUnseenContent;
	BOOL _assetCollectionHasUnreadComments;
	long long _jobType;
	NSString* _albumGUID;
	long long _albumUnviewedAssetCount;
	NSString* _assetCollectionGUID;
	NSDate* _assetCollectionLastViewedCommentDate;

}

@property (assign,nonatomic) long long jobType;                                          //@synthesize jobType=_jobType - In the implementation block
@property (nonatomic,retain) NSString * albumGUID;                                       //@synthesize albumGUID=_albumGUID - In the implementation block
@property (assign,nonatomic) BOOL albumHasUnseenContent;                                 //@synthesize albumHasUnseenContent=_albumHasUnseenContent - In the implementation block
@property (assign,nonatomic) long long albumUnviewedAssetCount;                          //@synthesize albumUnviewedAssetCount=_albumUnviewedAssetCount - In the implementation block
@property (nonatomic,retain) NSString * assetCollectionGUID;                             //@synthesize assetCollectionGUID=_assetCollectionGUID - In the implementation block
@property (assign,nonatomic) BOOL assetCollectionHasUnreadComments;                      //@synthesize assetCollectionHasUnreadComments=_assetCollectionHasUnreadComments - In the implementation block
@property (nonatomic,retain) NSDate * assetCollectionLastViewedCommentDate;              //@synthesize assetCollectionLastViewedCommentDate=_assetCollectionLastViewedCommentDate - In the implementation block
+(void)markAlbum:(id)arg1 asHavingUnseenContent:(BOOL)arg2 ;
+(void)updateUnviewedAssetCollectionCount:(int)arg1 forAlbum:(id)arg2 ;
+(void)markAssetCollection:(id)arg1 asHavingUnreadComments:(BOOL)arg2 inAlbum:(id)arg3 ;
+(void)setLastViewedCommentDate:(id)arg1 forAssetCollection:(id)arg2 inAlbum:(id)arg3 ;
-(void)run;
-(id)description;
-(void)runDaemonSide;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2 ;
-(long long)daemonOperation;
-(NSString *)albumGUID;
-(long long)jobType;
-(void)setJobType:(long long)arg1 ;
-(void)setAlbumGUID:(NSString *)arg1 ;
-(void)_executeAlbumViewedStateChanged;
-(void)_executeAlbumUnviewedAssetCountChangedWithGroup;
-(void)_executeAssetCommentsReadStateChangedWithGroup;
-(void)_executeAssetLastViewedCommentDateChangedWithGroup;
-(BOOL)albumHasUnseenContent;
-(void)setAlbumHasUnseenContent:(BOOL)arg1 ;
-(long long)albumUnviewedAssetCount;
-(void)setAlbumUnviewedAssetCount:(long long)arg1 ;
-(NSString *)assetCollectionGUID;
-(void)setAssetCollectionGUID:(NSString *)arg1 ;
-(BOOL)assetCollectionHasUnreadComments;
-(void)setAssetCollectionHasUnreadComments:(BOOL)arg1 ;
-(NSDate *)assetCollectionLastViewedCommentDate;
-(void)setAssetCollectionLastViewedCommentDate:(NSDate *)arg1 ;
@end
