/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:05 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class VUIMediaItemEntityTypesFetchResponse, VUIMediaItemEntityTypesFetchResponseChanges;

@interface VUIMediaItemEntityTypesFetchControllerResult : NSObject {

	long long _fetchReason;
	VUIMediaItemEntityTypesFetchResponse* _fetchResponse;
	VUIMediaItemEntityTypesFetchResponseChanges* _fetchChanges;

}

@property (assign,nonatomic) long long fetchReason;                                                   //@synthesize fetchReason=_fetchReason - In the implementation block
@property (nonatomic,retain) VUIMediaItemEntityTypesFetchResponse * fetchResponse;                    //@synthesize fetchResponse=_fetchResponse - In the implementation block
@property (nonatomic,retain) VUIMediaItemEntityTypesFetchResponseChanges * fetchChanges;              //@synthesize fetchChanges=_fetchChanges - In the implementation block
-(id)init;
-(id)description;
-(void)setFetchChanges:(VUIMediaItemEntityTypesFetchResponseChanges *)arg1 ;
-(VUIMediaItemEntityTypesFetchResponseChanges *)fetchChanges;
-(long long)fetchReason;
-(VUIMediaItemEntityTypesFetchResponse *)fetchResponse;
-(void)setFetchReason:(long long)arg1 ;
-(id)initWithFetchReason:(long long)arg1 fetchResponse:(id)arg2 ;
-(void)setFetchResponse:(VUIMediaItemEntityTypesFetchResponse *)arg1 ;
@end
