/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface BRCRecentsChangeToken : NSObject {

	unsigned long long _notifRank;
	unsigned long long _databaseID;

}

@property (assign,nonatomic) unsigned long long notifRank;               //@synthesize notifRank=_notifRank - In the implementation block
@property (assign,nonatomic) unsigned long long databaseID;              //@synthesize databaseID=_databaseID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)changeTokenFromData:(id)arg1 ;
-(id)description;
-(unsigned long long)databaseID;
-(void)setDatabaseID:(unsigned long long)arg1 ;
-(void)setNotifRank:(unsigned long long)arg1 ;
-(id)toData;
-(unsigned long long)notifRank;
@end

