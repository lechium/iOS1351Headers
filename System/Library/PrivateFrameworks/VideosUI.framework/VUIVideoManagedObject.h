/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:04 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, NSData, NSNumber, NSDate, NSURL, NSSet;

@interface VUIVideoManagedObject : NSManagedObject

@property (nonatomic,copy) NSString * adamID; 
@property (nonatomic,retain) NSData * additionalFPSRequestParamsJSONData; 
@property (nonatomic,copy) NSNumber * bookmarkTime; 
@property (nonatomic,copy) NSDate * bookmarkTimeStamp; 
@property (nonatomic,copy) NSString * brandID; 
@property (nonatomic,copy) NSString * brandName; 
@property (nonatomic,copy) NSString * canonicalID; 
@property (nonatomic,copy) NSString * contentRatingDomain; 
@property (nonatomic,copy) NSNumber * contentRatingRank; 
@property (nonatomic,copy) NSDate * dateAdded; 
@property (assign,nonatomic) long long downloadState; 
@property (nonatomic,copy) NSNumber * downloadTaskIdentifier; 
@property (nonatomic,copy) NSURL * downloadURL; 
@property (nonatomic,copy) NSNumber * dsid; 
@property (nonatomic,copy) NSNumber * duration; 
@property (nonatomic,copy) NSString * externalID; 
@property (nonatomic,copy) NSURL * fpsCertificateURL; 
@property (nonatomic,copy) NSURL * fpsKeyServerURL; 
@property (nonatomic,copy) NSURL * fpsNonceURL; 
@property (nonatomic,copy) NSNumber * frequencyOfAgeConfirmation; 
@property (nonatomic,copy) NSString * genreName; 
@property (assign,nonatomic) BOOL isAdultContent; 
@property (nonatomic,copy) NSString * localPlaybackRelativeFilePath; 
@property (nonatomic,copy) NSURL * localPlaybackURL; 
@property (nonatomic,retain) NSData * mediaMetricsJSONData; 
@property (nonatomic,copy) NSURL * playbackURL; 
@property (nonatomic,copy) NSString * referenceID; 
@property (nonatomic,copy) NSDate * releaseDate; 
@property (nonatomic,copy) NSNumber * requiredAgeForPlayback; 
@property (nonatomic,copy) NSString * rtcServiceIdentifier; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) NSData * vpafMetricsJSONData; 
@property (nonatomic,retain) NSSet * fpsKeyInfo; 
@property (nonatomic,retain) NSSet * imageInfos; 
+(id)fetchRequest;
+(id)keyPathsForValuesAffectingLocalPlaybackURL;
-(id)mediaMetrics;
-(NSURL *)localPlaybackURL;
-(void)setLocalPlaybackURL:(NSURL *)arg1 ;
-(id)additionalFPSRequestParams;
@end

