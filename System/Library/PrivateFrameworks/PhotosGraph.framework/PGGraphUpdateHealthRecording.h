/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PGGraphUpdateHealthRecording <NSObject>
@required
-(void)beginRecording;
-(void)recordNumberOfDatabaseChangesReceived:(unsigned long long)arg1 inBackground:(BOOL)arg2;
-(void)recordNumberOfDatabaseChangesConvertedToGraphChanges:(unsigned long long)arg1 inBackground:(BOOL)arg2;
-(void)recordNumberOfTimesGraphUpdatePaused:(unsigned long long)arg1;
-(void)recordTransactionSize:(unsigned long long)arg1;
-(void)endRecordingInBackground:(BOOL)arg1;

@end
