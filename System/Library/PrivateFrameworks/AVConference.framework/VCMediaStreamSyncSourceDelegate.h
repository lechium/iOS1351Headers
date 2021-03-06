/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:59 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VCMediaStreamSyncSourceDelegate <NSObject>
@required
-(void)updateSourceState:(int)arg1;
-(void)updateSourceNTPTime:(double)arg1 withRTPTimeStamp:(unsigned)arg2;
-(void)updateSourcePlayoutSampleRTPTimestamp:(unsigned)arg1 systemTime:(double)arg2 uuid:(id)arg3;

@end

