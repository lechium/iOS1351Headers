/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:17 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DAEAS/ASTask.h>

@class NSString;

@interface ASFolderSyncTask : ASTask {

	NSString* _previousSyncKey;
	BOOL _requireChangedFolders;
	int _numDownloadedElements;
	long long _dataclasses;
	BOOL _isSpinning;

}

@property (assign,nonatomic) BOOL requireChangedFolders;              //@synthesize requireChangedFolders=_requireChangedFolders - In the implementation block
@property (assign,nonatomic) long long dataclasses;                   //@synthesize dataclasses=_dataclasses - In the implementation block
-(void)dealloc;
-(void)finishWithError:(id)arg1 ;
-(id)requestBody;
-(long long)dataclasses;
-(void)setDataclasses:(long long)arg1 ;
-(int)numDownloadedElements;
-(void)_setSpinning:(BOOL)arg1 ;
-(long long)taskStatusForExchangeStatus:(int)arg1 ;
-(int)commandCode;
-(BOOL)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(BOOL)processContext:(id)arg1 ;
-(id)initWithPreviousSyncKey:(id)arg1 ;
-(BOOL)requireChangedFolders;
-(void)setRequireChangedFolders:(BOOL)arg1 ;
@end

