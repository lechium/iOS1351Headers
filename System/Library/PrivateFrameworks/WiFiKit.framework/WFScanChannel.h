/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface WFScanChannel : NSObject {

	long long _channel;
	long long _flags;

}

@property (assign,nonatomic) long long channel;              //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic) long long flags;                //@synthesize flags=_flags - In the implementation block
-(id)init;
-(id)description;
-(long long)flags;
-(long long)channel;
-(void)setFlags:(long long)arg1 ;
-(void)setChannel:(long long)arg1 ;
-(id)initWithChannel:(long long)arg1 flags:(long long)arg2 ;
@end

