/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:29 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSpotlight/CSSearchQuery.h>

@class NSString, CSSearchConnection;

@interface CSPrivateSearchQuery : CSSearchQuery {

	NSString* _indexPath;
	NSString* _resolvedIndexPath;
	CSSearchConnection* _savedConnection;

}

@property (nonatomic,retain) NSString * indexPath;                              //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,retain) NSString * resolvedIndexPath;                      //@synthesize resolvedIndexPath=_resolvedIndexPath - In the implementation block
@property (nonatomic,retain) CSSearchConnection * savedConnection;              //@synthesize savedConnection=_savedConnection - In the implementation block
-(void)start;
-(NSString *)indexPath;
-(id)connection;
-(void)setIndexPath:(NSString *)arg1 ;
-(NSString *)resolvedIndexPath;
-(void)setSavedConnection:(CSSearchConnection *)arg1 ;
-(void)setResolvedIndexPath:(NSString *)arg1 ;
-(CSSearchConnection *)savedConnection;
-(id)initWithPath:(id)arg1 queryString:(id)arg2 context:(id)arg3 attributes:(id)arg4 ;
-(id)initWithPath:(id)arg1 queryString:(id)arg2 attributers:(id)arg3 ;
-(id)initWithPath:(id)arg1 queryString:(id)arg2 context:(id)arg3 ;
@end

