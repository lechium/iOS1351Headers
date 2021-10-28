/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSError;

@interface PPContactQueryResultGuardedData : NSObject {

	BOOL _joined;
	NSArray* _cnContacts;
	NSArray* _fiaContacts;
	NSError* _latestError;

}

@property (nonatomic,retain) NSArray * cnContacts;               //@synthesize cnContacts=_cnContacts - In the implementation block
@property (nonatomic,retain) NSArray * fiaContacts;              //@synthesize fiaContacts=_fiaContacts - In the implementation block
@property (nonatomic,retain) NSError * latestError;              //@synthesize latestError=_latestError - In the implementation block
@property (assign,nonatomic) BOOL joined;                        //@synthesize joined=_joined - In the implementation block
-(NSArray *)cnContacts;
-(void)setCnContacts:(NSArray *)arg1 ;
-(NSArray *)fiaContacts;
-(void)setFiaContacts:(NSArray *)arg1 ;
-(NSError *)latestError;
-(void)setLatestError:(NSError *)arg1 ;
-(BOOL)joined;
-(void)setJoined:(BOOL)arg1 ;
@end
