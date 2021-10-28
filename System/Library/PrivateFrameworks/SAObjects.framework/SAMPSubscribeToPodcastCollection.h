/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:18 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainCommand.h>

@class NSString, SAMPPodcastCollection;

@interface SAMPSubscribeToPodcastCollection : SADomainCommand

@property (nonatomic,copy) NSString * assetInfo; 
@property (nonatomic,copy) NSString * hashedRouteUID; 
@property (nonatomic,retain) SAMPPodcastCollection * podcastCollection; 
+(id)subscribeToPodcastCollection;
+(id)subscribeToPodcastCollectionWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)groupIdentifier;
-(NSString *)assetInfo;
-(void)setAssetInfo:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)hashedRouteUID;
-(BOOL)requiresResponse;
-(void)setHashedRouteUID:(NSString *)arg1 ;
-(SAMPPodcastCollection *)podcastCollection;
-(void)setPodcastCollection:(SAMPPodcastCollection *)arg1 ;
@end
