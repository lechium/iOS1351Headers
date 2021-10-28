/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:39 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CKEntity, NSIndexPath;

@interface _CKAcknowledgmentAnimatorModelItem : NSObject {

	CKEntity* _entity;
	NSIndexPath* _indexPath;
	long long _ackVoteCount;
	long long _acknowledgmentType;

}

@property (nonatomic,retain) CKEntity * entity;                         //@synthesize entity=_entity - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPath;                   //@synthesize indexPath=_indexPath - In the implementation block
@property (assign,nonatomic) long long ackVoteCount;                    //@synthesize ackVoteCount=_ackVoteCount - In the implementation block
@property (assign,nonatomic) long long acknowledgmentType;              //@synthesize acknowledgmentType=_acknowledgmentType - In the implementation block
-(NSIndexPath *)indexPath;
-(void)setEntity:(CKEntity *)arg1 ;
-(CKEntity *)entity;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(void)setAcknowledgmentType:(long long)arg1 ;
-(void)setAckVoteCount:(long long)arg1 ;
-(long long)ackVoteCount;
-(long long)acknowledgmentType;
@end
