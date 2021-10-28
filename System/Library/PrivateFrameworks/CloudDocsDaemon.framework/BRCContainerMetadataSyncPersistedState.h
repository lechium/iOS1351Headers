/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudDocsDaemon/BRCPersistedState.h>

@class CKServerChangeToken, NSDate, CKOperationGroup;

@interface BRCContainerMetadataSyncPersistedState : BRCPersistedState {

	BOOL _needsContainerMetadataSyncDown;
	BOOL _needsSharedDBSyncDown;
	CKServerChangeToken* _serverChangeToken;
	NSDate* _lastSyncDate;
	CKOperationGroup* _ckGroup;

}

@property (nonatomic,retain) CKServerChangeToken * serverChangeToken;              //@synthesize serverChangeToken=_serverChangeToken - In the implementation block
@property (retain) NSDate * lastSyncDate;                                          //@synthesize lastSyncDate=_lastSyncDate - In the implementation block
@property (assign,nonatomic) BOOL needsContainerMetadataSyncDown;                  //@synthesize needsContainerMetadataSyncDown=_needsContainerMetadataSyncDown - In the implementation block
@property (assign,nonatomic) BOOL needsSharedDBSyncDown;                           //@synthesize needsSharedDBSyncDown=_needsSharedDBSyncDown - In the implementation block
@property (nonatomic,retain) CKOperationGroup * ckGroup;                           //@synthesize ckGroup=_ckGroup - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)loadFromClientStateInSession:(id)arg1 options:(id)arg2 ;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)lastSyncDate;
-(CKServerChangeToken *)serverChangeToken;
-(void)setServerChangeToken:(CKServerChangeToken *)arg1 ;
-(void)setLastSyncDate:(NSDate *)arg1 ;
-(BOOL)needsContainerMetadataSyncDown;
-(BOOL)needsSharedDBSyncDown;
-(void)setNeedsContainerMetadataSyncDown:(BOOL)arg1 ;
-(void)setCkGroup:(CKOperationGroup *)arg1 ;
-(void)setNeedsSharedDBSyncDown:(BOOL)arg1 ;
-(CKOperationGroup *)ckGroup;
@end
