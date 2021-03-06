/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:22 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate;

@interface STStorageActionTipItem : NSObject {

	BOOL _recoverable;
	long long _size;
	NSDate* _lastUsedDate;
	NSDate* _createdDate;

}

@property (assign) long long size;                              //@synthesize size=_size - In the implementation block
@property (getter=isRecoverable) BOOL recoverable;              //@synthesize recoverable=_recoverable - In the implementation block
@property (retain) NSDate * lastUsedDate;                       //@synthesize lastUsedDate=_lastUsedDate - In the implementation block
@property (retain) NSDate * createdDate;                        //@synthesize createdDate=_createdDate - In the implementation block
-(long long)size;
-(void)setSize:(long long)arg1 ;
-(NSDate *)lastUsedDate;
-(NSDate *)createdDate;
-(void)setCreatedDate:(NSDate *)arg1 ;
-(void)setLastUsedDate:(NSDate *)arg1 ;
-(BOOL)isRecoverable;
-(void)setRecoverable:(BOOL)arg1 ;
@end

