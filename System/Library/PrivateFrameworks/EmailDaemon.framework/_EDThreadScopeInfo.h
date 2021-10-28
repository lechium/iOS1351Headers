/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:12 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate;

@interface _EDThreadScopeInfo : NSObject {

	BOOL _needsUpdate;
	long long _databaseID;
	NSDate* _lastViewedDate;

}

@property (nonatomic,readonly) long long databaseID;               //@synthesize databaseID=_databaseID - In the implementation block
@property (assign,nonatomic) BOOL needsUpdate;                     //@synthesize needsUpdate=_needsUpdate - In the implementation block
@property (nonatomic,retain) NSDate * lastViewedDate;              //@synthesize lastViewedDate=_lastViewedDate - In the implementation block
-(id)description;
-(BOOL)needsUpdate;
-(void)setNeedsUpdate:(BOOL)arg1 ;
-(void)setLastViewedDate:(NSDate *)arg1 ;
-(NSDate *)lastViewedDate;
-(long long)databaseID;
-(id)initWithDatabaseID:(long long)arg1 needsUpdate:(BOOL)arg2 lastViewedDate:(id)arg3 ;
@end
