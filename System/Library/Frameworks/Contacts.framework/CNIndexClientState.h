/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:44 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CNChangeHistoryAnchor;

@interface CNIndexClientState : NSObject <NSSecureCoding> {

	BOOL _isFullSyncDone;
	long long _indexVersion;
	CNChangeHistoryAnchor* _fullSyncSnapshotAnchor;
	long long _fullSyncOffset;

}

@property (assign,nonatomic) long long indexVersion;                                      //@synthesize indexVersion=_indexVersion - In the implementation block
@property (assign,nonatomic) BOOL isFullSyncDone;                                         //@synthesize isFullSyncDone=_isFullSyncDone - In the implementation block
@property (nonatomic,retain) CNChangeHistoryAnchor * fullSyncSnapshotAnchor;              //@synthesize fullSyncSnapshotAnchor=_fullSyncSnapshotAnchor - In the implementation block
@property (assign,nonatomic) long long fullSyncOffset;                                    //@synthesize fullSyncOffset=_fullSyncOffset - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)clientStateWithData:(id)arg1 logger:(id)arg2 ;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)data;
-(BOOL)isFullSyncDone;
-(long long)indexVersion;
-(void)setIndexVersion:(long long)arg1 ;
-(void)setIsFullSyncDone:(BOOL)arg1 ;
-(long long)fullSyncOffset;
-(CNChangeHistoryAnchor *)fullSyncSnapshotAnchor;
-(void)setFullSyncOffset:(long long)arg1 ;
-(void)setFullSyncSnapshotAnchor:(CNChangeHistoryAnchor *)arg1 ;
@end
