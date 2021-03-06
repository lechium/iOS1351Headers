/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:36 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class FCSyncFileCoordinatedDictionary;

@interface FCFileCoordinatedAccountActionQueue : NSObject {

	FCSyncFileCoordinatedDictionary* _fileCoordinatedDictionary;

}

@property (nonatomic,retain) FCSyncFileCoordinatedDictionary * fileCoordinatedDictionary;              //@synthesize fileCoordinatedDictionary=_fileCoordinatedDictionary - In the implementation block
-(id)init;
-(id)initWithFileURL:(id)arg1 ;
-(FCSyncFileCoordinatedDictionary *)fileCoordinatedDictionary;
-(void)setFileCoordinatedDictionary:(FCSyncFileCoordinatedDictionary *)arg1 ;
-(BOOL)readLocalDataHint;
-(BOOL)enqueueActionWithType:(long long)arg1 ;
-(id)peekAtActionTypes;
-(BOOL)popActionTypesUpToCount:(unsigned long long)arg1 setLocalDataHintIfNeeded:(BOOL)arg2 ;
@end

