/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, NSString;

@interface BLTBulletinSendQueueAttachmentInfo : NSObject {

	NSURL* _url;
	NSString* _key;

}

@property (nonatomic,retain) NSURL * url;               //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * key;              //@synthesize key=_key - In the implementation block
-(NSString *)key;
-(NSURL *)url;
-(void)setKey:(NSString *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
@end
