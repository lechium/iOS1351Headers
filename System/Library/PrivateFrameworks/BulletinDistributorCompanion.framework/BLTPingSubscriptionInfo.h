/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol BLTPingSubscriptionInfo <NSObject>
@property (nonatomic,copy,readonly) NSString * sectionID; 
@property (nonatomic,readonly) BOOL forBulletin; 
@property (nonatomic,readonly) BOOL canAck; 
@property (nonatomic,readonly) BOOL canAckOnLocalConnection; 
@required
-(NSString *)sectionID;
-(BOOL)canAck;
-(BOOL)forBulletin;
-(BOOL)canAckOnLocalConnection;

@end
