/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:23 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface _ML3ValidatableDatabase : NSObject {

	unsigned long long _queueID;
	NSString* _databasePath;
	unsigned long long _validationState;
	NSObject*<OS_dispatch_queue> _validationSerialQueue;

}

@property (nonatomic,copy) NSString * databasePath;                                           //@synthesize databasePath=_databasePath - In the implementation block
@property (assign,nonatomic) unsigned long long validationState;                              //@synthesize validationState=_validationState - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> validationSerialQueue;              //@synthesize validationSerialQueue=_validationSerialQueue - In the implementation block
-(id)init;
-(NSString *)databasePath;
-(id)initWithDatabasePath:(id)arg1 ;
-(void)setDatabasePath:(NSString *)arg1 ;
-(BOOL)currentQueueIsValidationQueue;
-(NSObject*<OS_dispatch_queue>)validationSerialQueue;
-(unsigned long long)validationState;
-(void)setValidationState:(unsigned long long)arg1 ;
-(void)setValidationSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
