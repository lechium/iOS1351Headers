/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSError;


@protocol SVPlayerStatusObserving <NSObject>
@property (nonatomic,readonly) long long status; 
@property (setter=onChange:,nonatomic,copy) id changeBlock; 
@property (nonatomic,copy,readonly) NSError * error; 
@required
-(NSError *)error;
-(long long)status;
-(id)changeBlock;
-(void)onChange:(/*^block*/id)arg1;

@end
