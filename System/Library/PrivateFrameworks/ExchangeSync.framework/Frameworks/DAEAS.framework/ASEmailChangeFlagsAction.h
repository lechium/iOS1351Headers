/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:17 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DataAccess/DAAction.h>

@interface ASEmailChangeFlagsAction : DAAction {

	BOOL _read;
	BOOL _flagged;
	unsigned long long _changedFlags;

}

@property (assign,nonatomic) BOOL read;                                    //@synthesize read=_read - In the implementation block
@property (assign,nonatomic) BOOL flagged;                                 //@synthesize flagged=_flagged - In the implementation block
@property (assign,nonatomic) unsigned long long changedFlags;              //@synthesize changedFlags=_changedFlags - In the implementation block
-(void)setRead:(BOOL)arg1 ;
-(BOOL)read;
-(void)setFlagged:(BOOL)arg1 ;
-(BOOL)flagged;
-(id)initWithServerID:(id)arg1 read:(BOOL)arg2 flagged:(BOOL)arg3 changedFlags:(unsigned long long)arg4 ;
-(void)appendApplicationDataForTask:(id)arg1 toWBXMLData:(id)arg2 ;
-(unsigned long long)changedFlags;
-(void)setChangedFlags:(unsigned long long)arg1 ;
@end

