/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:58 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VCCaptionsSourceDelegate <NSObject>
@required
-(void)streamToken:(long long)arg1 didEnableCaptions:(BOOL)arg2 error:(id)arg3;
-(void)streamToken:(long long)arg1 didDisableCaptions:(BOOL)arg2 error:(id)arg3;
-(void)streamToken:(long long)arg1 didStartCaptioningWithReason:(unsigned char)arg2;
-(void)streamToken:(long long)arg1 didStopCaptioningWithReason:(unsigned char)arg2;
-(void)streamToken:(long long)arg1 didUpdateCaptions:(id)arg2;

@end

